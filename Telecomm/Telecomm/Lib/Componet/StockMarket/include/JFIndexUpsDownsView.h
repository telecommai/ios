//
//  JFCurrentUpsDownsView.h
//  WalletManager
//
//  Created by YRH on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 实时显示涨跌的视图
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFIndexUpsDownsView : UIView

/// 赋值，当前价格、涨跌额、涨跌幅、“成交量”、成交量的数值
- (void)reloadDataWithCurrentPrice:(NSString *)currentPrice riseFall:(NSString *)riseFall priceLimit:(NSString *)priceLimit turnoverKey:(NSString *)turnoverKey turnoverValue:(NSString *)turnoverValue;

@property (nonatomic, strong) UIColor *topColor;
@property (nonatomic, strong) UIColor *leftColor;
@property (nonatomic, strong) UIColor *rightColor;

@end

NS_ASSUME_NONNULL_END
