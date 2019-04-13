//
//  EShopPublicEntity.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/1.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EShoppingCartCommoditySectionModel.h"

@class EShopAddressEntity;
@class EShopGoodsImageEntity;
@class EShopGoodsBrandEntity;
@class EShopGoodsPriceEntity;
@class EShopGoodsSKUEntity;
@class EShopGoodsSmallSkuModel;
@class EShopGoodsBigSKUEntity;
@class EShopGoodsMallGoodPriceEntity;
@class EShopGoodsTokenPriceEntity;

#pragma mark - 商品实体
@interface EShopGoodsEntity : NSObject

/// 商品编号
@property (nonatomic, copy) NSString * goodId;
/// 商品图文详情地址
@property (nonatomic, copy) NSString * goodUrl;
/// 商品名
@property (nonatomic, copy) NSString * goodName;
/// 是否能加入购物车 (0不允许)
@property (nonatomic, assign) NSInteger enableAddCart;
/// 商品描述
@property (nonatomic, copy) NSString * descriptionField;
/// 商品价格
@property (nonatomic, strong) NSArray <EShopGoodsPriceEntity *>* prices;
/// 商品价格
@property (nonatomic, strong) NSArray <EShopGoodsTokenPriceEntity *>* tokenPrices;
/// 商品封面
@property (nonatomic, copy) NSString * goodCover;
/// 商品图片
@property (nonatomic, strong) NSArray <EShopGoodsImageEntity *>* pictures;
/// 品牌
@property (nonatomic, strong) EShopGoodsBrandEntity *brand;
/// 商品类型编号
@property (nonatomic, copy) NSString * typeBh;
/// 商品状态
@property (nonatomic, assign) NSInteger goodStatus;
/// 商品sku列表
@property (nonatomic, strong) NSArray <EShopGoodsSKUEntity *>*goodSkus;
/// 购买所选中sku
@property (nonatomic, strong) EShopGoodsSKUEntity *selectSku;
/// 商品价格实体
@property (nonatomic, strong) EShopGoodsMallGoodPriceEntity *mallGoodPrice;
/// 商品购买数量
@property (nonatomic, assign) NSInteger orderGoodNum;

///
@property (nonatomic, assign) NSInteger endTime;
@property (nonatomic, assign) NSInteger startTime;
/// 抢购状态//限时抢购状态未开始 0;限时抢购状态抢购中 1;抢购结束 2;
@property (nonatomic, copy) NSString *timeToBuyStatus;
//////////////////// 以下购物车使用 ////////////////////

/// 税费
@property (nonatomic, copy)  NSString *taxAndFee;
/// 商品特殊说明
@property (nonatomic, copy)  NSString *specialVersion;
@property (nonatomic, strong) JFMallShopModel *mallShop;


/*
 /// 商品特殊说明
 @property (nonatomic, copy) NSString *specialVersion;
 /// 单价
 @property (nonatomic, copy) NSString *price;
 /// 数目
 @property (nonatomic, copy) NSString *num; //number;
 /// 税费
 @property (nonatomic, copy) NSString *taxAndFee;
 /// 商品详情
 @property (nonatomic, copy) NSString *good_order;

 /// 创建时间
 @property (nonatomic, copy) NSDictionary *createtime;
 /// 商品编号
 @property (nonatomic, copy) NSString *good_bh;
 /// 商品类别
 //@property (nonatomic, copy) NSString *good_typebh;

 @property (nonatomic, copy) NSString *shopcartid;
 @property (nonatomic, copy) NSString *userId;
*/

@end
#pragma mark 商品规格组类型
@interface EShopGoodsSKUEntity : NSObject
/// 商品组类型名称 本地使用
@property (nonatomic, assign) NSInteger stockNumber;
@property (nonatomic, copy) NSString *skuId;
@property (nonatomic, copy) NSString *skuImage;
@property (nonatomic, assign) float skuPrice;
@property (nonatomic, copy) NSString *propertiesName;
@property (nonatomic, copy) NSString *attributes;
@property (nonatomic, strong) NSArray *attributesArray;
@property (nonatomic, strong) NSArray <EShopGoodsSmallSkuModel *>*attributeContentList;
// 获取sku拼接字符串
- (NSString *)currentSelectSkuString;
@end
#pragma mark 商品大规格
@interface EShopGoodsBigSKUEntity : NSObject
/// 分类id
@property (nonatomic, copy) NSString *pId;
/// 分类名称
@property (nonatomic, copy) NSString *pIdName;
/// 当前组已选规格
@property (nonatomic, strong) EShopGoodsSmallSkuModel *currentSelectSku;
/// 规格数组
@property (nonatomic, strong) NSMutableArray <EShopGoodsSmallSkuModel *>*attributeContentList;

@property (nonatomic, strong) NSMutableArray *tmpVIds;

@end

#pragma mark 商品规格
@interface EShopGoodsSmallSkuModel : NSObject
/// 分类id
@property (nonatomic, copy) NSString *pId;
/// 分类名称
@property (nonatomic, copy) NSString *pIdName;
/// 规格名称
@property (nonatomic, copy) NSString *vIdName;
/// 规格id
@property (nonatomic, copy) NSString *vId;
/// 是否可选
@property (nonatomic, assign) BOOL canChose;
/// 是否选中
@property (nonatomic, assign) BOOL isSelect;
@end


#pragma mark - 地址实体
@interface EShopAddressEntity : NSObject

/// 地址Id
@property (nonatomic, copy) NSString *idField;
/// 用户id
@property (nonatomic, copy) NSString * userId;
/// 用户名
@property (nonatomic, copy) NSString * userName;
/// 地址(北京市)
@property (nonatomic, copy) NSString * address;
/// 地区(北京朝阳区三环以内)
@property (nonatomic, copy) NSString * area;
/// 是否默认地址
@property (nonatomic, assign) NSInteger isSelected;
/// 手机号
@property (nonatomic, copy) NSString * phone;
/// 邮编
@property (nonatomic, copy) NSString * postcode;

/// 当前选择的地址
@property (nonatomic, assign) BOOL choosedAddress;
/// 可用不可用 1可用(自己加)
@property (nonatomic, assign) NSInteger enable;

@end


#pragma mark - 商品品牌实体
@interface EShopGoodsBrandEntity :NSObject

/// 品牌Id
@property (nonatomic, assign) NSInteger brandId;
/// 品牌图片
@property (nonatomic, copy) NSString * brandIcon;
/// 品牌名称
@property (nonatomic, copy) NSString * brandName;
/// 品牌状态
@property (nonatomic, assign) NSInteger brandStatus;
/// 品牌编号
@property (nonatomic, copy) NSString * typeBh;

@end

#pragma mark - 商品图片实体
@interface EShopGoodsImageEntity : NSObject

/// 商品图片Id
@property (nonatomic, copy) NSString *idField;
/// 商品图片地址
@property (nonatomic, copy) NSString *picUrl;
/// 商品图片状态
@property (nonatomic, assign) NSInteger picStatus;

@end
#pragma mark - 商品价格实体
@interface EShopGoodsPriceEntity : NSObject

/// 商品Id
@property (nonatomic, copy) NSString *idField;
///
@property (nonatomic, assign) double price;
/// 价格类型（0：历史价格 1：当前价格 2：吊牌价格）
@property (nonatomic, strong) NSNumber *priceType;

@property (nonatomic, copy) NSString *startTime;
@property (nonatomic, copy) NSString *endTime;

@end

#pragma mark - 商品价格实体详情V3带有单位
@interface EShopGoodsMallGoodPriceEntity : NSObject
/// 商品Id
@property (nonatomic, copy) NSString *goodBh;
/// 价格
@property (nonatomic, assign) double price;
/// 价格单位
@property (nonatomic, strong) NSString *priceUnit;
/// 价格单位id
@property (nonatomic, copy) NSString *priceUnitId;
/// 标签价格
@property (nonatomic, assign) float tagPrice;

@end

#pragma mark - 商品其他实付价格实体
@interface EShopGoodsTokenPriceEntity : NSObject

/// 商品Id
@property (nonatomic, copy) NSString *goodId;
@property (nonatomic, copy) NSString *goodSkuId;
@property (nonatomic, copy) NSString *mallDiscountId;
@property (nonatomic, copy) NSString *tokenDiscountRate;
@property (nonatomic, assign) double tokenPayPrice;
@property (nonatomic, copy) NSString *tokenTypeId;
@property (nonatomic, copy) NSString *tokenTypeName;

@end
