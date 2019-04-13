//
//  EShopGoodsTipCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品商品标签

#import <UIKit/UIKit.h>

@interface EShopGoodsTipCell : UITableViewCell


/**
 商品商品标签

 @param goodsTips 商品标签(一图一文字形式)
 */
- (void)cellWithGoodsTips:(NSArray *)goodsTips;
@end
