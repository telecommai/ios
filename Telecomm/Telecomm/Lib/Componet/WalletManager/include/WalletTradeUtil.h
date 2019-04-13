//
//  WalletTransferUtil.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/13.
//  Copyright © 2018年 wsl. All rights reserved.
//  钱包交易工具类
//

#import <Foundation/Foundation.h>
#import "Constant.h"
#import <ethers/JFArgument.h>
#import <ethers/ContractEncoder.h>
#import <ethers/WalletManager.h>
#import <ethers/Wallet.h>
#import <ethers/CloudKeychainSigner.h>
#import <ethers/SecureData.h>
#import "WalletModel.h"


/**
 转账类型

 - WalletTransferTypeNormal: 普通转账类型(转能量、ETH、BTC等)
 - WalletTransferTypeToken: 代币转账类型(智能合约类型)(银钻、黑钻、ETH下面的代币等)
 */
typedef NS_ENUM(NSUInteger, WalletTransferType) {
    WalletTransferTypeNormal,
    WalletTransferTypeToken,
};

#pragma mark - 币交易配置

@interface ETHTradeConfig : NSObject

/// 链类型
@property (nonatomic, assign) BlockChainType chainType;
/// 密码
@property (nonatomic, copy) NSString *password;
/// 交易类型
@property (nonatomic, assign) WalletTransferType transferType;
/// 转出钱包
@property (nonatomic, strong) CloudKeychainSigner *signer;
/// 转入imUserId
@property (nonatomic, copy) NSString *toImUserId;
/// 转入钱包地址
@property (nonatomic, copy) NSString *toAddress;
/// 旷工费用
@property (nonatomic, copy) NSString *gas;
/// 币数
@property (nonatomic, copy) NSString *money;


/// 当transferType == WalletTransferTypeToken 时需要以下参数
/// 智能合约地址(代币地址)
@property (nonatomic, copy) NSString *constractAddress;

// 注意：下面两个签名不需要
/// 代币Id
@property (nonatomic, copy) NSString *tokenId;
/// 代币单位
@property (nonatomic, copy) NSString *tokenUnit;
/// 代币位数
@property (nonatomic, assign) NSInteger tokenDecimals;

@end


@interface BTCTradeConfig : NSObject


/// 密码
@property (nonatomic, copy) NSString *password;
/// 钱包
@property (nonatomic, strong) WalletModel *wallet;
/// 接受地址
@property (nonatomic, copy) NSString *toAddress;

@property (nonatomic, copy) NSString *bitcoin;
/// 中本聪
@property (nonatomic, copy) NSString *amount;

@end

@interface EOSTradeConfig : NSObject

/// 密码
@property (nonatomic, copy) NSString *password;
/// 钱包
@property (nonatomic, strong) WalletModel *wallet;
/// 接受地址
@property (nonatomic, copy) NSString *toAddress;
/// 转账金额
@property (nonatomic, copy) NSString *value;
/// 备注
@property (nonatomic, copy) NSString *memo;

@end

@interface WalletTradeUtil : NSObject

/// 请求nonce
+ (void)queryNonceWithWalletAddress:(NSString *)walletAddress chainId:(NSString *)chainId success:(SuccessBlock)success fail:(FailBlock)fail;

/// ETH、PWR签名
+ (void)ethTradeSignWithConfig:(ETHTradeConfig *)config success:(void(^)(NSString *sign))success fail:(FailBlock)fail;
/// ETH、PWR转账(签名并转账)
+ (void)ethTradeWithConfig:(ETHTradeConfig *)config success:(SuccessBlock)success fail:(FailBlock)fail;
// MARK: 交易（签名并转账） 冷钱包转账
+ (void)ethColdTradeWithConfig:(ETHTradeConfig *)config success:(SuccessBlock)success fail:(FailBlock)fail;



@end


@interface WalletTradeUtil (HDWallet)

+ (void)ETHHDTradeWithWalletModel:(WalletModel *)wallet success:(SuccessBlock)success fail:(FailBlock)fail;

@end

