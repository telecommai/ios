//
//  EShopSettlementView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/8.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 购物车结算样式 view

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, OrderSettlementStyle) {
    /// 结算样式
    SettlementStyle,
    /// 提交订单样式
    SubmitOrderStyle,
    /// 编辑样式
    EditStyle
};

@class SettlementEditButtonModel;

@protocol EShopSettlementViewDelegate <NSObject>

@optional
/**
 点击checkBox事件

 @param checkBox checkBox
 */
- (void)touchCheckBoxAction:(UIButton *)checkBox;

/**
 点击右侧按钮的事件

 @param sender 右侧按钮
 */
- (void)touchRightButtonAction:(UIButton *)sender;

/// 编辑按钮点击事件
- (void)editButtonTouchAction:(UIButton *)sender buttonInfo:(SettlementEditButtonModel *)model index:(NSInteger)index;

@end

@interface EShopSettlementView : UIView

@property (nonatomic, weak) id<EShopSettlementViewDelegate> delegate;

/**
 view 样式
 */
@property (nonatomic, assign) OrderSettlementStyle orderSettlementStyle;

/**
 赋值

 @param aggregate 总金额
 @param taxAndFee 税费
 @param buttonTitle 按钮文字
 */
- (void)settlementTitle:(NSString *)title aggregate:(NSString *)aggregate subtitle:(NSString *)subtitle taxAndFee:(NSString *)taxAndFee buttonTitle:(NSString *)buttonTitle;

/**
 checkBox是否选中

 @param isSelected isSelected description
 */
- (void)checkBoxIsSelected:(BOOL)isSelected;

/// 添加编辑用的按钮
- (void)addEditButtonArray:(NSArray <SettlementEditButtonModel *>*)buttonArray;

@end

@interface SettlementEditButtonModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, strong) UIColor *backColor;
@property (nonatomic, copy) NSString *actionString;

+ (SettlementEditButtonModel *)initSettlementEditButtonModelWithTitle:(NSString *)title titleColor:(UIColor *)titleColor backColor:(UIColor *)backColor action:(NSString *)actionString;

@end
