//
//  WalletChartDataManager.h
//  WalletManager
//
//  Created by YRH on 2019/2/18.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^SuccesssHandle)(NSMutableArray *dataArray, CGFloat x);
typedef void(^FailHandle)(void);

@interface WalletChartDataManager : NSObject

/// 请求K线图数据
- (void)requestKlineDataWithMarketId:(NSString *)marketId code:(NSString *)code success:(SuccesssHandle)successHandle fail:(FailHandle)failHandle;

/// 请求K线图之前的数据
- (void)requestBeforeKlineDataWithBeforeTimeStamp:(NSString *)timeStamp currentKlineType:(NSString *)currentKlineType marketId:(NSString *)marketId success:(SuccesssHandle)successHandle fail:(FailHandle)failHandle;

@end
