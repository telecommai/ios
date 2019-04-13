//
//  WalletTradeUtil+EShop.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/7.
//  Copyright © 2019 pansoft. All rights reserved.
//  商城合约交易
//

#import "WalletTradeUtil.h"

NS_ASSUME_NONNULL_BEGIN

#define PWRWinTreasureConstractAddress @"0x1fe7014f1aed0df06cd994388d64d276bcd37604"

/// PWR夺宝参数配置
@interface PWRWinTreasureConfig : NSObject

/// 密码
@property (nonatomic, copy) NSString *password;
/// 转出钱包
@property (nonatomic, strong) CloudKeychainSigner *signer;
/// 旷工费用
@property (nonatomic, copy) NSString *gas;
/// 智能合约地址
@property (nonatomic, copy) NSString *constractAddress;

/// 商品ID
@property (nonatomic, copy) NSString *goodId;
/// 方式1购买数量
@property (nonatomic, strong) NSNumber *quantity1;
/// 方式2购买数量
@property (nonatomic, strong) NSNumber *quantity2;


@end

#define PWRVirtualSGoodsConstractAddress @"0xe1acf105f83482fa2f98d9d6bd2aa9164ba28547"
/// PWR夺宝参数配置
@interface PWRVirtualSGoodsConfig : NSObject

/// 密码
@property (nonatomic, copy) NSString *password;
/// 转出钱包
@property (nonatomic, strong) CloudKeychainSigner *signer;
/// 旷工费用
@property (nonatomic, copy) NSString *gas;
/// 智能合约地址
@property (nonatomic, copy) NSString *constractAddress;

/// 接受地址
@property (nonatomic, copy) NSString * toAddress;
/// 金额
@property (nonatomic, copy) NSString * money;
/// 订单编号
@property (nonatomic, copy) NSString * orderBh;
/// 商品编号
@property (nonatomic, copy) NSString * goodBh;
/// 商品数量
@property (nonatomic, copy) NSString * goodNum;
/// 用户ID
@property (nonatomic, copy) NSString * useId;


@end

@interface WalletTradeUtil (EShop)

/// PWR夺宝合约签名
+ (void)pwrWinTreasureWithConfig:(PWRWinTreasureConfig *)config success:(void(^)(NSString *sign))success fail:(FailBlock)fail;


/// PWR虚拟商品签名
+ (void)pwrVirtualSGoodsWithConfig:(PWRVirtualSGoodsConfig *)config success:(void(^)(NSString *sign))success fail:(FailBlock)fail;


@end

NS_ASSUME_NONNULL_END
