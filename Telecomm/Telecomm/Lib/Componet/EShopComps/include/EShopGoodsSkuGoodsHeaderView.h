//
//  EShopGoodsSkuGoodsHeaderView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/9/13.
//  Copyright © 2018年 谢虎. All rights reserved.
//  sku商品显示

#import <UIKit/UIKit.h>

@interface EShopGoodsSkuGoodsHeaderView : UIView

/// 关闭按钮相应事件
@property (nonatomic, copy) void (^selectHeaderViewCloseBlock)(void);
/// 数据源
@property (nonatomic, strong) EShopGoodsDetailEntity *goodsDetailEntity;
/// 已选规格
@property (nonatomic, retain) UILabel *formatLabel;
// 价格
@property (nonatomic, strong) UILabel *priceLabel;

@end
