//
//  RequestManager.m
//  OpenPlanet
//
//  Created by StarLord on 2018/8/7.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import "RequestManager.h"
#import "AFNetworking.h"
#import "TokenRequestManager.h"

/// 取消队列标志
static BOOL dispatchGroupIsCancle = NO;
@implementation RequestManager

#pragma mark - post请求
+ (void)POST:(NSString *)urlString params:(NSDictionary *)params haveToken:(BOOL)haveToken progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail {
    __weak typeof(self) weakSelf = self;
    // 加入队列组
    dispatch_group_async([[self class] completeQuete], dispatch_get_global_queue(0, 0), ^{
        // 等待
        dispatch_semaphore_wait([[weakSelf class] semaphore], DISPATCH_TIME_FOREVER);
        if (dispatchGroupIsCancle) {
            // 如果是取消执行任务
            dispatch_async(dispatch_get_main_queue(), ^{
                if(fail){
                    fail(@"取消操作");
                }
            });
            // 激活
            dispatch_semaphore_signal([[weakSelf class] semaphore]);
            return;
        }
        Log(@"queue 开始执行 post");
        [weakSelf blockKernelPOST:urlString params:params haveToken:haveToken progress:progress success:success fail:fail];
    });
}

+ (void)blockKernelPOST:(NSString *)urlString params:(NSDictionary *)params haveToken:(BOOL)haveToken progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail {
    NSMutableDictionary *paramsDic = [NSMutableDictionary dictionaryWithDictionary:params];
    NSString *encodeStr = (NSString *)CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef)urlString, NULL, NULL, kCFStringEncodingUTF8));
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    if (haveToken) {
        // 需要传token就将token设置在参数中
        NSString *token = [TokenRequestManager access_token];
        [paramsDic setObject:SafeString(token) forKey:@"access_token"];
    }
    [manager POST:encodeStr parameters:paramsDic progress:^(NSProgress * _Nonnull uploadProgress) {
        CGFloat pro= 100.0 * uploadProgress.completedUnitCount / uploadProgress.totalUnitCount;
        dispatch_async(dispatch_get_main_queue(), ^{
            if (progress) {
                progress(pro);
            }
        });
    }  success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        if (!haveToken){
            dispatch_async(dispatch_get_main_queue(), ^{
                dispatch_semaphore_signal([[self class] semaphore]);
                if (success) {
                    success(responseObject);
                }
            });
            return ;
        }
        // 验证token
        [TokenRequestManager isTokenExpiredWithResponse:responseObject complete:^(BOOL isTokenExpired){
            if (isTokenExpired) {
                [self blockKernelPOST:encodeStr params:params haveToken:haveToken progress:progress success:success fail:fail];
            }else{
                dispatch_async(dispatch_get_main_queue(), ^{
                    if (success) {
                        success(responseObject);
                    }
                });
                // 激活wait线程
                Log(@"queue 结束执行");
                dispatch_semaphore_signal([[self class] semaphore]);
            }
        } fail:^(NSString *error){
            Log(@"queue %@", urlString);
            if (!error) {
                // 没有error值，取消队列
                // 取消队列操作
                [self cancleDispatchGroup];
            } else {
                dispatch_async(dispatch_get_main_queue(), ^{
                    if(fail){
                        fail(error);
                    }
                });
            }
//            NSParameterAssert(!error);
            // 激活wait线程
            dispatch_semaphore_signal([[self class] semaphore]);
        }];
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if(fail){
                fail(error.localizedDescription);
            }
            // 激活wait线程
            Log(@"queue 结束执行 f");
            dispatch_semaphore_signal([[self class] semaphore]);
        });
    }];
}

#pragma mark - get请求
+ (void)GET:(NSString *)urlString params:(NSMutableDictionary *)params haveToken:(BOOL)haveToken progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail {
    __weak typeof(self) weakSelf = self;
    // 加入队列组
    dispatch_group_async([[self class] completeQuete], dispatch_get_global_queue(0, 0), ^{
        // 等待
        dispatch_semaphore_wait([[weakSelf class] semaphore], DISPATCH_TIME_FOREVER);
        if (dispatchGroupIsCancle) {
            // 如果是取消执行任务
            dispatch_async(dispatch_get_main_queue(), ^{
                if(fail){
                    fail(@"取消操作");
                }
            });
            // 激活
            dispatch_semaphore_signal([[weakSelf class] semaphore]);
            return;
        }
        Log(@"queue 开始执行 get");
        [weakSelf blockKernelGET:urlString params:params haveToken:haveToken progress:progress success:success fail:fail];
    });
}

+ (void)blockKernelGET:(NSString *)urlString params:(NSMutableDictionary *)params haveToken:(BOOL)haveToken progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail {
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    NSString *urlStr = urlString;
    if (haveToken) {
        // 需要传token就将token设置在参数中
        NSString *token = [TokenRequestManager access_token];
        if ([urlStr rangeOfString:@"?"].location == NSNotFound) {
            urlStr = [urlStr stringByAppendingString:[NSString stringWithFormat:@"?access_token=%@", SafeString(token)]];
        } else {
            urlStr = [urlStr stringByAppendingString:[NSString stringWithFormat:@"&access_token=%@", SafeString(token)]];
        }
    }
    NSString *encodeStr = (NSString *)CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef)urlStr, NULL, NULL, kCFStringEncodingUTF8));
    [manager GET:encodeStr parameters:params progress:^(NSProgress * _Nonnull downloadProgress) {
        CGFloat pro= 100.0 * downloadProgress.completedUnitCount / downloadProgress.totalUnitCount;
        dispatch_async(dispatch_get_main_queue(), ^{
            if (progress) {
                progress(pro);
            }
        });
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        if (!haveToken){
            dispatch_async(dispatch_get_main_queue(), ^{
                dispatch_semaphore_signal([[self class] semaphore]);
                if (success) {
                    success(responseObject);
                }
            });
            return ;
        }
        // 验证token
        [TokenRequestManager isTokenExpiredWithResponse:responseObject complete:^(BOOL isTokenExpired){
            if (isTokenExpired) {
                [self blockKernelGET:urlString params:params haveToken:haveToken progress:progress success:success fail:fail];
            }else{
                
                dispatch_async(dispatch_get_main_queue(), ^{
                    if (success) {
                        success(responseObject);
                    }
                });
                // 激活wait线程
                Log(@"queue 结束执行");
                dispatch_semaphore_signal([[self class] semaphore]);
            }
        } fail:^(NSString *error){
            if (!error) {
                // 没有error值，取消队列
                // 取消队列操作
                [self cancleDispatchGroup];
            } else {
                dispatch_async(dispatch_get_main_queue(), ^{
                    if(fail){
                        fail(error);
                    }
                });
            }
            Log(@"queue %@ token失败处理前", urlString);
//            NSParameterAssert(!error);
            // 激活wait线程
            dispatch_semaphore_signal([[self class] semaphore]);
        }];
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSHTTPURLResponse *responses = (NSHTTPURLResponse *)task.response;
        if (responses.statusCode == 401) {
            // 刷新token
            [TokenRequestManager refreshTokenLogicalComplete:^(BOOL sender) {
                // 重新请求
                [self blockKernelGET:urlString params:params haveToken:haveToken progress:progress success:success fail:fail];
            } fail:^(NSString *error){
                if (!error) {
                    // 没有error值，取消队列
                    // 取消队列操作
                    [self cancleDispatchGroup];
                } else {
                    dispatch_async(dispatch_get_main_queue(), ^{
                        if(fail){
                            fail(error);
                        }
                    });
                }
                Log(@"queue %@ token失败处理前", urlString);
//                NSParameterAssert(!error);
                // 激活wait线程
                dispatch_semaphore_signal([[self class] semaphore]);
            }];
        } else {
            dispatch_async(dispatch_get_main_queue(), ^{
                if(fail){
                    fail(error.localizedDescription);
                }
            });
            // 激活wait线程
            Log(@"queue 结束执行 f code %ld", responses.statusCode);
            dispatch_semaphore_signal([[self class] semaphore]);
        }
    }];
}

#pragma mark - 取消队列
+ (void)cancleDispatchGroup {
    dispatchGroupIsCancle = YES;
}

#pragma mark - 队列组
+ (dispatch_group_t)completeQuete {
    // 队列组
    static dispatch_group_t group = NULL;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        group = dispatch_group_create();
        dispatch_semaphore_signal([[self class] semaphore]);
    });
    return group;
}

#pragma mark - 信号量
+ (dispatch_semaphore_t)semaphore {
    // 信号量
    static dispatch_semaphore_t sema = NULL;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sema = dispatch_semaphore_create(0);
    });
    return sema;
}

@end
