//
//  JFDepthChartView.h
//  StockMarket
//
//  Created by YRH on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Charts/Charts-Swift.h>
#import "DepthXAxisFormatter.h"
#import "JFStockAnalysisDepthModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFDepthChartView : UIView

- (void)clearData;
- (void)reloadDepthData:(JFStockAnalysisDepthDataModel *)depthModel;

@end

NS_ASSUME_NONNULL_END
