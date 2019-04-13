//
//  JFKLineChartView.h
//  WalletManager
//
//  Created by YRH on 2018/11/6.
//  Copyright © 2018 pansoft. All rights reserved.
//

// K线图
#import "JFMarketChartsBaseView.h"
#import "KLineInfoParseModel.h"
#import "FinanceDetailViewConst.h"

@interface JFKLineChartView : JFMarketChartsBaseView

/// 指标类型 MA/BOLL
@property (nonatomic, assign) KLineIndexType klineTargetType;

/// 是否是分时
@property (nonatomic, assign) BOOL isTimeShare;
@property (nonatomic, assign) BOOL xAxisShowHour;

@end
