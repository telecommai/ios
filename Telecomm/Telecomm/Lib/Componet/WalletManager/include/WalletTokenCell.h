//
//  OpenWalletAccountCell.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/5.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WalletModel.h"

@interface WalletTokenCell : UITableViewCell

- (void)cellWithAccountModel:(WalletTokenModel *)accountModel;

@end
