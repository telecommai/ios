//
//  ETHCheckPharseController.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/8.
//  Copyright © 2018年 wsl. All rights reserved.
//  ETH创建钱包_检查助记词
//

#import <UIKit/UIKit.h>
#import <ethers/Account.h>
#import "TCWalletTipController.h"

@interface ETHCheckPharseController : UIViewController

/// 助记词
@property (nonatomic, strong) NSArray *memoryWord;
/// 钱包账户
@property (nonatomic, strong) Account *account;
@property (nonatomic, strong) NSString *walletName;
@property (nonatomic, strong) NSString *walletAvatar;


@end
