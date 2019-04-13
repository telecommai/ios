//
//  OpenWalletInMoneyController.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/6.
//  Copyright © 2018年 wsl. All rights reserved.
//  收款页面(ETH、BTC)
//

#import <UIKit/UIKit.h>
#import "WalletModel.h"

@interface WalletInCoinController : UIViewController


- (void)viewWithWalletModel:(WalletModel *)walletModel
         walletAccountModel:(WalletTokenModel *)walletAccountModel
         isTokenAccount:(BOOL) isTokenAccount;

@end
