//
//  JFStockAllCoinController.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 所有币种显示

#import <UIKit/UIKit.h>
#import "JFPageMenuChildController.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAllCoinController : JFPageMenuChildController

//是否开启定时任务
@property (nonatomic, assign) BOOL isStartTimer;
//是否加载过
@property (nonatomic, assign) BOOL isLoad;
//当前控制器对应币类型
@property (nonatomic, copy) NSString *categoryID;

@end

NS_ASSUME_NONNULL_END
