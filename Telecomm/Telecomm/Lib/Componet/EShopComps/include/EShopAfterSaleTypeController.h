//
//  EShopAfterSaleTypeController.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/5.
//  Copyright © 2018 谢虎. All rights reserved.
//  选择售后服务类型 （退货||退款）

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopAfterSaleTypeController : UIViewController

@property (nonatomic, strong) EShopOrderGoodEntity *orderGoodModel;
@property (nonatomic, strong) NSString *orderId;

@end

NS_ASSUME_NONNULL_END
