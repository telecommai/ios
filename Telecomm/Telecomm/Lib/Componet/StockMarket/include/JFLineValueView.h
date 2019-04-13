//
//  JFCandleStickValueView.h
//  WalletManager
//
//  Created by YRH on 2018/11/7.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 横向 key + value 视图
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFLineValueView : UIView

@property (nonatomic, copy) NSString *linekey;
@property (nonatomic, copy) NSString *lineValue;
@property (nonatomic, strong) UIFont *lineFont;
@property (nonatomic, strong) UIColor *lineTextColor;
@property (nonatomic, strong) UIColor *lineKeyColor;
@property (nonatomic, strong) UIColor *lineValueColor;

/// 调整keylabel控件宽度
- (void)layoutKeyLabelWithWidth:(CGFloat)width;
/// keylabel字均分对齐
- (void)labelAlignmentRightandLeftWithLabelWidth:(CGFloat)width;
/// 格式化value数据
- (void)formatValue;
/// value追加一个“%”字符
- (void)valueAddPercentChar;

@end

NS_ASSUME_NONNULL_END

@interface UILabel (AlignmentRightandLeft)

- (void)textAlignmentLeftAndRightWith:(CGFloat)labelWidth;

@end
