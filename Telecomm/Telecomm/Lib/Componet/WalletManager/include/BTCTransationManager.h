//
//  BTCTransationManager.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/4.
//  Copyright © 2018年 pansoft. All rights reserved.
//  BTC钱包交易封装
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WalletModel.h"
#import "BRTransaction.h"

#define SETTINGS_SKIP_FEE_KEY @"SETTINGS_SKIP_FEE"

@interface BTCTransationManager : NSObject

+ (instancetype)sharedManager;

- (void)btcTransactionSignWithToAddress:(NSString *)toAddress wallet:(WalletModel *)wallet amount:(NSInteger)amount complete:(void(^)(NSString *sign,BRTransaction *transaction, NSError *error))complete;

@end



