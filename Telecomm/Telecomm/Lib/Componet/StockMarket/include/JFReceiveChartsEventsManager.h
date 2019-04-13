//
//  JFReceiveChartsEventsTool.h
//  WalletManager
//
//  Created by YRH on 2018/11/7.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 图表代理处理类
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Charts/Charts-Swift.h>
#import "JFCandleStickInfoView.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^GesturePointLcationCallback)(BOOL havePoint, BOOL screenLeft, BOOL screenRight, ChartViewBase *chartView);
typedef void(^ChartValueSelected)(ChartViewBase *chartView, ChartDataEntry *entry, ChartHighlight *highlight);
typedef void(^SlideFarLeft)(ChartViewBase *chartView, KLineInfoCandleItem *item);

@interface JFReceiveChartsEventsManager : NSObject <ChartViewDelegate>

@property (nonatomic, strong) CombinedChartView *klineChartView;
@property (nonatomic, strong) CombinedChartView *barChartView;
@property (nonatomic, strong) CombinedChartView *pnChartView;

/// 当前手势触摸点位置回调
@property (nonatomic, copy) GesturePointLcationCallback gesturePointLcationCallback;
/// 当前选中的点的信息
@property (nonatomic, copy) ChartValueSelected chartValueSelected;
/// 滑动到最左边
@property (nonatomic, copy) SlideFarLeft slideFarLeft;

@end

NS_ASSUME_NONNULL_END
