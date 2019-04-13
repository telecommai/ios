//
//  WalletSelectCell.h
//  OpenPlanet
//
//  Created by wangshengli on 2018/6/5.
//  Copyright © 2018年 wsl. All rights reserved.
//  开放钱包，选择钱包Cell
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "WalletModel.h"

@class WalletSelectView;

@interface WalletSelectCell : UITableViewCell

- (void)cellWithModel:(WalletModel *)model subTitle:(NSString *)subTitle isSel:(BOOL)isSel;

@end
