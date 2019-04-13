
//
//  ZoneItem.h
//  Zone
//
//  Created by 王胜利 on 2018/10/23.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class ZoneModel;

NS_ASSUME_NONNULL_BEGIN

@protocol ZoneItem <NSObject>

/// 数据源
@property(nonatomic, strong) ZoneModel *zoneModel;
/// 显示内容View
- (UIView *)zoneItemView;
/// 显示内容View的Height
- (CGFloat)zoneItemViewHeight;
/// 点击事件
//- (void)touchAction;

@end

NS_ASSUME_NONNULL_END
