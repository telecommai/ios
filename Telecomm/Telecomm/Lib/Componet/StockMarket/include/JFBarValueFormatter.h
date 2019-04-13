//
//  JFExchangeBarValueFormatter.h
//  StockMarket
//
//  Created by YRH on 2018/11/23.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

/// 顶部 柱状图 数值格式化
#import <Foundation/Foundation.h>
#import <Charts/Charts-Swift.h>

@interface JFBarValueFormatter : NSObject<IChartValueFormatter>

@property (nonatomic, strong) NSMutableArray <NSString *>*valueArray;

@end

