//
//  TopChartIDManager.h
//  WalletManager
//
//  Created by YRH on 2019/2/18.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BlockChainManager.h"

@interface TopChartIDManager : NSObject

/// 返回对应的行情id
+ (NSString *)stockMarketIdWithWalletType:(BlockChainType)walletType;

@end
