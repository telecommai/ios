//
//  EShopVirtualController.h
//  EShopComps
//
//  Created by 夏祥可 on 2019/1/8.
//  Copyright © 2019 谢虎. All rights reserved.
//  虚拟商品付款界面

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopVirtualController : UIViewController

/// 订单号
@property (nonatomic, strong) NSArray <NSString *> *orderIds;

@end

NS_ASSUME_NONNULL_END
