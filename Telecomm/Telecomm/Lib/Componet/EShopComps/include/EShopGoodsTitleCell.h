//
//  EShopGoodsTitleCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品详情标题

#import <UIKit/UIKit.h>

@interface EShopGoodsTitleCell : UITableViewCell

/**
 商品详情标题

 @param title 商品名
 @param intro 商品简介
 @param titleTips 标题标签
 */
- (void)cellWithGoodTitle:(NSString *)title goodsIntro:(NSString *)intro titleTips:(NSArray *)titleTips;
@end
