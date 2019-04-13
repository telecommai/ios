//
//  EShopCommodityFooterView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/8.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 购物车 一组商品的 footcell

#import <UIKit/UIKit.h>
#import "EShoppingCartCommoditySectionModel.h"

@interface EShopCommodityFooterCell : UITableViewCell

/**
 数据源
 */
@property (nonatomic, strong) EShoppingCartCommoditySectionModel *commoditySectionModel;

@end
