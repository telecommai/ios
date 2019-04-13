//
//  EShopGoodsSKUManager.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/10/29.
//  Copyright © 2018 pansoft. All rights reserved.
//  商城SKU数据处理
//

#import <Foundation/Foundation.h>
#import "ZoneModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface EShopGoodsSKUManager : NSObject

/// 格式化SKU数据
+ (NSArray <EShopGoodsBigSKUEntity *>*)goodsSkuDatas:(EShopGoodsDetailEntity *)goodsEntity;

/// 选中SKU某一个规格，修改本地数据源其他规格是都可点
+ (void)selectSKUItem:(EShopGoodsDetailEntity *)goodsEntity skuDatas:(NSArray <EShopGoodsBigSKUEntity *>*)skuDatas indexPath:(NSIndexPath *)indexPath;

/// 判断某一sku与已选sku组合是否有效
+ (BOOL)isContainsSmallSku:(EShopGoodsSmallSkuModel *)smallSkuEntity withGoodsDetailEntity:(EShopGoodsDetailEntity *)goodsEntity skuDatas:(NSArray<EShopGoodsBigSKUEntity *> *)skuDatas;

@end

NS_ASSUME_NONNULL_END
