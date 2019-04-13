//
//  EShopCommodityPricesCardView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/5.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 商品信息

#import <UIKit/UIKit.h>


/**
 显示样式

 - CommodityPricesCardViewNormalMode: 默认显示样式
 - CommodityPricesCardViewEditMode: 编辑显示样式
 */
typedef NS_ENUM(NSUInteger, CommodityPricesCardViewMode) {
    CommodityPricesCardViewNormalMode,
    CommodityPricesCardViewEditMode,
};


@protocol EShopCommodityPricesCardViewDelegate <NSObject>

/// 点击checkbox的事件
- (void)touchCheckBoxAction:(UIButton *)sender;
/// 计数器 减号
- (void)stepperMinusWithValue:(double)value originalValue:(double)originalValue;
/// 计数器 加号
- (void)steperPlusWithValue:(double)value originalValue:(double)originalValue;
/// 删除
- (void)deleteBtnAction:(UIButton *)sender;
/// 计数器点击
- (void)touchStepperDidBeginEditing:(UITextField *)textField;

@end

@interface EShopCommodityPricesCardView : UIView

@property (nonatomic, weak) id<EShopCommodityPricesCardViewDelegate> delegate;

/// view的样式
@property (nonatomic, assign) CommodityPricesCardViewMode commodityPricesCardViewMode;

/// 商品名称颜色
@property (nonatomic, strong) UIColor *commodityNameColor;
/// 商品名称字体大小
@property (nonatomic, strong) UIFont *commodityNameFont;
/// 商品价格颜色
@property (nonatomic, strong) UIColor *commodityPricesColor;
/// 商品价格字体大小
@property (nonatomic, strong) UIFont *commodityPricesFont;
/// 商品数目颜色
@property (nonatomic, strong) UIColor *commodityNumColor;
/// 商品数目字体大小
@property (nonatomic, strong) UIFont *commodityNumFont;
/// 商品特别说明颜色
@property (nonatomic, strong) UIColor *commoditySpecialVersionColor;
/// 商品特别说明字体大小
@property (nonatomic, strong) UIFont *commoditySpecialVersionFont;
/// 商品税费颜色
@property (nonatomic, strong) UIColor *commodityTaxAndFeeColor;
/// 商品税费字体大小
@property (nonatomic, strong) UIFont *commodityTaxAndFeeFont;
/// 商品基本信息颜色
@property (nonatomic, strong) UIColor *commodityInfoColor;
/// 商品基本信息字体大小
@property (nonatomic, strong) UIFont *commodityInfoFont;
/// 选择按钮背景色
@property (nonatomic, strong) UIColor *checkboxButtonColor;
/// sku显示label
@property (nonatomic, strong) UILabel *skuLabel;
/// sku颜色
@property (nonatomic, strong) UIColor *skuLabelColor;
/// sku字体大小
@property (nonatomic, strong) UIFont *skuLabelFont;
/// 失效的颜色
@property (nonatomic, strong) UIColor *loseEfficacyLabelColor;
/// 失效的字体
@property (nonatomic, strong) UIFont *loseEfficacyLabelFont;
/// 失效文字描述
@property (nonatomic, copy) NSString *loseEfficacyString;


/// 隐藏选择框,改变布局
- (void)hiddenCheckBox;
/// 选择框显隐性，不改变布局
- (void)layoutNoChangeCheckBoxHidden:(BOOL)hidden;
/// 是否失效
- (void)isLoseEfficacy:(BOOL)loseEfficacy;

/**
 赋值

 @param normalImage checkBox默认图片
 @param selectedImage checkBox选中的时候的图片
 @param isSelected 是否选中
 @param commodityImageUrlStr 商品图片地址
 @param name 商品名称
 @param price 商品价格
 @param num 商品数目
 @param taxAndFee 商品税费
 @param specialVersion 商品特别说明
 @param commodityInfo 商品基本信息
 */
- (void)cardViewCheckboxWithNormalImage:(UIImage *)normalImage selecledImage:(UIImage *)selectedImage checkboxIsSelected:(BOOL)isSelected commodityImageUrlStr:(NSString *)commodityImageUrlStr commodityName:(NSString *)name commodityPrice:(NSString *)price commodityNum:(NSString *)num commodityTaxAndFee:(NSString *)taxAndFee commoditySpecialVersion:(NSString *)specialVersion commodityInfo:(NSString *)commodityInfo skuString:(NSString *)skuString goodsTypeBh:(NSString *)typeBh;

@end
