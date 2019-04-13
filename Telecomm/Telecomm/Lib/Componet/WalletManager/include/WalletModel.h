//
//  WalletModel.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/5.
//  Copyright © 2018年 wsl. All rights reserved.
//  钱包模型
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WalletHeader.h"

@class WalletTokenModel;

@interface WalletModel : NSObject

/// 所属链
@property (nonatomic, assign) BlockChainType chainType;
/// 主钱包地址
@property (nonatomic, copy) NSString *mainWalletAddress;
/// 钱包ID
@property (nonatomic, assign) NSInteger accountId;
/// 钱包名称
@property (nonatomic, copy) NSString *name;
/// 钱包头像
@property (nonatomic, copy) NSString *avatar;
/// 钱包地址
@property (nonatomic, copy) NSString *address;
/// 公钥
@property (nonatomic, copy) NSString *publicKey;
/// 加密私钥
@property (nonatomic, copy) NSString *secretPrivateKey;
/// 加密助记词
@property (nonatomic, copy) NSString *secretSeedPhrase;
/// keystore
@property (nonatomic, copy) NSString *keystore;
/// 钱包余额
@property (nonatomic, copy) NSString *balance;
/// 是否是当前显示的钱包
@property (nonatomic, assign) BOOL isCurrentWallet;
/// 钱包类型(0: 主钱包 1:观察者钱包 2: 活跃钱包 3:普通钱包 4:冷钱包)
@property (nonatomic, assign) OpenWalletType walletType;


/// ETH
/// 钱包子账户
@property (nonatomic, strong) NSMutableArray  <WalletTokenModel *>*accounts;


/// BTC 主钱包地址加密助记词(程序里面用)
@property (nonatomic, copy) NSString *btcSecretSeedPhrase;

/// EOS 是否被创建激活
@property (nonatomic,assign) BOOL eosIsActive;
/// EOS active公钥
@property (nonatomic, copy) NSString *eosActivePublicKey;
/// EOS active私钥
@property (nonatomic, copy) NSString *eosActiveSecretPrivateKey;
/// EOS 临时AccountName
@property (nonatomic, copy) NSString *eosTmpAccount;
/// EOS 私钥恢复的账户数组
@property (nonatomic, strong) NSArray *eosAccounts;

@property (nonatomic, assign) NSInteger enable;

@end

@interface WalletTokenModel : NSObject

/// 代币ID
@property (nonatomic, copy) NSString *tokenID;
/// 代币名称
@property (nonatomic, copy) NSString *tokenName;
/// 代币全称
@property (nonatomic, copy) NSString *tokenFullName;
/// 代币头像
@property (nonatomic, copy) NSString *tokenIcon;
/// 代币位数
@property (nonatomic,assign)  NSInteger tokenDecimals;
/// 代币地址
@property (nonatomic, copy) NSString *tokenAddress;
/// 是否添加
@property (nonatomic, assign) NSInteger ifOwner;
/// 所属链ID
@property (nonatomic, copy) NSString *blockChainID;
/// 代币余额
@property (nonatomic, copy) NSString *balance;


/// 本地代币头像
@property (nonatomic, copy) UIImage *localTokenIcon;

@end

@class WalletTradeInOutModel;
@interface WalletTradeModel : NSObject

/// ETH
/// 交易时间
@property (nonatomic, copy) NSString *age;
/// 区块号
@property (nonatomic, assign) NSInteger block;
/// 交易金额
@property (nonatomic, copy) NSString *value;
/// 付款地址
@property (nonatomic, copy) NSString *from;
/// 收款地址
@property (nonatomic, copy) NSString *to;
/// 交易类型(收款:receiver/付款:sender)
@property (nonatomic, copy) NSString *status;
/// 手续费
@property (nonatomic, copy) NSString *txFee;
/// 交易号
@property (nonatomic, copy) NSString *txHash;

/// 所属链
@property (nonatomic, assign) BlockChainType chainType;
/// 交易结果(成功，失败)
@property (nonatomic, copy) NSString *tradeResult;
/// 备注
@property (nonatomic, copy) NSString *tradeRemark;
/// 交易人头像
@property (nonatomic, copy) NSString *tradeAvatar;
/// 是否是多地址
@property (nonatomic, assign) BOOL isMoreAddress;
/// 显示 收入，转出
@property (nonatomic, assign) BOOL isShowIncomeFrom;
/// 发送方id
@property (nonatomic, copy) NSString *fromIMID;
/// 接收方id
@property (nonatomic, copy) NSString *toIMID;
/// 金额单位
@property (nonatomic, copy) NSString *moneyUnit;

@property (nonatomic, strong) NSArray  <WalletTradeInOutModel *>*inputs;
@property (nonatomic, strong) NSArray  <WalletTradeInOutModel *>*outputs;

/// private 交易时使用
@property (nonatomic, copy) NSString *fromWalletName;
@property (nonatomic, copy) NSString *eosToken;

@end

@interface WalletTradeInOutModel : NSObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, strong) NSNumber *value;

@end






