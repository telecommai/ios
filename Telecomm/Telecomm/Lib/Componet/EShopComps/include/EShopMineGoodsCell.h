//
//  EShopMineGoodsCell.h
//  EShopComps
//
//  Created by YRH on 2018/3/15.
//  Copyright © 2018年 谢虎. All rights reserved.
//

/*
 我的收藏列表cell
 */

#import <UIKit/UIKit.h>

@class EShopMineGoodsCell;

typedef void(^AddButtonBlock)(EShopGoodsEntity *goodsEntity, EShopMineGoodsCell *cell);

@interface EShopMineGoodsCell : UITableViewCell

@property (nonatomic, strong) EShopGoodsEntity *goodsEntity;

@property (nonatomic, copy) AddButtonBlock addbuttonBlock;

@end
