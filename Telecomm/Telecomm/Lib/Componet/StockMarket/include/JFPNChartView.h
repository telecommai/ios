//
//  JFBarPositiveNegativeChartView.h
//  WalletManager
//
//  Created by YRH on 2018/11/6.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 正负图
#import "JFMarketChartsBaseView.h"
#import "FinanceDetailViewConst.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFPNChartView : JFMarketChartsBaseView

@property (nonatomic, assign) KLineIndexType pnChartTargetType;

@end

NS_ASSUME_NONNULL_END
