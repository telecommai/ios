//
//  JFJDKLineDataManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// JDK随机指标线数据
#import "JFTargetDataBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFJDKLineDataManager : JFTargetDataBaseManager

- (LineChartData *)generateJDKLineData;

@end

NS_ASSUME_NONNULL_END
