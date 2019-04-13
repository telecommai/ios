//
//  EShopOnlineNameView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/5.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 购物车 商品的 网店名称 view

#import <UIKit/UIKit.h>

@protocol EShopOnlineNameViewDelegate <NSObject>

/**
 点击checkBox

 @param sender button
 */
- (void)touchCheckBtnAction:(UIButton *)sender;

@end

@interface EShopOnlineNameView : UIView

/**
 代理
 */
@property (nonatomic, weak) id<EShopOnlineNameViewDelegate> delegate;

/**
 隐藏选择框,并左对齐
 */
- (void)hiddenCheckBox;

/// 选择框能否编辑
- (void)checkBoxCanEnable:(BOOL)sender;

/**
 赋值

 @param normalImage checkBox默认图片
 @param selectedImage checkBox选中的图片
 @param isSelected checkBox是否选中
 @param iconImageUel 图标图片地址
 @param titleString 文字
 @param tailImage 末尾的图片
 */
- (void)checkBoxWithNormalImage:(UIImage *)normalImage selectedImage:(UIImage *)selectedImage checkBoxIsSelected:(BOOL)isSelected iconImageUrl:(NSString *)iconImageUel placeholderIconImage:(UIImage *)placeholderIconImage titleString:(NSString *)titleString tailImage:(UIImage *)tailImage;

-(void)setImageViewTintColor:(UIColor *)tintColor;

@end
