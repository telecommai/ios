//
//  EShopLineCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  分割线视图

#import <UIKit/UIKit.h>

@interface EShopLineCell : UITableViewCell


/**
 分割线视图

 @param color 分割线颜色
 @param lineheight 分割线高度
 */
- (void)cellWithBackgroundColor:(UIColor *)color lineheight:(CGFloat)lineheight;

@end
