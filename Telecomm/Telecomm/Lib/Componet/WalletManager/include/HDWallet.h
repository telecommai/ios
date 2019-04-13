//
//  HDWallet.h
//  WalletManager
//
//  Created by 王胜利 on 2019/3/21.
//  Copyright © 2019 pansoft. All rights reserved.
//

#ifndef HDWallet_h
#define HDWallet_h


/**
 冷钱包类型

 - HDWalletJumpTypeCreate_ETH: 创建冷钱包（ETH）
 - HDWalletJumpTypeCreate_BTC: 创建冷钱包（BTC）
 - HDWalletJumpTypeHotToCold: 热钱包->冷钱包
 - HDWalletJumpTypeColdToHot: 冷钱包->热钱包
 - HDWalletJumpTypeETHTransfer: ETH转账
 - HDWalletJumpTypeBTCTransfer: BTC转账
 */
typedef NS_ENUM(NSUInteger, HDWalletJumpType) {
    HDWalletJumpTypeCreate_ETH,
    HDWalletJumpTypeCreate_BTC,
    HDWalletJumpTypeHotToCold,
    HDWalletJumpTypeColdToHot,
    HDWalletJumpTypeETHTransfer,
    HDWalletJumpTypeBTCTransfer
};


#endif /* HDWallet_h */
