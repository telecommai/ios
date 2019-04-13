//
//  EShoppingCartCommodityModel.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/9.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 购物车 购买的商品 model

#import <Foundation/Foundation.h>

@class EShoppingCartCommoditySectionModel;
@class EShoppingCartCommodityModel;
@class EShoppingCartGoodModel;
@class BrandModel;
@class PriceModel;
@class JFMallShopModel;
@class EShopGoodsEntity;

#pragma mark - 购物车
@interface JFMyShopCartModel : NSObject

@property (nonatomic, strong) NSArray <EShoppingCartCommoditySectionModel *>*myshopcart;
@property (nonatomic, strong) NSString * result;
@property (nonatomic, strong) NSString * total;

@end

#pragma mark - 分组model
@interface EShoppingCartCommoditySectionModel : NSObject

/// 商品的商店名称
@property (nonatomic, copy) NSString *shopOnlineName;
/// 优惠
@property (nonatomic, copy) NSString *preferential;
/// 总计
@property (nonatomic, copy) NSString *total;

@property (nonatomic, strong) NSMutableArray <EShoppingCartCommodityModel *> *list;
@property (nonatomic, strong) JFMallShopModel *mallShop;
/// 是否选择
//@property (nonatomic, copy) NSString *isSelected;
@property (nonatomic, assign) BOOL isSelected;
/// 全都失效了
@property (nonatomic, assign) BOOL isAllLoseEfficacy;

@end

#pragma mark - 店铺信息
@interface  JFMallShopModel : NSObject
/// 店铺model
//@property (nonatomic, strong) NSString *isSelected;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, strong) NSString *shopBh;
@property (nonatomic, strong) NSString *shopBrandlog;
@property (nonatomic, strong) NSString *shopName;
@property (nonatomic, strong) NSString *shopToplog;
@property (nonatomic, strong) NSArray  *goodsList;
@property (nonatomic, assign) NSInteger shopImUserid;

@end

#pragma mark - 购物车商品
@interface EShoppingCartCommodityModel : NSObject

@property (nonatomic, copy) NSString *Id;

@property (nonatomic, strong) EShopGoodsEntity *good;

@property (nonatomic, copy) NSString *num;

@property (nonatomic, assign) NSInteger createTime;
@property (nonatomic, assign) NSInteger updateTime;

/// 是否选择
//@property (nonatomic, copy) NSString *isSelected;
@property (nonatomic, assign) BOOL isSelected;
/// 失效了
@property (nonatomic, assign) BOOL isLoseEfficacy;

@end



