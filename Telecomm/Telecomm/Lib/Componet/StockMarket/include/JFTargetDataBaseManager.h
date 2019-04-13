//
//  JFTargetDataBaseManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 各种指标线的基类（MA、BOLL、JDK、RSV、MACD）
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Charts/Charts-Swift.h>
#import "FinanceDetailViewConst.h"
#import "KLineInfoParseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFTargetDataBaseManager : NSObject

@property (nonatomic, strong) NSMutableArray<KLineInfoCandleItem *> *klineList;
@property (nonatomic, strong) CombinedChartView *combinedChartView;

- (void)setChartView:(CombinedChartView *)chartView list:(NSMutableArray<KLineInfoCandleItem *> *)list;

- (void)configLineSets:(LineChartDataSet *)set;

@end

NS_ASSUME_NONNULL_END
