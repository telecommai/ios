//
//  EShoppingCartManager.h
//  EShopComps
//
//  Created by YRH on 2018/10/31.
//  Copyright © 2018 谢虎. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EShoppingCartManager : NSObject

/// 配置购物车界面数据源
+ (NSMutableArray *)shoppingCartGoodsArrayAndConfigDataSource:(NSMutableArray *)dataSourceArray selectedGoodsArray:(NSMutableArray *)selectedGoodsArray;
/// 从购物车数据源中查找失效商品
+ (NSMutableArray *)isLoseEfficacyGoodsWithGoodsArray:(NSMutableArray *)goodsArray;
/// 商品全部取消选中
+ (void)shoppingCartGoodsAllCancalSelect:(NSMutableArray *)goodsArray;
/// 商品全部选中并返回是否不存在失效的商品
+ (BOOL)shoppingCartNoLoseEfficacyAndAllSelectWithGoods:(NSMutableArray *)goodsArray selectedArray:(NSMutableArray *)selectedArray;
/// 添加或移除商品 请求
+ (void)shoppingCartRemoveOrAddGoods:(NSArray <EShoppingCartCommodityModel *>*)models delete:(BOOL)isDelete success:(void(^)(void))success fail:(void(^)(NSString *error))fail;
/// 购物车添加收藏
+ (void)shoppingCartAddCollectionWithGoodsArray:(NSMutableArray *)goodsArray success:(void(^)(void))success fail:(void(^)(NSString *error))fail;

@end
