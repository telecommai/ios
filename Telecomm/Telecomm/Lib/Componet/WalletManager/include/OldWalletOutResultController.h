//
//  OldWalletOutResultController.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/24.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TalkChainHeader.h"
#import "TCTools.h"
#import "JFTransferSendMessage.h"
#import "WalletUtil.h"
#import "OldWalletOutCoinResultView.h"
#import "SLAlertController.h"
#import "OldWalletOutController.h"
#import "WalletTradeUtil.h"


@interface OldWalletOutResultController : UIViewController


/// 链类型
@property (nonatomic, assign) BlockChainType chainType;
/// eth配置
@property (nonatomic, strong) ETHTradeConfig *ethConfig;
/// btc配置
@property (nonatomic, strong) BTCTradeConfig *btcConfig;
/// eos配置
@property (nonatomic, strong) EOSTradeConfig *eosConfig;

/// 转账金额
@property (nonatomic, copy) NSString *moneyValue;
/// 单位
@property (nonatomic, copy) NSString *moneyUnit;
/// 进入类型
@property (nonatomic, assign) TransferFromType type;

@end
