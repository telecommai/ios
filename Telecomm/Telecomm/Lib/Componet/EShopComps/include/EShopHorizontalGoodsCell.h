//
//  EShopAlbumGoodsCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/10.
//  Copyright © 2018年 谢虎. All rights reserved.
//  专辑图片组件商品带价格ItemCell

#import <UIKit/UIKit.h>

@interface EShopHorizontalGoodsCell : UICollectionViewCell

/**
 赋值Cell

 @param entity 实体
 */
- (void)cellWithItemEntity:(EShopHomeItemEntity *)entity;
@end
