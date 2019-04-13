//
//  EShopAlbumBrandCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/10.
//  Copyright © 2018年 谢虎. All rights reserved.
//  专辑图片组件商品品牌ItemCell

#import <UIKit/UIKit.h>
#import "EShopAlbumCell.h"

@interface EShopHorizontalBrandCell : UICollectionViewCell

/**
 赋值Cell

 @param entity 实体
 */
- (void)cellWithItemEntity:(EShopHomeItemEntity *)entity;

@end
