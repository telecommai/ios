//
//  JFPieChartView.h
//  StockMarket
//
//  Created by YRH on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Charts/Charts-Swift.h>
#import "JFCoinCapitalManager.h"
#import "FinanceDetailViewConst.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFPieChartView : UIView

- (void)loadViewWithIncomes:(double)incomes outputs:(double)outputs coinShowType:(CoinShowType)showType;

@end

NS_ASSUME_NONNULL_END
