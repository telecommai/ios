//
//  CustomStepperView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/10.
//  Copyright © 2018年 wsl. All rights reserved.
//

/*
 | - | 12 | + |
 自定义 中间能显示数值的 stepper控件
 */

#import <UIKit/UIKit.h>

typedef void(^LeftBtnActionHandler)(BOOL isChange, double originalValue, double newValue);
typedef void(^RightBtnActionHandler)(BOOL isChange, double originalValue, double newValue);

@interface AccordingNumericalStepperView : UIView

/// 默认值 default is 0. clamped to min/max
@property (nonatomic) double value;
/// 最小值 default 0. must be less than maximumValue
@property (nonatomic) double minimumValue;
/// 最大值 default 100. must be greater than minimumValue
@property (nonatomic) double maximumValue;
/// 梯度值 default 1.
@property (nonatomic) double stepValue;
/// 边框颜色
@property (nonatomic, strong) UIColor *borderColor;

/// 点击 减号 时候触发的事件
@property (nonatomic, copy) LeftBtnActionHandler leftHandler;
/// 点击 加号 时候触发的事件
@property (nonatomic, copy) RightBtnActionHandler rightHandler;

@end
