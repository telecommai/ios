//
//  BluetoothController.h
//  WalletManager
//
//  Created by 王胜利 on 2019/2/27.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HDWallet.h"
#import <ethers/Account.h>
#import "WalletModel.h"
#import "BTCWalletManager.h"
#import "WalletConfirmTradeView.h"

NS_ASSUME_NONNULL_BEGIN

@interface BluetoothController : UIViewController

@property (nonatomic,assign) HDWalletJumpType hdWalletJumpType;

// 钱包模型
@property (nonatomic, strong) WalletModel *walletModel;
// ETH钱包
@property (nonatomic, strong) Account *ethAccount;
// BTC钱包
@property (nonatomic, strong) BTCWallet *btcWallet;

// 转账
@property (nonatomic, strong) WalletTradeModel *tradeModel;
@property (nonatomic, strong) WalletTokenModel *tokenModel;

@end

NS_ASSUME_NONNULL_END
