//
//  PWROutController.h
//  WalletManager
//
//  Created by 王胜利 on 2019/4/3.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import "WalletOutCoinController.h"

NS_ASSUME_NONNULL_BEGIN

@interface PWROutController : WalletOutCoinController

- (void)tradeSuccessSendChatMsg:(WalletTradeModel *)model;

@end

NS_ASSUME_NONNULL_END
