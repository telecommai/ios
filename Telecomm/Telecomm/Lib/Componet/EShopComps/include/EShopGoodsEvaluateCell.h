//
//  EShopGoodsEnaluateCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品详情评论组件

#import <UIKit/UIKit.h>

@interface EShopGoodsEvaluateCell : UITableViewCell

/**
 商品详情评论组件

 @param entity 评价数据
 @param itemTap 评价点击事件回调
 @param isShowMore 是否显示更多按钮
 @param albumTap 评论总体店家事件回调
 */
- (void)cellWithEntity:(EShopEvaluateResultEntity *)entity itemTap:(EShopTapBlock)itemTap isShowMore:(BOOL)isShowMore albumTap:(EShopTapBlock)albumTap;

@end
