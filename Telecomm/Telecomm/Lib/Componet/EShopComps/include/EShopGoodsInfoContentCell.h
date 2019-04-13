//
//  EShopGoodsInfoContentView.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品详情图文详情WebViewCell组件

#import <UIKit/UIKit.h>

@interface EShopGoodsInfoContentCell : UITableViewCell

/// 根据url赋值商品详情
- (void)loadUrlString:(NSString *)urlString complete:(VoidBlock)complete;
/// 直接赋值HTTPString
- (void)loadHttpString:(NSString *)httpString complete:(VoidBlock)complete;
/// 加载本地html文件
- (void)loadLocalUrlString:(NSString *)localUrlString complete:(VoidBlock)complete;

@end
