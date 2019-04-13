//
//  BTCModel.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/24.
//  Copyright © 2018年 pansoft. All rights reserved.
//  BTC相关模型
//

#import <Foundation/Foundation.h>

@interface BTCBalanceModel : NSObject

@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *balanceBitcoin;
@property (nonatomic, strong) NSString *balanceAmount;

@end


@interface BTCUTFOModel : NSObject

@property (nonatomic, strong) NSString *confirmations;
@property (nonatomic, strong) NSString *balance;
@property (nonatomic, strong) NSString *n;
@property (nonatomic, strong) NSString *script;
@property (nonatomic, strong) NSString *txHash;

@end
