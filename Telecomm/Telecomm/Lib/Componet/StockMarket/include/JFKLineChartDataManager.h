//
//  JFKLineChartDataManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/6.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 管理K线图数据
#import "JFFillChartsDataBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFKLineChartDataManager : JFFillChartsDataBaseManager

@property (nonatomic, assign) BOOL isTimeShare;
@property (nonatomic, assign) BOOL xAxisShowHour;

@end

NS_ASSUME_NONNULL_END
