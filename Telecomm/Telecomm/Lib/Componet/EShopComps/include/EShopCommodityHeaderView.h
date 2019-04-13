//
//  EShopCommodityHeaderView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/8.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 购物车 一组商品的 headerView

#import <UIKit/UIKit.h>
#import "EShoppingCartCommoditySectionModel.h"

@class EShopCommodityHeaderView;
@protocol EShopCommodityHeaderViewDelegate <NSObject>

/**
 点击checkBox按钮代理

 @param sender button
 @param commoditySectionModel 数据源
 @param headerView 本视图
 */
- (void)commodityHeaderViewTouchCheckBtn:(UIButton *)sender viewModel:(EShoppingCartCommoditySectionModel *)commoditySectionModel headerView:(EShopCommodityHeaderView *)headerView;

@end

@interface EShopCommodityHeaderView : UITableViewHeaderFooterView

@property (nonatomic, weak) id<EShopCommodityHeaderViewDelegate> delegate;

@property (nonatomic, strong) UIColor *imageTintColor;

/**
 数据源
 */
@property (nonatomic, strong) EShoppingCartCommoditySectionModel *commoditySectionModel;

/**
 隐藏checkBox
 */
- (void)hiddenCheckBox;


@end
