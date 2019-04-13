//
//  JFStockSelfSelectController.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 自选

#import <UIKit/UIKit.h>
#import "JFPageMenuChildController.h"
#import "JFStockMarketHomeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockSelfSelectController : JFPageMenuChildController

//是否开启定时任务
@property (nonatomic, assign) BOOL isStartTimer;

@end

NS_ASSUME_NONNULL_END
