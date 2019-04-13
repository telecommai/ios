//
//  EShopRealEntity.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/25.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商城真实数据模型

#import <Foundation/Foundation.h>

@class EShopHomeItemEntity;
@class EShopGoodsDetailTreasureBeanModel;
@class EShopGoodsDetailTreasureBeanDataModel;
@class EShopGoodsDetailTreasureBeanDataGoodsInfoModel;

#pragma mark ------------------------------ 首页 ---------------------------
/*
 viewCode 类型
 
 轮播图：banners
 多列：horizontalViewGroup
 分组专辑(商品带价格)：groupView1
 分组专辑(图片)：groupView2
 分组专辑(店铺)：groupView3
 推荐商品专辑：groupView4
 每日精选：listView
 为你推荐(单个商品):goodItem
 限时购：timeLimit
 左一右二组件：12View
 左一右一：11View
 轮播：viewPager
 悬停头部Header:listViewHeader
 */

#pragma mark - 商城首页实体
@interface EShopHomeEntity : NSObject
/// 商城首页组件类型
@property (nonatomic, copy) NSString * viewCode;
/// 轮播图组件
@property (nonatomic, strong) NSArray <EShopHomeItemEntity *>* bannerList;
/// 推荐商品图片
@property (nonatomic, copy) NSString * imgUrl;
/// 专辑图片点击链接
@property (nonatomic, copy) NSString * linkUrl;
/// 特殊商品类型标记 (一元夺宝)
@property (nonatomic, copy) NSString * mark;
/// item数据源
@property (nonatomic, strong) NSArray <EShopHomeItemEntity *>* itemList;


////////////////// 推荐单个商品(goodItem) //////////////////
/// 商品id
@property (nonatomic, copy) NSString * goodsId;
/// 推荐商品价格
@property (nonatomic, copy) NSString * currentPrice;
/// 推荐商品价格单位
@property (nonatomic, copy) NSString * priceUnit;

/// 推荐商品标题
@property (nonatomic, copy) NSString * introduce;
/// 推荐商品标题
@property (nonatomic, copy) NSString * title;

@property (nonatomic, copy) NSString * intent;
/// item类型(0：店铺；1：活动；2：专辑：3：商品；4：网页)
@property (nonatomic, copy) NSString * intentType;
/// 是否收藏
@property (nonatomic, assign) BOOL hasFavor;

////////////////// 推荐商品专辑(groupView4) //////////////////
/// 推荐商品专辑描述
@property (nonatomic, copy) NSString * albumDesc;
/// 推荐商品专辑列表
@property (nonatomic, strong) NSArray <EShopHomeItemEntity *>* albumGoodsList;

@end

@interface EShopHomeItemEntity : NSObject

/// 图片Url
@property (nonatomic, copy) NSString * imgUrl;
/// item类型(0：店铺；1：活动；2：专辑：3：商品；4：网页)
@property (nonatomic, copy) NSString * intentType;
/// 链接地址
@property (nonatomic, copy) NSString * intent;
/// 商品id
@property (nonatomic, copy) NSString * goodsId;
/// 商品标题
@property (nonatomic, copy) NSString * title;
/// 优惠活动
@property (nonatomic, copy) NSString * benefitPoint;
/// 商品价格
@property (nonatomic, copy) NSString * price;
/// 商品价格单位
@property (nonatomic, copy) NSString * priceUnit;
/// 链接地址
@property (nonatomic, copy) NSString * linkUrl;


/////////////// GroupView3(店铺) //////////////
/// 品牌图标
@property (nonatomic, copy) NSString * brandimg;
/// 介绍
@property (nonatomic, copy) NSString * introduce;
/// 商品Url
@property (nonatomic, copy) NSString * albumActivityImgurl;
/// 商品名
@property (nonatomic, copy) NSString * name;
@property (nonatomic, copy) NSString * albumActivityName;
@property (nonatomic, copy) NSString * albumActivityIntro;

@end


#pragma mark ------------------------------ 详情 ----------------------------


#pragma mark - 商品详情实体
@interface EShopGoodsDetailEntity : NSObject

/// 接口请求结果
@property (nonatomic, copy) NSString * result;
/// 是否收藏
@property (nonatomic, assign) NSUInteger isCollection;
/// 购物车商品总数
@property (nonatomic, assign) NSUInteger goodTotalCount;
/// 商品信息
@property (nonatomic, strong) EShopGoodsEntity *good;
/// 一元夺宝商品特殊描述
@property (nonatomic, strong) EShopGoodsDetailTreasureBeanModel *treasureBean;

@end

#pragma mark - 一元夺宝商品特有返回
@interface EShopGoodsDetailTreasureBeanModel : NSObject

@property (nonatomic, strong) EShopGoodsDetailTreasureBeanDataModel *data;
/// 请求状态
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *msg;

@end

@interface EShopGoodsDetailTreasureBeanDataModel : NSObject

@property (nonatomic, strong) EShopGoodsDetailTreasureBeanDataGoodsInfoModel *goodsInfo;

@end

@interface EShopGoodsDetailTreasureBeanDataGoodsInfoModel : NSObject

/// 总量
@property (nonatomic, assign)NSInteger total;
/// 库存
@property (nonatomic, assign)NSInteger stockSize;

/// 获取当前已售进度
- (float)progress;

@end

#pragma mark - 单独商品模型
@interface EShopItemEntity : NSObject
#pragma mark -  普通专辑商品item模型(代码：022101普通专辑商品组件,011601轮播图组件,021401多列组件)
/// 商品图片地址
@property (nonatomic ,copy) NSString *imgUrl;
/// 商品图片链接
@property (nonatomic ,copy) NSString *linkUrl;


#pragma mark -  带品牌专辑Item模型(代码：022201)
@property (nonatomic, copy) NSString *brandUrl;
@property (nonatomic, copy) NSString *iconUrl;
@property (nonatomic, assign) NSInteger idField;
@property (nonatomic, copy) NSString *logoUrl;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *introduce;


#pragma mark -  每日精选Item模型(代码：011401)
@property (nonatomic, assign) NSInteger albumType;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, assign) NSInteger itemId;
@property (nonatomic, copy) NSString *recReason;
@property (nonatomic, assign) NSInteger type;


#pragma mark -  商品模型(2018.1.22更新完善)
/// 商品标题
@property (nonatomic, copy) NSString *title;
/// 商品图片
@property (nonatomic, strong) NSArray <EShopItemEntity *>*goodsImageUrls;
/// 商品子标题
@property (nonatomic, copy) NSString *subTitle;
/// 商品当前价格
@property (nonatomic, copy) NSString *currentPrice;
/// 价格
@property (nonatomic, copy) NSString *price;
/// 商品原价
@property (nonatomic, copy) NSString *originalPrice;
/// 5色可选
@property (nonatomic, copy) NSString *colorDesc;
/// 商品图片数组
@property (nonatomic, strong) NSArray *imgUrlList;
/// 是否收藏
@property (nonatomic, assign) BOOL islike;
/// 价格标签
@property (nonatomic, strong) NSArray *priceTags;
/// 商品标签
@property (nonatomic, strong) NSArray *goodsTags;
/// 商品标题标签
@property (nonatomic, strong) NSArray *goodsTitleTag;
/// 配送地址
@property (nonatomic, copy) NSString *address;

@end




