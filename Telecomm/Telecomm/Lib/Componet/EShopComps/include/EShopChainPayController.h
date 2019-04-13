//
//  EShopChainPayController.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/10/31.
//  Copyright © 2018 pansoft. All rights reserved.
//  一元夺宝支付页面

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopChainPayController : UIViewController

/// 夺宝订单id
@property (nonatomic, strong) NSString *orderId;
/// 夺宝商品数据模型
@property (nonatomic, strong) EShoppingCartCommodityModel *cartModel;

@end

NS_ASSUME_NONNULL_END
