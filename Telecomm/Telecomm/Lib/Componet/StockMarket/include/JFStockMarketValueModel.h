//
//  JFStockMarketValueModel.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/11/20.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  股票行情 市值 Model

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JFStockMarketValueChildModel;

@interface JFStockMarketValueModel : NSObject

@property (nonatomic, copy) NSString *cap;
@property (nonatomic, copy) NSString *volume;
@property (nonatomic, copy) NSString *total_supply;
@property (nonatomic, copy) NSString *available_supply;
@property (nonatomic, copy) NSString *max_supply;
@property (nonatomic, copy) NSString *incomes;
@property (nonatomic, copy) NSString *outputs;
@property (nonatomic, copy) NSString *net_inflows;
@property (nonatomic, copy) NSString *market_id;
@property (nonatomic, strong) JFStockMarketValueChildModel *ticker;

@end


@interface JFStockMarketValueChildModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *high;
@property (nonatomic, copy) NSString *low;
@property (nonatomic, copy) NSString *buy;
@property (nonatomic, copy) NSString *sell;
@property (nonatomic, copy) NSString *last;
///量
@property (nonatomic, copy) NSString *vol;
@property (nonatomic, copy) NSString *open;
@property (nonatomic, copy) NSString *time;

@end

NS_ASSUME_NONNULL_END
