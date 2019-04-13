//
//  TCLoginManager.h
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/12.
//  Copyright © 2018年 wsl. All rights reserved.
//  登录网络请求类
//

#import <Foundation/Foundation.h>
#import "TalkChainHeader.h"

@interface TCLoginManager : NSObject

/// MARK: 检查账户是否存在(account为手机号或者邮箱)
+ (void)checkAccountIsExist:(NSString *)account success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 获取手机验证码
+ (void)phoneSMSWithPhone:(NSString *)phone success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 获取邮箱验证码
+ (void)emailSMSWithEmail:(NSString *)email success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK：校验手机验证码
+ (void)checkPhoneSMSWithPhone:(NSString *)phone code:(NSString *)code success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 注册
+ (void)registerNewUserWithPhone:(NSString *)phone
                        nickName:(NSString *)nickName
                        password:(NSString *)password
                      inviteCode:(NSString *)inviteCode
                    planetEnName:(NSString *)planetEnName
                         success:(SuccessBlock)success
                            fail:(FailBlock)fail;

/// MARK: 验证邀请码
+ (void)checkInviteCode:(NSString *)inviteCode success:(SuccessBlock)success fail:(FailBlock)fail;


/// MARK: 登录
+ (void)loginWithAccount:(NSString *)phone password:(NSString *)password success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 手机验证码登录
+(void)SMSLoginWithPhone:(NSString *)phone smsCode:(NSString *)smsCode success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 邮箱验证码登录
+ (void)emailLoginWithEmail:(NSString *)email
                  emaliCode:(NSString *)emaliCode
                    success:(SuccessBlock)success
                       fail:(FailBlock)fail;
/// MARK: 根据Token获取用户信息
+ (void)getUserInfoWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 同步通讯录
+ (void)uploadFans:(NSArray *)peoples progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 获取通讯录
+ (void)loadPeopleWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;


/// MARK: 保存钱包地址和公钥
+ (void)saveWalletWithWalletAddress:(NSString *)walletAddress
                          publicKey:(NSString *)publicKey
                       comPublicKey:(NSString *)comPublieKey
                       isAddYinZuan:(BOOL)isAddYinZuan
                            success:(SuccessBlock)success
                               fail:(FailBlock)fail;

/// MARK: 重置密码
+ (void)resetPassword:(NSString *)newPassword success:(SuccessBlock)success fail:(FailBlock)fail;

@end


@interface TCLoginManager (Base)

/// MARK: 基础GET请求
+ (void)GET:(NSString *)localUrl params:(nullable NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;

/// MARK: 基础POST请求
+ (void)POST:(NSString *)localUrl params:(nullable NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 接口失败文字
+ (NSString *)showFailMessage:(NSError *)error;

@end
