//
//  JFBOLLLineChartDataManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/10.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// BOLL 指标线
#import "JFTargetDataBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFBOLLLineDataManager : JFTargetDataBaseManager

- (LineChartData *)generateBOLLLineDataWithMA20:(LineChartDataSet *)ma20Set;

@end

NS_ASSUME_NONNULL_END
