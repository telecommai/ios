//
//  TCLoginManager.m
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/12.
//  Copyright © 2018年 wsl. All rights reserved.
//  登录网络请求类
//

#import "TCLoginManager.h"
#import "AFNetworking.h"
#import "TokenRequestManager.h"
#import "RequestManager.h"

@implementation TCLoginManager

/// MARK: 检查账户是否存在(account为手机号或者邮箱)
+ (void)checkAccountIsExist:(NSString *)account success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *localUrl = @"/tcserver/user/login";
    NSDictionary *params = @{@"phoneNumber":SafeString(account)};
    [self GET:localUrl params:params success:success fail:fail];
}


/// MARK: 获取手机验证码
+ (void)phoneSMSWithPhone:(NSString *)phone success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *localUrl = @"/tcserver/user/sendVerifyCode2mobilePhone";
    NSDictionary *params = @{@"phoneNumber":SafeString(phone)};
    [self GET:localUrl params:params success:success fail:fail];
}

/// MARK: 获取邮箱验证码
+ (void)emailSMSWithEmail:(NSString *)email success:(SuccessBlock)success fail:(FailBlock)fail {
    NSString *localUrl = @"/tcserver/user/sendVerifyCode2email";
    NSDictionary *params = @{@"email":SafeString(email)};
    [self POST:localUrl params:params success:success fail:fail];
}


/// MARK: 校验手机验证码
+ (void)checkPhoneSMSWithPhone:(NSString *)phone code:(NSString *)code success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *localUrl = @"/tcserver/user/verifyPhoneCode";
    NSDictionary *params = @{
                             @"phoneNumber":SafeString(phone),
                             @"code":SafeString(code),
                             };
    [self GET:localUrl params:params success:success fail:fail];
}



/// MARK: 注册
+ (void)registerNewUserWithPhone:(NSString *)phone
                        nickName:(NSString *)nickName
                        password:(NSString *)password
                      inviteCode:(NSString *)inviteCode
                    planetEnName:(NSString *)planetEnName
                         success:(SuccessBlock)success
                            fail:(FailBlock)fail{

    NSString *localUrl = @"/tcserver/user/register";
    NSDictionary *params = @{
                             @"phoneNumber":SafeString(phone),
                             @"userName":SafeString(nickName),
                             @"password":SafeString(password),
                             @"inviteCode":SafeString(inviteCode),
                             @"planet":SafeString(planetEnName)
                             };
    [self GET:localUrl params:params success:success fail:fail];
}


/// MAKR: 校验邀请码
+ (void)checkInviteCode:(NSString *)inviteCode success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *localUrl = @"/tcserver/user/verifyInviteCodeAvailabilityCount";
    NSDictionary *params = @{@"inviteCode":SafeString(inviteCode)};
    [self GET:localUrl params:params success:success fail:fail];
}



/// MARK: 登录
+ (void)loginWithAccount:(NSString *)account password:(NSString *)password success:(SuccessBlock)success fail:(FailBlock)fail{
    NSDictionary *params = @{
                             @"grant_type":@"password",
                             @"passwordType":@"password",
                             @"username":SafeString(account),
                             @"password":SafeString(password)
                             };
    [TokenRequestManager tokenRequestWithType:TokenRequestTypeLogin changeParams:params success:^(id result) {
        if (success) success(result);
    } fail:^(NSString *errorDescription) {
        if (fail) fail(errorDescription);
    }];
}

#pragma mark - 验证码登录
+ (void)SMSLoginWithPhone:(NSString *)phone
                  smsCode:(NSString *)smsCode
                  success:(SuccessBlock)success
                     fail:(FailBlock)fail{
    NSDictionary *params = @{
                             @"grant_type":@"password",
                             @"passwordType":@"smsCode",
                             @"username":SafeString(phone),
                             @"password":SafeString(smsCode)
                             };
    [TokenRequestManager tokenRequestWithType:TokenRequestTypeSMSLogin changeParams:params success:^(id result) {
        if (success) success(result);
    } fail:^(NSString *errorDescription) {
        if (fail) fail(errorDescription);
    }];
}

#pragma mark - 邮箱验证码登录
+ (void)emailLoginWithEmail:(NSString *)email
                  emaliCode:(NSString *)emaliCode
                  success:(SuccessBlock)success
                     fail:(FailBlock)fail{
    NSDictionary *params = @{
                             @"grant_type":@"password",
                             @"passwordType":@"emailCode",
                             @"username":SafeString(email),
                             @"password":SafeString(emaliCode)
                             };
    [TokenRequestManager tokenRequestWithType:TokenRequestTypeEmailLogin changeParams:params success:^(id result) {
        if (success) success(result);
    } fail:^(NSString *errorDescription) {
        if (fail) fail(errorDescription);
    }];
}

/// MARK: 获取用户信息
+ (void)getUserInfoWithSuccess:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *urlString = [NSString stringWithFormat:@"%@/tcserver/oauth/userInfo",TCUrl];
    [RequestManager GET:urlString params:nil haveToken:YES progress:nil success:^(id result) {
        if (success) success(result);
    } fail:^(NSString *errorDescription) {
        if(fail) fail(errorDescription);
    }];
}

/// MARK: 上传通讯录
+ (void)uploadFans:(NSArray *)peoples progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *urlString = [NSString stringWithFormat:@"%@/tcserver/linkMan/upLoadLinkMans",TCUrl];
    NSString *jsonString =  [NSString jsonInfoToJsonString:@{@"linkMans":peoples}];
    NSDictionary *params = @{@"linkMans":SafeString(jsonString)};
    [RequestManager POST:urlString params:params haveToken:YES progress:^(CGFloat sender) {
        if (progress) progress(sender);
    } success:^(id result) {
        if (success) success(result);
    } fail:^(NSString *errorDescription) {
        if (fail) fail(errorDescription);
    }];
}

/// MARK: 获取通讯录
+ (void)loadPeopleWithSuccess:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *urlString = [NSString stringWithFormat:@"%@/tcserver/linkMan/getLinkMans",TCUrl];
    [RequestManager GET:urlString params:nil haveToken:YES progress:nil success:^(id result) {
        if (success) success(result);
        } fail:^(NSString *errorDescription) {
        if (fail) fail(errorDescription);
    }];
}


/// MARK: 保存钱包公钥和钱包地址
+ (void)saveWalletWithWalletAddress:(NSString *)walletAddress publicKey:(NSString *)publicKey comPublicKey:(NSString *)comPublicKey isAddYinZuan:(BOOL)isAddYinZuan success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *urlString = [NSString stringWithFormat:@"%@/tcserver/user/updateUserEthPublicKeyAndAddress",TCUrl];
    NSMutableDictionary *params = @{
                                    @"ethAddress":SafeString(walletAddress),
                                    @"ethPublicKey":SafeString(publicKey),
                                    @"comPublicKey":SafeString(comPublicKey),
                                    }.mutableCopy;
    
    if (isAddYinZuan) {
        [params setValue:@"1" forKey:@"needAddIntegral"];
    }
    [RequestManager POST:urlString params:params haveToken:YES progress:nil success:^(id result) {
        if (success) success(result);
    } fail:^(NSString *errorDescription) {
        if(fail) fail(errorDescription);
    }];
}

#pragma mark - 重置密码
+ (void)resetPassword:(NSString *)newPassword success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *urlString = [NSString stringWithFormat:@"%@/tcserver/user/resetPassword",TCUrl];
    NSDictionary *params = @{@"newPassword":SafeString(newPassword)};
    [RequestManager POST:urlString params:params haveToken:YES progress:nil success:^(id result) {
        if (success) success(result);
    } fail:^(NSString *errorDescription) {
        if(fail) fail(errorDescription);
    }];
}

@end



@implementation TCLoginManager (Base)

// MARK: 基础GET请求
+ (void)GET:(NSString *)localUrl params:(nullable NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *url = [NSString stringWithFormat:@"%@%@",TCUrl,localUrl];
    [self.httpManager GET:url parameters:params progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (success) success(responseObject);
        });
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (fail) fail([self showFailMessage:error]);
        });
    }];
}

// MARK: 基础POST请求
+ (void)POST:(NSString *)localUrl params:(nullable NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail{
    NSString *url = [NSString stringWithFormat:@"%@%@",TCUrl,localUrl];
    [self.httpManager POST:url parameters:params progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (success) success(responseObject);
        });
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (fail) fail([self showFailMessage:error]);
        });
    }];
}

// MARK: 请求失败之后提示信息
+ (NSString *)showFailMessage:(NSError *)error{
    NSString *strMsg=nil;
    long errorCode=[error code];
    switch (errorCode){
        case -1009://网络无连接
            strMsg=@"当前网络不可用，请检查网络设置";
            break;
        case -1001://网络请求超时
            strMsg=@"网络请求超时";
            break;
        default:
            strMsg=@"网络不给力";
            break;
    }
    return strMsg;
}

+ (AFHTTPSessionManager *)httpManager{
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    manager.responseSerializer = [AFJSONResponseSerializer serializer];
    manager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"application/json", @"text/html",@"text/json", @"text/javascript", @"text/plain",@"application/x-www-form-urlencoded", nil];
    return manager;
}

@end
