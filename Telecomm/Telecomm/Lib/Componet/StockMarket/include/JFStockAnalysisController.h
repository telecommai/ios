//
//  JFStockAnalysisController.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailChildBaseController.h"
#import "FinanceDetailViewConst.h"
#import "StockMarketConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisController : DetailChildBaseController

@property(nonatomic,copy) NSString *marketList;

@property (nonatomic, strong) StockMarketConfigMarketModel *marketModel; 
@property (nonatomic, assign) CoinShowType currentCoinRateType;

/// 数据
- (void)buildData;

@end

NS_ASSUME_NONNULL_END
