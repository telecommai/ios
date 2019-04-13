//
//  EShopSetDefaultCell.h
//  EShopComps
//
//  Created by YRH on 2018/1/18.
//  Copyright © 2018年 谢虎. All rights reserved.
//

/*
 设置为默认地址cell
 */

#import <UIKit/UIKit.h>

@class EShopSetDefaultCell;
@protocol EShopSetDefaultCellDelegate <NSObject>

/**
 点击选择框

 @param checkBox checkBox description
 @param cell cell description
 */
- (void)touchCheckBox:(UISwitch *)checkBox cell:(EShopSetDefaultCell *)cell;

@end

@interface EShopSetDefaultCell : UITableViewCell

@property (nonatomic, weak) id<EShopSetDefaultCellDelegate> delegate;

@property (nonatomic, copy) NSString *isSelectedString;

@end
