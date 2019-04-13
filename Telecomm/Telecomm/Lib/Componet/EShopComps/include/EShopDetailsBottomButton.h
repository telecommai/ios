//
//  EShopDetailsBottomButton.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/18.
//  Copyright © 2018年 wsl. All rights reserved.
//  商品详情底部工具栏左边独立按钮

#import <UIKit/UIKit.h>


@interface EShopDetailsBottomButton : UIView

/**
 商品详情底部工具栏左边独立按钮

 @param image 按钮图片
 @param title 按钮名称
 */
- (void)viewWithImage:(UIImage *)image title:(NSString *)title;


/// 按钮点击回调事件
@property (nonatomic, copy) VoidBlock tapAction;

@end
