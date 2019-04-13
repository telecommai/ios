//
//  WalletSaveChildWalletUtil.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/13.
//  Copyright © 2018年 wsl. All rights reserved.
//  添加子钱包到KeyChain(钥匙串)工具类
//

#import <Foundation/Foundation.h>
#import "WalletModel.h"
#import "Constant.h"
#import <ethers/WalletManager.h>
#import <ethers/Wallet.h>
#import <ethers/CloudKeychainSigner.h>
#import <ethers/Account.h>
#import "BTCWalletManager.h"

@interface WalletSaveChildWalletUtil : NSObject


#pragma mark - 保存子钱包到keyChain
+ (void)addSubWalletToKeyChain:(NSArray <Account *>*)subWallets password:(NSString *)password complete:(SuccessBlock)complete;


#pragma mark - 添加btc钱包到keyChain
+ (void)addBTCSubWalletToKeyChain:(NSArray <BTCWallet *>*)subWallets password:(NSString *)password complete:(SuccessBlock)complete;

@end
