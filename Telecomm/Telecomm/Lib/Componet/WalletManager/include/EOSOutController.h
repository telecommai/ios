//
//  EOSOutController.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/23.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import "WalletOutCoinController.h"

@interface EOSOutController : WalletOutCoinController

@property (nonatomic, strong) TradeOutItemView *fromView;

- (void)tradeSuccessSendChatMsg:(WalletTradeModel *)model;

@end
