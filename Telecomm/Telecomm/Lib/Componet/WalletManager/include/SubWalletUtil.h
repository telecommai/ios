//
//  SubWalletUtil.h
//  WalletManager
//
//  Created by 王胜利 on 2019/3/22.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constant.h"
#import <ethers/CloudKeychainSigner.h>
#import <ethers/WalletManager.h>
#import <UIKit/UIKit.h>
#import "BTCWalletManager.h"
#import "BlockChainManager.h"
#import "WalletHeader.h"
#import "WalletModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SubWalletUtil : NSObject

/// 添加ETH子钱包
+ (void)addETHWithVc:(UIViewController *)vc
                name:(NSString *)name
              avatar:(NSString *)avatar
             account:(Account *)account
            complete:(VoidBlock)complete;


/// 添加BTC子钱包
+ (void)addBTCWithVc:(UIViewController *)vc
                name:(NSString *)name
              avatar:(NSString *)avatar
           btcWallet:(BTCWallet *)btcWallet
            complete:(VoidBlock)complete;


/// 添加EOS子钱包
+ (void)addEOSWithVc:(UIViewController *)vc
                name:(NSString *)name
              avatar:(NSString *)avatar
       walletAccount:(NSString *)walletAccount
      ownerPublicKey:(NSString *)ownerPublicKey
     ownerPrivateKey:(NSString *)ownerPrivateKey
     activePublicKey:(NSString *)activePublicKey
    activePrivateKey:(NSString *)activePrivateKey
         eosIsActive:(BOOL)eosIsActive
         eosAccounts:(NSArray *)eosAccounts
            complete:(VoidBlock)complete;

@end

@interface SubWalletUtil (HDWallet)

/// 添加ETH冷钱包到数据库（enable=0）不可用状态
+ (WalletModel *)ETHHDWalletWithName:(NSString *)name avatar:(NSString *)avatar account:(Account *)account;
/// 添加BTC冷钱包到数据库（enable=0）不可用状态
+ (WalletModel *)BTCHDWalletWithName:(NSString *)name avatar:(NSString *)avatar btcWallet:(BTCWallet *)btcWallet;
/// 保存硬件钱包（1.保存钱包到服务器 2.修改本地钱包enable=1）
+ (void)saveETHBTCHDWalletWithVc:(UIViewController *)vc wallet:(WalletModel *)wallet complete:(void(^)(void))complete;

/// ETH、BTC子钱包 冷转热
+ (void)ETHBTC_coldToHotWithVc:(UIViewController *)vc
                     wallet:(WalletModel *)wallet
           privateKeyString:(NSString *)privateKeyString
                   complete:(VoidBlock)complete;

/// ETH、BTC子钱包 热转冷
+ (void)ETHBTC_hotToColdGetPriveKeyWithVc:(UIViewController *)vc
                     wallet:(WalletModel *)wallet
                   complete:(void(^)(NSString *privateKey))complete;

/// ETH、BTC 热转冷 修改服务器、本地数据库信息
+ (void)ETHBTC_hotToColdSaveWithVc:(UIViewController *)vc  wallet:(nonnull WalletModel *)wallet complete:(void(^)(void))complete;



@end

NS_ASSUME_NONNULL_END
