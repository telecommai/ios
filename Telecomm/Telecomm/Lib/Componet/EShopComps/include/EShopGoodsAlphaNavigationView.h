//
//  EShopAlphaNavigationBar.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/16.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品详情滑动隐藏导航栏

#import <UIKit/UIKit.h>
#import "EShopHeader.h"

@interface EShopGoodsAlphaNavigationView : UIView

/// 初始化标题数组
- (void)viewWithTitles:(NSArray *)titles defaultIndex:(NSUInteger)defaultIndex itemTap:(EShopTapBlock)itemTap;
/// 设置导航栏透明度
- (void)changeNavigationViewAlpha:(CGFloat)alpha;
/// 设置导航栏左边按钮(标题文字)
- (void)leftButtonWithTitle:(NSString *)title buttonTap:(EShopTapBlock)buttonTap;
/// 设置导航栏左边按钮(图片)
- (void)leftButtonWithImage:(UIImage *)image buttonTap:(EShopTapBlock)buttonTap;
/// 设置导航栏右边按钮(标题文字)
- (void)rightButtonWithTitle:(NSString *)title buttonTap:(EShopTapBlock)buttonTap;
/// 设置导航栏右边按钮(图片)
- (void)rightButtonWithImage:(UIImage *)image buttonTap:(EShopTapBlock)buttonTap;
/// 修改当前选中的标题选项
- (void)changeToIndex:(NSInteger)index;

@end

