//
//  EShopCommodityInfoCell.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/8.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 购物车 商品信息cell

#import <UIKit/UIKit.h>
#import "EShoppingCartCommoditySectionModel.h"

typedef enum : NSUInteger {
    /// cell 默认模式
    CellNormalMode,
    /// cell 编辑模式
    CellEditMode,
} CellMode;

@class EShopCommodityInfoCell;
@protocol EShopCommodityInfoCellDelegate <NSObject>

@optional
/**
 点击 checkbox

 @param sender checkboxBtn
 @param model EShoppingCartCommodityModel
 @param cell cell
 */
- (void)touchCheckbtnAction:(UIButton *)sender commodityModel:(EShoppingCartCommodityModel *)model cell:(EShopCommodityInfoCell *)cell;

/**
 点击 stepper
 */
- (void)cellTouchStepperDidBeginEditing:(UITextField *)textField commodityModel:(EShoppingCartCommodityModel *)model cell:(EShopCommodityInfoCell *)cell;

/**
 点击 stepper 减号

 @param model model description
 @param cell cell description
 @param originalValue 原始个数
 */
- (void)touchStepperSubtractionCommodityModel:(EShoppingCartCommodityModel *)model cell:(EShopCommodityInfoCell *)cell originalValue:(NSString *)originalValue;

/**
 点击 stepper 加号

 @param model model description
 @param cell cell description
 @param originalValue 原始个数
 */
- (void)touchStepperAddCommodityModel:(EShoppingCartCommodityModel *)model cell:(EShopCommodityInfoCell *)cell originalValue:(NSString *)originalValue;

/**
 点击删除按钮

 @param sender sender description
 @param model model description
 @param cell cell description
 */
- (void)touchDeleteBtnAction:(UIButton *)sender commodityModel:(EShoppingCartCommodityModel *)model cell:(EShopCommodityInfoCell *)cell;

@end

@interface EShopCommodityInfoCell : UITableViewCell

@property (nonatomic, weak) id<EShopCommodityInfoCellDelegate> delegate;
/// cell样式
@property (nonatomic, assign) CellMode cellMode;
/// cell数据
@property (nonatomic, strong) EShoppingCartCommodityModel *commodityModel;
/// cell的数据的上层数据
@property (nonatomic, strong) EShoppingCartCommoditySectionModel *sectionModel;
/// 隐藏cell中的checkbox按钮
- (void)hiddenCellCheckBox;

@end
