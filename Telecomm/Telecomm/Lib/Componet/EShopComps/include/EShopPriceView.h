//
//  EShopPriceView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/8.
//  Copyright © 2018年 wsl. All rights reserved.
//

/*
 四个label，并排两行，每行两个
 第一行 label label
 第二行 label label
 */

#import <UIKit/UIKit.h>

@interface EShopPriceView : UIView

/**
 第一行第一个title字体大小
 */
@property (nonatomic, strong) UIFont *titleFont;
/**
 第一行第一个title字体颜色
 */
@property (nonatomic, strong) UIColor *titleColor;

/**
 第一行第二个title字体大小
 */
@property (nonatomic, strong) UIFont *titleContentFont;
/**
 第一行第二个title字体颜色
 */
@property (nonatomic, strong) UIColor *titleContentColor;

/**
 第二行第一个title字体大小
 */
@property (nonatomic, strong) UIFont *subtitleFont;
/**
 第二行第一个title字体颜色
 */
@property (nonatomic, strong) UIColor *subtitleColor;

/**
 第二行第二个title字体大小
 */
@property (nonatomic, strong) UIFont *subtitleContentFont;
/**
 第二行第二个title字体颜色
 */
@property (nonatomic, strong) UIColor *subtitleContentColor;

/**
 赋值

 @param titleString 第一行第一个label的内容
 @param titleContentString 第一行第二个label的内容
 @param subtitleString 第二行第二个label的内容
 @param subtitleContentString 第二行第二个label的内容
 */
- (void)titleString:(NSString *)titleString titleContentString:(NSString *)titleContentString subtitleString:(NSString *)subtitleString subtitleContentString:(NSString *)subtitleContentString;

@end
