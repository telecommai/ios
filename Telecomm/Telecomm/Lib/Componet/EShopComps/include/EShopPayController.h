//
//  EShopPayController.h
//  EShopComps
//
//  Created by 王胜利 on 2018/9/12.
//  Copyright © 2018年 pansoft. All rights reserved.
//  商城付款控制器
// 

#import <UIKit/UIKit.h>
#import "EShopPayManager.h"

@interface EShopPayController : UIViewController

/// 订单号
@property (nonatomic, strong) NSArray <NSString *> *orderIds;

@end
