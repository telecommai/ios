//
//  JFExchangeChildController.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/12/3.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  交易所 子控制器

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFExchangeChildController : UIViewController

//是否加载过
@property (nonatomic, assign) BOOL isLoad;
///交易所ID
@property (nonatomic, copy) NSString *site;
///type
@property (nonatomic, copy) NSString *currency;

@end

NS_ASSUME_NONNULL_END
