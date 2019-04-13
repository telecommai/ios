//
//  JFFillChartsDataBaseManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/6.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 填充图表内容
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Charts/Charts-Swift.h>
#import "FinanceDetailViewConst.h"

#import "KlineXAxisFormatter.h"
#import "KLineInfoParseModel.h"

#import "JFMALineDataManager.h"
#import "JFBOLLLineDataManager.h"
#import "JFKDJLineDataManager.h"
#import "JFMACDdataManager.h"
#import "JFTimeShareLineDataManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFFillChartsDataBaseManager : NSObject

@property (nonatomic, copy) NSMutableArray<KLineInfoCandleItem *> *klineList;
@property (nonatomic, strong) CombinedChartView *combinedChartView;

/// 填充图表
- (void)fillChartViewWithChartView:(CombinedChartView *)combinedChartView kLineData:(NSMutableArray<KLineInfoCandleItem *> *)klineList;

/// 分时线数据
- (LineChartDataSet *)timeShareLineSet;
/// 填充MA线
- (void)fillMAline;
/// 填充BOLL线
- (void)fillBOLLline;
/// 填充KDJ线
- (void)fillKDJline;
/// 填充MACD数据
- (void)fillMACD;

@end

NS_ASSUME_NONNULL_END
