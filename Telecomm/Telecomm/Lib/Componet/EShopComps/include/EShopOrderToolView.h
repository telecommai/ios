//
//  EShopOrderToolView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/10/25.
//  Copyright © 2018 谢虎. All rights reserved.
//  订单详情 操作按钮

#import <UIKit/UIKit.h>
#import "EShopOrderStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface EShopOrderToolView : UIView

/// 订单操作按钮回调事件
@property (nonatomic, copy) StringBlock buttonBlock;
/// 订单类型
@property (nonatomic, assign) EShopOrderStatus orderStatus;

@end

@interface UIButton (Face)

- (void)setTitle:(NSString *)title type:(NSInteger)type;

@end

NS_ASSUME_NONNULL_END
