//
//  BTCWalletManager.h
//  BTCCore
//
//  Created by 王胜利 on 2018/6/26.
//  Copyright © 2018年 pansoft. All rights reserved.
//  BTC钱包管理类
//

#import <Foundation/Foundation.h>
#import "BRWallet.h"
#import "BRKey.h"

@interface BTCWallet : NSObject

/// 钱包
@property (nonatomic, strong) BRWallet *wallet;
/// BRKey
@property (nonatomic, strong) BRKey *brKey;
/// 种子
@property (nonatomic, copy)   NSData *seed;
/// 助记词
@property (nonatomic, copy)   NSString *seedPhrase;
/// 公钥
@property (nonatomic, copy)   NSString *publicKey;
/// 私钥
@property (nonatomic, copy)   NSString *privateKey;

@end

@interface BTCWalletManager : NSObject

/// 检查BTC助记词是否可用
+ (BOOL)seedPharseIsValid:(NSString *)seedPharse;
/// 创建BTC钱包助记词
+ (BTCWallet *)generateRandomSeed;
/// 通过助记词获取钱包
+ (BTCWallet *)btcWalletWithSeedPhrase:(NSString *)seedPhrase;
/// 通过助记词获取钱包
+ (void)walletWithSeedPhrase:(NSString *)seedPhrase complete:(void (^)(BOOL, BTCWallet *))complete;
/// 保存钱包到keyChain
+ (BOOL)saveBtcWalletToKeyChain:(BTCWallet *)btcWallet password:(NSString *)password;

@end
