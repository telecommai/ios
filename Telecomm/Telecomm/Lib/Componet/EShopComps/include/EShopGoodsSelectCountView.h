//
//  EShopGoodsSelectCountView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/9/13.
//  Copyright © 2018年 谢虎. All rights reserved.
//  数量选择，包括加减，输入

#import <UIKit/UIKit.h>

@protocol EShopGoodsSelectCountViewDelegate <NSObject>

- (void)selectCountTextFieldDidBeginEditing:(UITextField *)textField;

@end

@interface EShopGoodsSelectCountView : UIView

- (instancetype)initWithFrame:(CGRect)frame;

/// 数量操作回调 originalNumber起初数量 plusStatus是否为加状态
@property (nonatomic, copy) void(^resultBlock)(NSInteger count, NSInteger originalNumber, BOOL plusStatus);
/// 代理
@property (nonatomic, weak) id<EShopGoodsSelectCountViewDelegate> delegate;
/// 输入框中的内容
@property (nonatomic, assign) NSInteger currentNumber;
/// 最小数量 默认为1
@property (nonatomic, assign) NSInteger minValue;
/// 最大数量
@property (nonatomic, assign) NSInteger maxValue;
/// 输入框字体大小
@property (nonatomic, assign) CGFloat inputFieldFont;
/// 加减号按钮字号
@property (nonatomic, assign) CGFloat buttonTitleFont;
/// 加按钮标题
@property (nonatomic, copy) NSString *plusTitle;
/// 减按钮标题
@property (nonatomic, copy) NSString *reduceTitle;
/// 边线颜色
@property (nonatomic, strong) UIColor *borderColor;
/// 按钮与textField颜色
@property (nonatomic, strong) UIColor *buttonAndTextFieldBackgroundColor;
/// 间搁宽度
@property (nonatomic, assign) CGFloat intervalWidth;
/// textfield字体颜色
@property (nonatomic, strong) UIColor *textFieldColor;



@end

