//
//  EShopAddressListCell.h
//  EShopComps
//
//  Created by YRH on 2018/1/24.
//  Copyright © 2018年 谢虎. All rights reserved.
//

/*
 收货地址列表cell
 */
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    /// 没有编辑按钮与选中按钮，只是展示收货地址信息
    ShowAddressDetailsStyle,
    /// 可以编辑选中的样式
    AddressCanEdit,
} AddressCellStyle;

@class EShopAddressListCell;
@protocol EShopAddressListCellDelegate <NSObject>

/**
 点击编辑按钮

 @param sender sender description
 @param cell cell description
 */
- (void)touchEditButtonAction:(UIButton *)sender cell:(EShopAddressListCell *)cell;

@end

@interface EShopAddressListCell : UITableViewCell

@property (nonatomic, weak) id<EShopAddressListCellDelegate> delegate;

/// 数据源
@property (nonatomic, strong) EShopAddressEntity *addressEntity;
/// addressCell样式
@property (nonatomic, assign) AddressCellStyle addressCellStyle;

-(void)setImageViewTintColor;
@end
