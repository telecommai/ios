//
//  WalletTradeController.h
//  OpenPlanet
//
//  Created by 谢虎 on 2018/6/6.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WalletModel.h"

@interface WalletTradeController : UIViewController

@property (nonatomic, assign) BOOL isTokenAccount; // 是否是代币
@property (nonatomic, strong) WalletModel *walletModel;
@property (nonatomic, strong) WalletTokenModel *walletAccountModel;

- (instancetype)initWithWalletModel:(WalletModel *)walletModel
                 walletAccountModel:(WalletTokenModel *)walletAccountModel
                    isTokenAccount:(BOOL) isTokenAccount;

@end
