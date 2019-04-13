//
//  ZoneCellGoodView.h
//  Zone
//
//  Created by 董艳武 on 2018/10/10.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZoneModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZoneCellGoodView : UIView

/// 视图的高度
@property(class,readonly) CGFloat viewHeight;

/// 商品模型
@property(nonatomic,strong) ZoneGoodModel *goodModel;

/// 是否可以跳转到商品详情
@property(nonatomic,assign) BOOL          isJumpGoodsDetail;

@end

NS_ASSUME_NONNULL_END
