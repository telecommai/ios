//
//  JFUpsDownsTimesView.h
//  WalletManager
//
//  Created by YRH on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 实时涨跌视图
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFUpsDownsTimesView : UIView

@property (nonatomic, strong) UIFont *topFont;
@property (nonatomic, strong) UIFont *leftFont;
@property (nonatomic, strong) UIFont *rightFont;

@property (nonatomic, strong) UIColor *topColor;
@property (nonatomic, strong) UIColor *leftColor;
@property (nonatomic, strong) UIColor *rightColor;

/// 初始化
- (instancetype)initWithFrame:(CGRect)frame interval:(CGFloat)interval;
/// 赋值
- (void)reloadDataWithTopString:(NSString *)string leftString:(NSString *)leftString rightString:(NSString *)rightString;

@end

NS_ASSUME_NONNULL_END
