//
//  EShopAlipayAndWeChatPayController.h
//  EShopComps
//
//  Created by 赵洪壮 on 2019/1/17.
//  Copyright © 2019 谢虎. All rights reserved.
//  商城付款控制器(只支持微信支付宝)

#import <UIKit/UIKit.h>
#import "EShopPayManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface EShopAlipayAndWeChatPayController : UIViewController

/// 订单号
@property (nonatomic, strong) NSArray <NSString *> *orderIds;

@end

NS_ASSUME_NONNULL_END
