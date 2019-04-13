//
//  EShopSureOrderModel.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/9/18.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EShopSureOrderShopModel,EShopSureOrderCoinModel;

@interface EShopSureOrderModel : NSObject

//商家列表
@property (nonatomic,strong) NSArray <EShopSureOrderShopModel *>*shopsList;
//可选优惠币种列表
@property (nonatomic,strong) NSArray *coinsList;
//订单总额
@property (nonatomic,assign) CGFloat goodTotalMoney;
//是否显示选择地区 (0 不显示)
@property (nonatomic,assign) NSInteger showSelectAddress;

//折扣后金额
@property (nonatomic,assign) CGFloat useCouponMoney;

@end

@interface EShopSureOrderCoinModel : NSObject

// 最多使用积分
@property (nonatomic,assign) CGFloat atMostAmount;
//比例 分母  1/分母
@property (nonatomic,assign) CGFloat discountRatio;
/// 优惠方式类型ID
@property (nonatomic,copy) NSString *discountTypeId;
//优惠方式名称
@property (nonatomic,copy) NSString *discountTypeName;
//是否打开折扣
@property (nonatomic,assign) BOOL isUseCoin;
//当前选择使用的积分
@property (nonatomic,assign) CGFloat nowUseAmount;
/// 积分余额
@property (nonatomic,copy) NSString * amountBalance;

@end

/// 确认订单 商店数据模型
@interface EShopSureOrderShopModel : NSObject

/// 商店下商品列表
@property (nonatomic, strong) NSArray <EShopGoodsEntity *>*goodsList;
/// 商店详细数据模型
@property (nonatomic, strong) JFMallShopModel *mallShop;

@end
