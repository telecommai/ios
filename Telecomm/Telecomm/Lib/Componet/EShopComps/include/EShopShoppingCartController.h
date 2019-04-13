//
//  EShopShoppingCartViewController.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/5.
//  Copyright © 2018年 wsl. All rights reserved.
//

/* 购物车列表界面 */

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    /// 购物车没有商品的模式
    ShoppingCartEmptyMode,
    /// 购物车有商品的模式
    ShoppingCartNormalMode,
    /// 购物车编辑模式
    ShoppingCartEditMode,
} ShoppingCartMode;

@interface EShopShoppingCartController : UIViewController

@property (nonatomic, copy) void(^shoppingCartGoodsNumberStringBlock)(NSString *numberString);

/// 在shopingcartAndMineController中使用
- (void)shoppingCartControllerCreateData;
/// 右边编辑按钮是否隐藏
- (void)shoppingCartControllerRightEditButtonHidden:(BOOL)hidden;

@end
