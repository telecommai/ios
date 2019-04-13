//
//  JFStockExchangeHomeController.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/12/3.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  交易所

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFExchangeHomeController : UIViewController

///控制器title
@property (nonatomic, copy) NSString *titleStr;
///交易所ID
@property (nonatomic, copy) NSString *site;

@end

NS_ASSUME_NONNULL_END
