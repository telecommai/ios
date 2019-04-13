//
//  WalletUtil.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/7.
//  Copyright © 2018年 wsl. All rights reserved.
//  钱包管理类
//

#import <Foundation/Foundation.h>
#import "Constant.h"
#import <ethers/CloudKeychainSigner.h>
#import <ethers/WalletManager.h>
#import <UIKit/UIKit.h>
#import "BTCWalletManager.h"
#import "BlockChainManager.h"
#import "WalletHeader.h"
@class BlockChainModel;
@class WalletModel;


typedef void (^ComPublicKeyBlock)(NSString *comPublicKey,NSString *comPrivateKey);


@interface WalletUtil : NSObject

+ (void)addMainWalletToWalletsDB;

/// 获取去钱包类型Icon
+ (UIImage *)walletTypeIcon:(OpenWalletType)type;

#pragma mark - 钱包
/// 根据地址获取钱包
+ (CloudKeychainSigner *)walletWithAddress:(NSString *)address;
/// 获取主钱包
+ (CloudKeychainSigner *)mainWallet;
/// 获取主钱包地址
+ (NSString *)mainWalletAddress;
/// 处理钱包公钥
+ (NSString *)handleWalletPublicKey:(NSString *)publicKey;


#pragma mark - 通讯公钥相关
/// 保存通讯公钥和通讯私钥
+ (void)saveComPublicKey:(NSString *)comPublicKey secretComPrivateKey:(NSString *)secretComPrivateKey;
/// 获取通讯公钥
+ (NSString *)comPublicKey;
/// 获取通讯私钥
+ (NSString *)secretComPrivateKey;
/// 兼容旧版本没有通讯私钥字段
+ (void)compatibleComPrivateKey;

/// 创建钱包公钥
+ (void)createSaveWalletAndComPublicKey:(Account *)account success:(ComPublicKeyBlock)success fail:(FailBlock)fail;


#pragma mark - btc金额转换

/// 中本聪转币
+ (NSString *)amountToBitcoin:(NSString *)amount;
/// 币转中本聪
+ (NSString *)bitcoinToAmount:(NSString *)bitcoin;


/// 钱包十六进制私钥格式化
+ (NSString *)walletHexPrivateKeyFormat:(NSString *)privateKey;

@end











