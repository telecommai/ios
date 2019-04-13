//
//  EShopSelectGoodsCountController.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/11/2.
//  Copyright © 2018 谢虎. All rights reserved.
//  选择商品个数 （一元夺宝商品单个sku使用）

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopSelectGoodsCountController : UIViewController

/// 商品模型
@property (nonatomic, strong) EShopGoodsDetailEntity *goodsDetailEntity;
/// 当前所选数量
@property (nonatomic, assign) NSInteger currentNumber;
/// 最小可选数量
@property (nonatomic, assign) NSInteger minNumber;
/// 最大可选数量
@property (nonatomic, assign) NSInteger maxNumber;

@property (nonatomic, copy) void(^goodsSelectCountBlock)(EShopGoodsSKUEntity *selectSkuEntity, NSInteger count);

@end

NS_ASSUME_NONNULL_END
