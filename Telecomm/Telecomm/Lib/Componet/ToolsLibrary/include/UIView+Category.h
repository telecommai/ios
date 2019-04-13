//
//  UIView+Category.h
//  EShop
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Category)
/** 这个方法通过响应者链条获取view所在的控制器 */
- (UIViewController *)parentController;

/** 这个方法通过响应者链条获取view所在的控制器 */
- (UIViewController *)selfController;

- (UIViewController *)viewController;


@end


@interface UIView (RandomBgColor)

@end

#pragma mark - 布局
@interface UIView (Frame)

@property (assign, nonatomic) CGFloat x;
@property (assign, nonatomic) CGFloat y;
@property (assign, nonatomic) CGFloat centerX;
@property (assign, nonatomic) CGFloat centerY;
@property (assign, nonatomic) CGFloat width;
@property (assign, nonatomic) CGFloat height;
@property (assign, nonatomic) CGSize  size;

@property (assign, nonatomic) CGFloat top;
@property (assign, nonatomic) CGFloat bottom;
@property (assign, nonatomic) CGFloat left;
@property (assign, nonatomic) CGFloat right;

@end


#pragma mark - 手势
typedef void (^EXGestureActionBlock)(UIGestureRecognizer *gestureRecoginzer);

@interface UIView (Gesture)
/// 添加单击手势target-action
- (void)ex_addTapGestureWithTarget:(id)target action:(SEL)action;
/// 单击手势回调
- (void)ex_tapAction:(EXGestureActionBlock)block;
/// 长按手势回调
- (void)ex_longPressAction:(EXGestureActionBlock)block;
@end



#pragma mark - shake晃动
typedef NS_ENUM(NSInteger, EXShakeDirection) {
    EXShakeDirectionHorizontal = 0,
    EXShakeDirectionVertical
};

@interface UIView (Shake)

- (void)ex_shake;
- (void)ex_shake:(int)times withDelta:(CGFloat)delta;
- (void)ex_shake:(int)times withDelta:(CGFloat)delta completion:(void((^)(void)))handler;
- (void)ex_shake:(int)times withDelta:(CGFloat)delta speed:(NSTimeInterval)interval;
- (void)ex_shake:(int)times withDelta:(CGFloat)delta speed:(NSTimeInterval)interval completion:(void((^)(void)))handler;
- (void)ex_shake:(int)times withDelta:(CGFloat)delta speed:(NSTimeInterval)interval shakeDirection:(EXShakeDirection)shakeDirection;
- (void)ex_shake:(int)times withDelta:(CGFloat)delta speed:(NSTimeInterval)interval shakeDirection:(EXShakeDirection)shakeDirection completion:(void(^)(void))completion;

@end



#pragma mark - UIView扩展
@interface UIView (HUD)
/// 显示提醒
- (void)showHint:(NSString *)hint;
/// 显示提醒(竖直方向位置偏移)
- (void)showHint:(NSString *)hint yOffset:(float)yOffset;

@end

@interface UIView (ExtraAttributes)

/// 附加属性
@property (nonatomic, weak) id extraObj;

@end
