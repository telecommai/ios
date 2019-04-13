//
//  HDChoseWalletTypeController.h
//  WalletManager
//
//  Created by 赵洪壮 on 2019/3/25.
//  Copyright © 2019 pansoft. All rights reserved.
//  选择钱包类型 （冷钱包 热钱包）

#import <UIKit/UIKit.h>
#import <ethers/Account.h>
#import "BTCWalletManager.h"
#import "HDWallet.h"

NS_ASSUME_NONNULL_BEGIN

@interface HDChoseWalletTypeController : UIViewController

@property (nonatomic,assign) HDWalletJumpType hdWalletJumpType;
@property (nonatomic, strong) NSString *walletName;
@property (nonatomic, strong) NSString *walletAvatar;
/// ETH钱包
@property (nonatomic, strong) Account *account;
// BTC钱包
@property (nonatomic, strong) BTCWallet *btcWallet;


@end

NS_ASSUME_NONNULL_END
