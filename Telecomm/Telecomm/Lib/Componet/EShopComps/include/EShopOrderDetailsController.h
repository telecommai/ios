//
//  EShopOrderDetailsViewController.h
//  EShopComps
//
//  Created by YRH、王胜利 on 2018/1/30.
//  Copyright © 2018年 谢虎. All rights reserved.
//  订单详情界面
//


#import <UIKit/UIKit.h>

@interface EShopOrderDetailsController : UIViewController

/// 订单id
@property (nonatomic, strong) NSString *orderId;
/// 总金额
@property (nonatomic, assign) CGFloat total;
/// 商品数组
@property (nonatomic, strong) NSMutableArray *goodsArray;

@property (nonatomic, copy) void(^orderDetailsViewControllerRefreshBlock)(void);

@end
