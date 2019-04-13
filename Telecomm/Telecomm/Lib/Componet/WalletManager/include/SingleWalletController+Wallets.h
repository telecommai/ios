//
//  SingleWalletController+Wallets.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/28.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import "SingleWalletController.h"

NS_ASSUME_NONNULL_BEGIN

@interface SingleWalletController (Wallets)
- (void)btcRefreshData;
- (void)ethRefreshData;
- (void)eosRefreshData;
- (void)pwrRefreshData;
@end

NS_ASSUME_NONNULL_END
