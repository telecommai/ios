//
//  EShopGoodsSkuCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/9/18.
//  Copyright © 2018年 谢虎. All rights reserved.
//  sku名称cell

#import <UIKit/UIKit.h>

@interface EShopGoodsSkuCell : UICollectionViewCell

- (void)initCellWithSkuArray:(NSArray *)skuArray goodsDetailEntity:(EShopGoodsDetailEntity *)goodsDetailEntity indexPath:(NSIndexPath *)indexPath;

@end

