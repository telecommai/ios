//
//  EShopAddToCartUtil.h
//  EShopComps
//
//  Created by 王胜利 on 2018/10/30.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopAddToCartUtil : NSObject

// 添加商品到h购物车o动画
+ (void)addToShoppingCartAnimalWithGoodsImage:(UIImage *)goodsImage startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint complete:(void(^)(void))complete;

@end

NS_ASSUME_NONNULL_END
