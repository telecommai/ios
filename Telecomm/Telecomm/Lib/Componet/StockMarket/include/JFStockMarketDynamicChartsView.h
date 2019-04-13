//
//  JFStockMarketDynamicChartsView.h
//  WalletManager
//
//  Created by YRH on 2018/11/7.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 股市动态图表视图
#import <UIKit/UIKit.h>
#import "JFKLineChartView.h"
#import "JFBarChartView.h"
#import "JFPNChartView.h"

@class KLineInfoCandleItem;

@interface JFStockMarketDynamicChartsView : UIView

/// 开启加载动画
- (void)startLoading;
/// 结束加载动画
- (void)endLoading;

/// 填充kline数据
- (void)fillChartsViewData:(NSMutableArray <KLineInfoCandleItem *>*)dataArray chartMoveToX:(CGFloat)x;

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

/// 横屏时候的布局
- (void)landscapeLayoutWithHeight:(CGFloat)height;
/// 竖屏布局
- (void)portraitLayout;

@end

