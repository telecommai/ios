//
//  JFStockRiseFallController.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 涨跌幅

#import <UIKit/UIKit.h>
#import "JFPageMenuChildController.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockRiseFallController : JFPageMenuChildController

//是否开启定时任务
@property (nonatomic, assign) BOOL isStartTimer;
//是否加载过
@property (nonatomic, assign) BOOL isLoad;

@end

NS_ASSUME_NONNULL_END
