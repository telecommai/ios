//
//  WalletAllTokenCell.h
//  OpenPlanet
//
//  Created by 高建飞 on 2018/6/5.
//  Copyright © 2018年 wsl. All rights reserved.
//  开放钱包，我的资产Cell
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "WalletModel.h"

@interface WalletAllTokenCell : UITableViewCell

@property (nonatomic, copy) BoolBlock switchBlock;

- (void)cellWithData:(WalletTokenModel *)model type:(NSString *)type;

@end
