//
//  EShopPayManager.h
//  EShopComps
//
//  Created by 王胜利 on 2018/9/12.
//  Copyright © 2018年 pansoft. All rights reserved.
//  商城付款管理器
// 

#import <Foundation/Foundation.h>
#import "PayCompsHeader.h"
@class EShopSnatchGoodInfoModel,EShopWinTreasurePayTypeModel;

typedef void(^PayManagerTimeBlock)(BOOL isTimeOut, NSAttributedString *attributedString);

/**
 付款方式

 - EShopPayTypeNone: 任何支付方式都没有选择
 - PayTypeWechat: 微信
 - PayTypeAliPay: 支付宝
 - PayTypePWR: 能量支付
 - PayTypeBlackDiamond: 黑钻
 - PayTypeSilverDiamond: 银钻
 - EShopPayTypeFGT: FGT
 - EShopPayTypeTuoboPay: TurboPay支付
 */
typedef NS_ENUM(NSUInteger, EShopPayType) {
    EShopPayTypeNone               = 1000,
    EShopPayTypeWechat             = 1001,
    EShopPayTypeAliPay             = 1002,
    EShopPayTypePWR                = 1,
    EShopPayTypeSilverDiamond      = 2,
    EShopPayTypeBlackDiamond       = 3,
    EShopPayTypeFGT                = 4,
    EShopPayTypeTuoboPay           = 5

};

/// 付款方式模型
@interface EShopPayTypeModel : NSObject

/// rmb金额
@property (nonatomic, assign) double rmbValue;
/// 当前支付方式抵扣数量
@property (nonatomic, assign) NSInteger tokenAmount;
/// 当前支付方式
@property (nonatomic, assign) NSInteger tokenTypeId;
/// 图标
@property (nonatomic, strong) UIImage *icon;
/// 支付图标链接
@property (nonatomic, copy) NSString *tokenIcon;
/// 标题
@property (nonatomic, copy) NSString *title;
/// token标题
@property (nonatomic, copy) NSString *tokenTitle;
/// 子标题
@property (nonatomic, copy) NSString *subTitle;

/// 是否能支付
@property (nonatomic, assign) BOOL isCanPay;
/// 付款方式
@property (nonatomic, assign) EShopPayType payType;
/// 右边辅助按钮
@property (nonatomic, copy) NSString *rightTitle;

/// 是否选中
@property (nonatomic, assign) BOOL isSelect;
/// 选中图片
@property (nonatomic, strong) UIImage *selectImage;

/// 可以选择支付模型
+ (instancetype)canPayModelWithIcon:(UIImage *)icon title:(NSString *)title payType:(EShopPayType)payType;
/// 不可支付模型
+ (instancetype)unPayModelWithIcon:(UIImage *)icon title:(NSString *)title subTitle:(NSString *)subTitle rightTitle:(NSString *)rightTitle payType:(EShopPayType)payType;

@end


@interface EShopPayManager : NSObject

/// 订单描述信息
+ (void)createPayInfoTime:(double)time money:(double)money unitStr:(NSString *)unitStr payManagerBlock:(PayManagerTimeBlock)timeBlock;

@end

// 商品链上信息
@interface EShopPayChainModel : NSObject

@property (nonatomic, copy) NSString *orderId;
@property (nonatomic, strong) EShopSnatchGoodInfoModel *snatchGoodInfo;

@end

@interface EShopSnatchGoodInfoModel : NSObject

@property (nonatomic, copy) NSString *amt;
@property (nonatomic, assign) NSInteger consumersLength;
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, copy) NSString *chainId;
@property (nonatomic, copy) NSString *isActive;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *oneChanceAddress;
@property (nonatomic, copy) NSString *otherCoinAddress;
@property (nonatomic, copy) NSString *otherCoinPrice;
@property (nonatomic, copy) NSString *stableAndOtherCoinPrice;
@property (nonatomic, copy) NSString *stableCoinPrice;
@property (nonatomic, copy) NSString *stockSize;
@property (nonatomic, assign) float total;
@property (nonatomic, copy) NSString *winnerAddress;
@property (nonatomic, copy) NSString *winnerId;

@end

/// 根据用户地址获取付款所需信息
@interface EShopPaymentInfoModel : NSObject

@property (nonatomic, assign) float paymentOtherCoin;
/// 支付金额
@property (nonatomic, assign) float paymentStableCoin;
/// 支付方式列表
@property (nonatomic, strong) NSArray <EShopWinTreasurePayTypeModel *> *tokens;

@end

/// 根据用户地址获取付款方式
@interface EShopWinTreasurePayTypeModel : NSObject

// 货币余额
@property (nonatomic, assign) float balance;
@property (nonatomic, assign) float tokenDecimals;
@property (nonatomic, copy) NSString *tokenAddress;
@property (nonatomic, copy) NSString *tokenFullName;
@property (nonatomic, copy) NSString *tokenID;
// 货币logo
@property (nonatomic, copy) NSString *tokenIcon;
// 货币简称
@property (nonatomic, copy) NSString *tokenName;
// 是否选中
@property (nonatomic, assign) BOOL isSelected;

@end
