//
//  EShopGoodsSKUController.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/9/13.
//  Copyright © 2018年 谢虎. All rights reserved.
//  选择商品类型/数量

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, EShopGoodsSKUBottomViewType) {
    EShopGoodsSKUBottomAddCart,       // 加入购物车
    EShopGoodsSKUBottomBuyNow,        // 立即购买
    EShopGoodsSKUBottomAddCartAndBuy  // 加入购物车或者立即购买
};

@interface EShopGoodsSKUController : UIViewController

/// 商品模型
@property (nonatomic, strong) EShopGoodsDetailEntity *goodsDetailEntity;
/// 按钮样式 1立即购买 2 加入购物车 3 两个按钮
@property (nonatomic, assign) EShopGoodsSKUBottomViewType bottomType;
/// 当前所选数量
@property (nonatomic, assign) NSInteger currentNumber;
/// 最小可选数量
@property (nonatomic, assign) NSInteger minNumber;
/// 最大可选数量
@property (nonatomic, assign) NSInteger maxNumber;

/* 选择Block
 selectSkuEntity当前所选sku
 count 数量
 skuFormatString 所选sku拼接字符串
 控制器跳转下一页面  1 ：立即购买    2 加入购物车
 */
@property (nonatomic, copy) void(^goodsSelectSkuBlock)(EShopGoodsSKUEntity *selectSkuEntity, NSInteger count, NSString *skuFormatString, NSInteger selectType);

@end
