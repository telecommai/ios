//
//  JFPageMenuChildController.h
//  WalletManager
//
//  Created by StarLord on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewControllerManager.h"
#import "JFStockMarketController.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFPageMenuChildController : UIViewController


//是否加载过
@property (nonatomic, assign) BOOL isLoad;
//是否开启定时任务
@property (nonatomic, assign) BOOL isStartTimer;


//当前控制器对应币类型
@property (nonatomic, copy) NSString *categoryID;

@end

NS_ASSUME_NONNULL_END
