//
//  WalletTradeTopView.h
//  WalletManager
//
//  Created by 于仁汇 on 2019/2/15.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FinanceDetailViewConst.h"
#import "KLineInfoParseModel.h"
#import "BlockChainManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface WalletTradeTopView : UIView

/// 链类型
@property (nonatomic, assign) BlockChainType chainType;
/// 分时图数据
@property (nonatomic, assign) BOOL isTimeShare;
@property (nonatomic, assign) BOOL xAxisShowHour;

/// MA / BOLL
@property (nonatomic, assign) KLineIndexType klineTargetType;
/// MACD / JDK
@property (nonatomic, assign) KLineIndexType pnChartTargetType;

/// 指标线发生了改变 MA / BOLL MACD / JDK
@property (nonatomic, copy) void(^changedKlineIndex)(void);
/// K线图滑动到最左端
@property (nonatomic, copy) void(^klineSlideFarLeft)(NSString *timeStamp);
/// 点击k线图上的刷新
@property (nonatomic, copy) void(^touchKlineRefresh)(void);

@end

NS_ASSUME_NONNULL_END
