//
//  EShopSureOrderController.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/9/17.
//  Copyright © 2018年 谢虎. All rights reserved.
//  购物车确认订单界面
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, EShopSureOrderType) {
    // 默认
    EShopSureOrderTypeNormal,
    // 一元夺宝类型商品订单
    EShopSureOrderTypeWinTreasure,
};


@interface EShopSureOrderController : UIViewController

/// 商品数组
@property (nonatomic, strong) NSMutableArray <EShoppingCartCommodityModel *>*goodsArray;
/// 订单类型 （是否为特殊商品） 默认普通商品
@property (nonatomic, assign) EShopSureOrderType sureOrderType;

@end
