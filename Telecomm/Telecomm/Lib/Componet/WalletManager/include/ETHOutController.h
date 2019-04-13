//
//  ETHOutController.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/6.
//  Copyright © 2018年 wsl. All rights reserved.
//  ETH转出界面
//

#import "WalletOutCoinController.h"

@interface ETHOutController : WalletOutCoinController

- (void)tradeSuccessSendChatMsg:(WalletTradeModel *)model;
@end
