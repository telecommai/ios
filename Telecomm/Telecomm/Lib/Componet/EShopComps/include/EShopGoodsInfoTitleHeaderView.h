//
//  EShopGoodsInfoTitleView.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品图文标题

#import <UIKit/UIKit.h>

@interface EShopGoodsInfoTitleHeaderView : UITableViewHeaderFooterView

/**

 @param titles 标题数据
 @param defaultIndex 默认选中的标题下标
 */
- (void)viewWithTitles:(NSArray *)titles defaultIndex:(NSUInteger)defaultIndex;

/// 标题Segment颜色
@property (nonatomic, strong) UIColor *tintColor;

@end
