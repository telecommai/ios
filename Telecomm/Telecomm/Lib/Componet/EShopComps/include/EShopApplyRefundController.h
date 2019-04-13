//
//  EShopApplyRefundController.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/5.
//  Copyright © 2018 谢虎. All rights reserved.
//  申请退款

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopApplyRefundController : UIViewController

@property (nonatomic, assign) BOOL isReceiveGoods;
@property (nonatomic, strong) EShopOrderGoodEntity *orderGoodModel;
@property (nonatomic, strong) NSString *orderId;

@end

NS_ASSUME_NONNULL_END
