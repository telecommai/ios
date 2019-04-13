//
//  WalletChoseTokenView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/7.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WalletModel.h"

typedef void(^WalletAccountSelect)(WalletTokenModel *account);

@interface WalletChoseTokenView : UIView

@property (nonatomic, copy)   WalletAccountSelect walletAccountSelectBlock;
@property (nonatomic, strong) WalletTokenModel *accountModel;

@end
