//
//  EShopHorizontalImageCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/4.
//  Copyright © 2018年 wsl. All rights reserved.
//  专辑图片组件纯图片ItemCell

#import <UIKit/UIKit.h>
#import "EShopAlbumCell.h"

@interface EShopHorizontalImageCell : UICollectionViewCell

/**
 赋值Cell

 @param entity item实体
 */
- (void)cellWithItemEntity:(EShopHomeItemEntity *)entity;

@end
