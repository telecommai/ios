//
//  WalletTradeListController.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/22.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BlockChainManager.h"
#import "WalletModel.h"

@interface WalletTradeListController : UIViewController


/// 类型(1:全部 2:转出 3:转入)
@property (nonatomic, copy) NSString *type;
@property (nonatomic, assign) BOOL isTokenAccount; // 是否是代币
@property (nonatomic, strong) WalletModel *walletModel;
@property (nonatomic, strong) WalletTokenModel *walletAccountModel;

/// 钱包地址
@property (nonatomic, copy) NSString *walletAddress;
/// 代币Id
@property (nonatomic, copy) NSString *tokenId;

@property (nonatomic, assign) BlockChainType chainType;


@end
