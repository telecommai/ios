//
//  EOSManager.h
//  WalletManager
//
//  Created by 王胜利 on 2018/8/3.
//  Copyright © 2018年 pansoft. All rights reserved.
//  EOS创建、交易管理器
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Constant.h"


/// 是否是EOS测试环境
#define EOS_TEST            0
/// EOS币单位(正式：EOS ,测试：SYS)
#define EOS_UNIT            EOS_TEST ? @"SYS" : @"EOS"
/// EOS创建账户 buyrambytes b
#define BUY_RAM_BYTES       @"4000"
/// EOS创建账户 cpu ms
#define BUY_CPU_MS          @"10.00"
#define BUY_CPU_Value       @"0.3000"
/// EOS创建账户 net KB
#define BUY_NET_KB          @"1.0"


@interface EOSManager : NSObject


/**
 EOS创建账户

 @param password 密码
 @param fromAccount 花费EOS的账户
 @param fromPrivateKey 花费EOS的账户私钥
 @param toAccount 创建账户名
 @param toOwnerPublicKey 创建账户Owner公钥
 @param toActivePublicKey 创建账户Active公钥
 @param cpuQuantity cpu花费
 @param netQuantity net花费
 @param success 创建成功
 @param fail eos账户创建失败
 */
+ (void)eosCreateAccountWithPassword:(NSString *)password
                         fromAccount:(NSString *)fromAccount
                      fromPrivateKey:(NSString *)fromPrivateKey
                           toAccount:(NSString *)toAccount
                    toOwnerPublicKey:(NSString *)toOwnerPublicKey
                   toActivePublicKey:(NSString *)toActivePublicKey
                         cpuQuantity:(NSString *)cpuQuantity
                         netQuantity:(NSString *)netQuantity
                             success:(SuccessBlock)success
                                fail:(FailBlock)fail;




/**
 EOS转账

 @param password 密码
 @param fromAccount 转出账户
 @param fromPrivateKey 转出私钥
 @param toAccount 转入用户
 @param value 转账金额
 @param memo 备注
 @param success 转账成功
 @param fail 转账失败
 */
+ (void)eosTxWithPassword:(NSString *)password
              fromAccount:(NSString *)fromAccount
           fromPrivateKey:(NSString *)fromPrivateKey
                toAccount:(NSString *)toAccount
                    value:(NSString *)value
                     memo:(NSString *)memo
                  success:(SuccessBlock)success
                     fail:(FailBlock)fail;


@end
