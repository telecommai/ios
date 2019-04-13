//
//  ETHPaperPharseController.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/8.
//  Copyright © 2018年 wsl. All rights reserved.
//  ETH创建钱包_写下助记词
//

#import <UIKit/UIKit.h>
#import <ethers/Account.h>
#import "TCWalletTipController.h"

@interface ETHPaperPharseController : UIViewController

/// 钱包账户
@property (nonatomic, strong) Account *account;
@property (nonatomic, strong) NSString *walletName;
@property (nonatomic, strong) NSString *walletAvatar;

@end
