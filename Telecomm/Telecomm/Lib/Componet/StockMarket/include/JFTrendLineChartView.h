//
//  JFCubicLineChartView.h
//  StockMarket
//
//  Created by YRH on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Charts/Charts-Swift.h>
#import "JFCoinCapitalManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFTrendLineChartView : UIView

/// 成交趋势
@property (nonatomic, strong) NSMutableArray <CoinCapitalTrendModel *>*dataArray;

@end

NS_ASSUME_NONNULL_END
