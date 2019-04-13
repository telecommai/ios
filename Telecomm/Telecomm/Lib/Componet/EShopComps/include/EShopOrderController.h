//
//  EShopOrdersController.h
//  EShop
//
//  Created by 王胜利 on 2018/2/26.
//  Copyright © 2018年 wsl. All rights reserved.
//  商城订单列表页
//

#import <UIKit/UIKit.h>
#import "SLPageManager.h"

@interface EShopOrderController : UIViewController

/// 订单分类实体
@property (nonatomic, strong) SLPageEntity *pageEntity;
/// 订单数目更新Block
@property (nonatomic, copy) void(^goodsNumBlock)(NSArray <EShopOrderStatusCountEntity *>*count);

@end
