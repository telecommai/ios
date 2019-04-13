//
//  JFStockExchangeModel.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/11/20.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  股票行情 交易所 model

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JFStockExchangeChartModel;

@interface JFStockExchangeModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *volume;
@property (nonatomic, copy) NSString *site;
@property (nonatomic, copy) NSString *updated_time;

@end

@interface JFStockExchangeChartModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *incomes;
@property (nonatomic, copy) NSString *outputs;
@property (nonatomic, copy) NSString *net_inflows;
@property (nonatomic, copy) NSString *net_flow_type;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *site;

@end

NS_ASSUME_NONNULL_END
