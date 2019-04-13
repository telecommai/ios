//
//  JFMACDdataManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import "JFTargetDataBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFMACDdataManager : JFTargetDataBaseManager

- (LineChartData *)generateDEAAndDIFLineData;
- (BarChartData *)generateMACD;


@end

NS_ASSUME_NONNULL_END
