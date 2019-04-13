//
//  JFRSVChartDataManager.h
//  WalletManager
//
//  Created by YRH on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// RSV 指标
#import "JFTargetDataBaseManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFRSVDataManager : JFTargetDataBaseManager

- (NSMutableArray <NSNumber *>*)generateRSVdata:(NSInteger)cycle;

@end

NS_ASSUME_NONNULL_END
