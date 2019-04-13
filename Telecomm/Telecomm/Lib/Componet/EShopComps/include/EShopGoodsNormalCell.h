//
//  EShopGoodsNormalCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/17.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品详情通用单行组件

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    NormalCellContentTypeOneLine,
    NormalCellContentTypeMoreLine,
} NormalCellContentType;

@interface EShopGoodsNormalCell : UITableViewCell


/**
 赋值通用单行组件

 @param title 标题
 @param tips 内容
 */
- (void)cellWithTitle:(NSString *)title tips:(NSArray *)tips contentType:(NormalCellContentType)contentType;

/// 内容Label颜色
@property (nonatomic, strong) UIColor *introLabelColor;
/// 内容Label字体
@property (nonatomic, strong) UIFont *introLabelFont;

- (void)changeTips:(NSArray *)tips;
@end
