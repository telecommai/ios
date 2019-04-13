//
//  JFTimeShareLineDataManager.h
//  StockMarket
//
//  Created by YRH on 2018/11/21.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import "JFTargetDataBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFTimeShareLineDataManager : JFTargetDataBaseManager

- (LineChartDataSet *)generateTimeShareLine;

@end

NS_ASSUME_NONNULL_END
