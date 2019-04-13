//
//  EShopGoodsPriceCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品详情价格组件

#import <UIKit/UIKit.h>

@interface EShopGoodsPriceCell : UITableViewCell

/**
 商品详情价格组件

 @param currentPrice 当前价格
 @param originalPrice 原价
 @param priceTips 价格优惠标签
 */
- (void)cellWithPriceUnit:(NSString *)priceUnit currentPrice:(NSString *)currentPrice
               originalPrice:(NSString *)originalPrice
                   priceTips:(NSArray *)priceTips;
@end
