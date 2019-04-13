//
//  JFMALineChartDataManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// MA指标线
#import "JFTargetDataBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFMALineDataManager : JFTargetDataBaseManager

- (LineChartData *)generateMALineData;
- (LineChartDataSet *)getMA20LineChartViewSet;

- (void)updateLineData;
- (void)updateMA5LineData;
- (void)updateMA10LineData;
- (void)updateMA20LineData;

@end

NS_ASSUME_NONNULL_END
