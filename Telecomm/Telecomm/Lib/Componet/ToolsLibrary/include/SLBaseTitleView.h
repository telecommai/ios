//
//  SLBaseTitleView.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2019/1/26.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#define WEAK(type)   __weak typeof(type) weak##type = type;

////////////////////////////尺寸相关////////////////////////////
#define SCREEN_SIZE \
([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)] ? CGSizeMake([UIScreen mainScreen].nativeBounds.size.width/[UIScreen mainScreen].nativeScale,[UIScreen mainScreen].nativeBounds.size.height/[UIScreen mainScreen].nativeScale) : [UIScreen mainScreen].bounds.size)
//获取屏幕宽度与高度
#define SCREEN_WIDTH SCREEN_SIZE.width
#define SCREEN_HEIGHT SCREEN_SIZE.height

#import <UIKit/UIKit.h>
#import "SLPageProtocol.h"
@class SLBadgeButton;

NS_ASSUME_NONNULL_BEGIN

@interface SLBaseTitleView : UIView<SLPageTitleProtocol>

/// 默认颜色
@property (nonatomic, strong) UIColor *normalColor;
/// 选中颜色
@property (nonatomic, strong) UIColor *selectColor;
/// 默认字体大小
@property (nonatomic, assign) CGFloat normalFontSize;
/// 选中字体大小
@property (nonatomic, assign) CGFloat selectFontSize;
/// 是否显示底部滑动的线
@property (nonatomic, assign) BOOL showBottomLine;

@property (nonatomic, strong) NSMutableArray <UIButton *>* btns;

/// MARK: - 创建标题按钮
- (SLBadgeButton *)createTitleButtnWithIndex:(NSUInteger)idx;


@end

@interface SLBaseTitleView (MiddleColor)

/// 获取渐变色
- (UIColor *)middleColorWithBeginColor:(UIColor *)beginColor endColor:(UIColor *)endColor scale:(double)scale;

@end

@interface SLBaseTitleView (Badge)

@end


NS_ASSUME_NONNULL_END

#import "ThemeKit.h"
NS_ASSUME_NONNULL_BEGIN
@interface SLBaseTitleView (ThemeKit)

/// 默认颜色
@property (nonatomic, copy) ThemeColorPicker theme_normalColor;
/// 选中颜色
@property (nonatomic, copy) ThemeColorPicker theme_selectColor;

@end

NS_ASSUME_NONNULL_END

