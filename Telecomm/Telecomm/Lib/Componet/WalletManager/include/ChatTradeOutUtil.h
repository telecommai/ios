//
//  ChatTradeOutUtil.h
//  WalletManager
//
//  Created by 王胜利 on 2019/4/10.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WalletModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface ChatTradeOutUtil : NSObject

+ (NSString *)toUserId;
+ (void)tradeSuccessSendChatMsg:(WalletTradeModel *)model;

@end

NS_ASSUME_NONNULL_END
