//
//  EShopOrderResultEntity.h
//  EShop
//
//  Created by 王胜利 on 2018/2/26.
//  Copyright © 2018年 wsl. All rights reserved.
//  订单相关实体模型

#import <Foundation/Foundation.h>

/// 订单列表刷新通知KEY
#define KEY_REFRESH_ORDERLIST @"KEY_REFRESH_ORDERLIST"

@class EShopOrderEntity;
@class EShopOrderStatusCountEntity;
@class EShopOrderGoodEntity;
@class EShopOrderDeductibleEntity;
@class EShopOrderExpressEntity;
@class EShopOrderOtherPayEntity;

#pragma mark - 我的订单实体
@interface EShopOrderResultEntity : NSObject

/// 请求结果
@property (nonatomic, copy) NSString * result;
/// 状态栏商品数
@property (nonatomic, strong) NSArray <EShopOrderStatusCountEntity *>* statusCounts;
/// 商品列表
@property (nonatomic, strong) NSArray <EShopOrderEntity *>* orders;

@end

#pragma mark - 订单状态实体
@interface EShopOrderStatusCountEntity : NSObject

/// 订单类别商品数
@property (nonatomic, assign) NSInteger count;
/// 订单列表
@property (nonatomic, copy) NSString * paymentStatus;

@end

#pragma mark - 我的订单实体
@interface EShopOrderEntity : NSObject

/// 用户Id
@property (nonatomic, copy) NSString * userId;
/// 订单编号
@property (nonatomic, copy) NSString * orderBh;
/// 订单数目
@property (nonatomic, assign) NSInteger goodCount;
/// 订单类型(1:商城普通订单,2:夺宝订单,3:虚拟商品,4:虚拟商品 微信支付宝支付)
@property (nonatomic, assign) NSInteger orderType;
/// 订单中的商品数组
@property (nonatomic, strong) NSArray <EShopOrderGoodEntity*> *items;
/// 订单总价
@property (nonatomic, assign) double totalPrice;
/// 实际支付金额
@property (nonatomic, assign) double afterDiscountTotalPrice;
/// 订单付款日期
@property (nonatomic, assign) NSInteger payOrderDate;
/// 订单日期字符串
@property (nonatomic, copy) NSString * orderDateString;
/// 付款方式
//@property (nonatomic, strong) NSString * payWay;
/// 配送地址
@property (nonatomic, strong) EShopAddressEntity * userAddress;
/// 付款类型
@property (nonatomic, copy) NSString * paymentStatus;
@property (nonatomic, strong) NSObject * purchaseDate;
/// 购买图片
@property (nonatomic, copy) NSString * purchaseSighature;


@property (nonatomic, strong) NSArray  <EShopOrderExpressEntity *>*orderExpressList;
@property (nonatomic, strong) NSArray  <EShopOrderOtherPayEntity *>*paymentDetails;
@property (nonatomic, strong) NSArray  *tokenUseArray;
@property (nonatomic, strong) NSArray  <EShopOrderDeductibleEntity *>*orderSaleInfoList;
/// 商家留言
@property (nonatomic, copy) NSString *sellerReplay;
/// 交易哈希值（虚拟商品）
@property (nonatomic, copy) NSString *tranHash;

@end

#pragma mark - 订单商品实体
@interface EShopOrderGoodEntity : NSObject

/// 订单中的商品数组
@property (nonatomic, strong) EShopGoodsEntity* good;
/// 商品个数
@property (nonatomic, assign) NSInteger goodNum;
/// 商品SKUID
@property (nonatomic, copy) NSString *goodSkuId;
/// 商品总价
@property (nonatomic, assign) CGFloat priceTotal;

@end

#pragma mark - 物流信息
@interface EShopOrderExpressEntity : NSObject

/// 物流单号
@property (nonatomic, copy) NSString *trackingNumber;
/// 物流公司
@property (nonatomic, copy) NSString *expressCompany;

@end


#pragma mark - 订单抵扣实体
@interface EShopOrderDeductibleEntity : NSObject
/// 抵扣数量
@property (nonatomic, assign) double dkAmount;
/// 抵扣金额
@property (nonatomic, assign) double dkValue;
/// 抵扣名称
@property (nonatomic, copy) NSString *dkTypeName;
/// 订单id
@property (nonatomic, copy) NSString *orderId;
/// 未知
@property (nonatomic, copy) NSString *ruleId;

@end

#pragma mark - 其他货币付款实体
@interface EShopOrderOtherPayEntity : NSObject
/// 支付方式
@property (nonatomic, copy) NSString *tokenName;
/// 抵扣数量
@property (nonatomic, assign) float payTokenAmount;
/// 支付方式
@property (nonatomic, copy) NSString *selectPayType;
/// 订单编号
@property (nonatomic, copy) NSString *orderBh;
/// 现金支付
@property (nonatomic, assign) float payMoney;
/// 未知
@property (nonatomic, copy) NSString *autoId;

@end
