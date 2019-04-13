//
//  EShopRecommendBrandCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  推荐品牌商品

#import <UIKit/UIKit.h>

@interface EShopRecommendBrandCell : UITableViewCell


/**
 推荐品牌商品

 @param brandImageUrlString 品牌图片URL字符串
 @param brandName 品牌名称
 @param brandGoods 品牌商品数据
 @param albumTap 品牌点击回调事件
 @param itemTap 商品item点击回调事件
 */
- (void)cellWithBrandImageUrlString:(NSString *)brandImageUrlString
                          brandName:(NSString *)brandName
                         brandGoods:(NSArray <EShopItemEntity *>*)brandGoods
                           albumTap:(EShopTapBlock)albumTap
                            itemTap:(EShopTapBlock)itemTap;

@end
