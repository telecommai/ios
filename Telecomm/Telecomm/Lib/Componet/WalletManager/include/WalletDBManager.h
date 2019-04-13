//
//  OpenWalletDBManager.h
//  OpenPlanet
//
//  Created by 王胜利  on 2018/6/8.
//  Copyright © 2018年 wsl. All rights reserved.
//  钱包数据库操作类
//

#import <Foundation/Foundation.h>
#import "WalletHeader.h"
#import "WalletModel.h"
#import "WalletUtil.h"

@interface WalletDBManager : NSObject


/// 请求所有钱包
+ (NSArray <WalletModel *>*)queryAllWallets:(BlockChainType)type;
/// 请求所有非观察者钱包
+ (NSArray<WalletModel *> *)queryAllNoSeeWallets:(BlockChainType)type;
/// 获取当前钱包
+ (WalletModel *)queryCurrentWallet:(BlockChainType)type;
/// 根据钱包ID获取钱包
+ (WalletModel *)queryWalletWithWalletAddress:(NSString *)address;
/// 添加钱包
+ (void)addWallet:(WalletModel *)wallet;
/// 移除钱包
+ (void)removeWalletWithWalletAddress:(NSString *)address;
/// 移除某条链下的所有钱包
+ (void)removeAllWalletsWithBlockChainType:(BlockChainType)type;
/// 修改当前选中钱包
+ (void)changeCurretWallet:(WalletModel *)wallet;
/// 修改钱包名称
+ (void)changeWalletNameWithAddress:(NSString *)address name:(NSString *)name;
/// 修改钱包头像
+ (void)changeWalletAvatarWithAddress:(NSString *)address avatar:(NSString *)avatar;

@end

@interface WalletDBManager (PWR)

/// 根据owner和active公钥查询EOS钱包
+ (WalletModel *)mainPwrWallet;

@end

@interface WalletDBManager (EOS)

/// 获取所有已激活的EOS钱包
+ (NSArray <WalletModel *>*)queryAllActiveEOSWallets;
/// 修改EOStmpAccount
+ (void)changeEOSTmpAccountWithAddress:(NSString *)address tmpAccount:(NSString *)tmpAccount;
/// 修改EOS账户地址(EOS切换主账户)
+ (void)changeEOSAddressWithOldAddress:(NSString *)oldAddress newAddress:(NSString *)newAddress;
/// 根据owner和active公钥查询EOS钱包
+ (WalletModel *)queryEosWalletWithOwnerPublicKey:(NSString *)ownerPublicKey activePublicKey:(NSString *)activePublicKey;
/// 激活EOS钱包
+ (void)changeEOSWalletToActive:(WalletModel *)wallet;

@end


@interface WalletDBManager (HDWallet)

// 冷钱包创建成功
+ (void)hdWalletCreateSuccess:(NSString *)address;
/// Eth冷钱包转热钱包
+ (void)ETHColdToHotWithAddress:(NSString *)address secretPrivateKey:(NSString *)secretPrivateKey;
/// Eth热钱包转冷钱包
+ (void)ETHHotToColdWithAddress:(NSString *)address;


@end
