//
//  JFMarketChartsBaseView.h
//  WalletManager
//
//  Created by YRH on 2018/11/6.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 图表base
#import <UIKit/UIKit.h>
#import <Charts/Charts-Swift.h>
#import "FinanceDetailViewConst.h"
#import "JFStockIndexInfoView.h"
#import "KLineInfoParseModel.h"
#import "KlineXAxisFormatter.h"

@interface JFMarketChartsBaseView : UIView

@property (nonatomic, strong) JFStockIndexInfoView *dataInfoView;

@property (nonatomic, strong) CombinedChartView *combinedChartView;

@property (nonatomic, strong) UIButton *refreshButton;

@property (nonatomic, weak) id<ChartViewDelegate> delegate;

/**
 * 调整布局,传入图标部分的高度
 **/
- (void)layoutViewWithChartsHeight:(CGFloat)height;

/**
 * 图表填充数据
 **/
- (void)fillChartView:(NSMutableArray<KLineInfoCandleItem *> *)klineList;

/**
 * 清空图表数据
 **/
- (void)chartsClearData;

/**
 * 移动到x轴某点
 **/
- (void)moveToX:(CGFloat)x;

/**
 * 点击图表上的刷新按钮
 **/
@property (nonatomic, copy) void(^touchRefreshButton)(void);

@end
