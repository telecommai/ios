//
//  BTCPaperPharseController.h
//  WalletManager
//
//  Created by 王胜利 on 2018/6/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//  创建BTC钱包_备份助记词
//

#import <UIKit/UIKit.h>
#import "BTCWalletManager.h"

@interface BTCPaperPharseController : UIViewController
/// 钱包账户
@property (nonatomic, strong) BTCWallet *btcWallet;
/// 钱包名称
@property (nonatomic, strong) NSString *walletName;
/// 钱包头像
@property (nonatomic, strong) NSString *walletAvatar;

@end
