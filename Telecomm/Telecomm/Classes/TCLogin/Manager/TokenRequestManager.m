//
//  TokenRequestManager.m
//  TalkChain
//
//  Created by 王胜利 on 2018/3/19.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import "TokenRequestManager.h"
#import "AFNetworking.h"
#import "ViewControllerManager.h"
#import "AppDelegate.h"
#import "EnvironmentUtil.h"
#import "JFLanguageManager.h"

@implementation TokenRequestManager

#pragma mark - 获取临时token
+ (NSString *)access_token{
    return [EnvironmentVariable getPropertyForKey:@"access_token" WithDefaultValue:@""];
}
#pragma mark - 获取长时长token
+ (NSString *)refresh_token{
    return [EnvironmentVariable getPropertyForKey:@"refresh_token" WithDefaultValue:@""];
}

#pragma mark - 根据类型请求token
+ (void)tokenRequestWithType:(TokenRequestType)type changeParams:(NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *urlString = [NSString stringWithFormat:@"%@/tcserver/oauth/accessToken",TCUrl];
    NSString *encodeStr = (NSString *)CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef)urlString, NULL, NULL, kCFStringEncodingUTF8));

    NSMutableDictionary *lastParams = [NSMutableDictionary dictionaryWithDictionary:params];
    [lastParams setValue:client_id_value forKey:@"client_id"];
    [lastParams setValue:client_secret_value forKey:@"client_secret"];

    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];

    [manager POST:encodeStr parameters:lastParams progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        dispatch_async(dispatch_get_main_queue(), ^{

            // 1.判断token信息是否存在
            if (!StringIsEmpty([responseObject valueForKey:@"access_token"]) && !StringIsEmpty([responseObject valueForKey:@"refresh_token"])) {
                // 2.保存token信息
                [EnvironmentVariable setProperty:[responseObject valueForKey:@"access_token"] forKey:@"access_token"];
                [EnvironmentVariable setProperty:[responseObject valueForKey:@"refresh_token"] forKey:@"refresh_token"];
                [EnvironmentVariable setProperty:[responseObject valueForKey:@"expires_in"] forKey:@"expires_in"];

                /// 登录情况下
                if (type == TokenRequestTypeLogin ||type ==TokenRequestTypeSMSLogin ||type == TokenRequestTypeEmailLogin) {
                    NSMutableDictionary *userInfo = [NSMutableDictionary dictionaryWithDictionary:[responseObject valueForKey:@"userInfo"]];
                    /// 3 判断有用户信息是否存在
                    if (userInfo && !StringIsEmpty([responseObject valueForKey:@"access_token"]) && !StringIsEmpty([responseObject valueForKey:@"refresh_token"])) {
                        switch (type) {
                            case TokenRequestTypeLogin:{
                                [userInfo setValue:params[@"password"] forKey:@"walletPassword"];
                            }
                                break;
                            case TokenRequestTypeSMSLogin:{
                                [userInfo setValue:userInfo[@"password"] forKey:@"walletPassword"];
                            }
                                break;
                            case TokenRequestTypeEmailLogin:{
                                [userInfo setValue:userInfo[@"password"] forKey:@"walletPassword"];
                            }
                                break;
                            default:
                                break;
                        }
                        // 4 保存用户信息
                        [EnvironmentUtil saveUserInfoWithDict:userInfo];
                        success(responseObject);
                    }else{
                        fail(@"无用户信息tokenBad");
                    }
                }else{
                    success(responseObject);
                }
            }else{
                fail(@"无token信息tokenBad");
            }
        });
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            fail(error.localizedDescription);
        });
    }];
}


#pragma mark - 判断token是否过期(token过期自动刷新token，刷新失败跳转登录页面)
static NSInteger i = 0;
+ (void)isTokenExpiredWithResponse:(NSDictionary *)response complete:(BoolBlock)complete fail:(void(^)(NSString *error))fail {
    // token过期
    if ([[response valueForKey:@"result"] isEqualToString:@"fail"] && [[response valueForKey:@"msg"] isEqualToString:@"invalid_token"]) {
        [self refreshTokenLogicalComplete:complete fail:fail];
    }else{
        // token正常
        complete(NO);
    }
}

#pragma mark - 刷新token逻辑处理
+ (void)refreshTokenLogicalComplete:(BoolBlock)complete fail:(void(^)(NSString *error))fail {
    WEAK_SELF(weakSelf);
    [self refreshAccessTokenWithSuccess:^(id result) {
        complete(YES);
    } fail:^(NSString *errorDescription) {
        if (i < 3) {
            i ++;
            Log(@"queue 执行 %ld", i);
            [weakSelf refreshTokenLogicalComplete:complete fail:fail];
        } else {
            Log(@"queue - %ld", i);
            i = 0;
            Log(@"queue -- %ld", i);
            dispatch_async(dispatch_get_main_queue(), ^{
                // 自定义字段，用来排除接口不通失败的情况
                if ([errorDescription rangeOfString:@"tokenBad"].location != NSNotFound || [errorDescription containsString:@"400"]) {
                    // 接口通了，但是没有返回token
                    if (fail) {
                        fail(nil);
                    }
                    [EnvironmentVariable setProperty:@(LoginStepDefault) forKey:LOGIN_STEP];
                    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"userLoginExpiredLoginAgain" table:Table_Tools comment:@"用户登录过期,请重新登录"] preferredStyle:UIAlertControllerStyleAlert];
                    [alertController addAction:[UIAlertAction actionWithTitle:[JFLanguageManager stringWithKey:@"goLogin" table:Table_Tools comment:@"去登录"] style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                        [(AppDelegate *)APPDELEGATE logout];
                    }]];
                    [ViewControllerManager presentViewController:alertController animated:YES completion:nil];
                } else {
                    // 接口本身不通
                    if (fail) {
                        fail(errorDescription);
                    }
                }
            });
        }
    }];
}

#pragma mark - 更新token
+ (void)refreshAccessTokenWithSuccess:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *refreshToken = (NSString *)[EnvironmentVariable getPropertyForKey:@"refresh_token" WithDefaultValue:@""];
    NSDictionary *params = @{
                             @"grant_type":@"refresh_token",
                             @"refresh_token":refreshToken
                             };
    [self tokenRequestWithType:TokenRequestTypeRefresh changeParams:params success:^(id result) {
        success(result);
    } fail:^(NSString *errorDescription) {
        fail(errorDescription);
    }];
}


@end
