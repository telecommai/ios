//
//  JFCoinCapitalManager.h
//  StockMarket
//
//  Created by 赵洪壮 on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CoinCapitalModel,CoinCapitalTrendModel,CoinCapitalDayRecordModel,CoinCapitalLargeTrendModel,CoinCapitalTableRecords;

NS_ASSUME_NONNULL_BEGIN

@interface JFCoinCapitalManager : NSObject

+ (CoinCapitalModel *)coinCapitalDatas;

@end

/// 资金model
@interface CoinCapitalModel : NSObject

/// 资金成交分布
@property (nonatomic, strong) CoinCapitalTrendModel *fund_chart;
/// 成交大单
@property (nonatomic, strong) NSMutableArray <CoinCapitalLargeTrendModel *>*large_orders;
/// 一小时内成交
@property (nonatomic, strong) NSMutableArray <CoinCapitalTrendModel *>*recent_1hour_minutes_records;
/// 近五日
@property (nonatomic, strong) NSDictionary *day_records;
/// 排序后近五日数据
@property (nonatomic, strong) NSMutableArray <CoinCapitalTrendModel *>*dayRecordsList;
///
@property (nonatomic, strong) CoinCapitalTableRecords *table_records;
/// 成交趋势
@property (nonatomic, strong) NSMutableArray <CoinCapitalTrendModel *>*trend_records;

/// 多少分钟内成交总成交量
- (CoinCapitalTrendModel *)trendModelWithMinute:(NSInteger)minute;

@end

/// 成交
@interface CoinCapitalTrendModel : NSObject

@property (nonatomic, strong) NSString *total_fund;
@property (nonatomic, assign) double incomes;
@property (nonatomic, assign) double outputs;
@property (nonatomic, strong) NSString *time;

- (NSArray *)coinCapitalTrendArray;

@end

/// 成交大单
@interface CoinCapitalLargeTrendModel : NSObject

@property (nonatomic, assign) double amount;
@property (nonatomic, assign) double usd_price;
@property (nonatomic, strong) NSString *total;
@property (nonatomic, strong) NSString *time;
@property (nonatomic, strong) NSString *type;

- (NSArray *)coinCapitalLargeTrendArray;

@end

@interface CoinCapitalTableRecords : NSObject

/// 24Hours
@property (nonatomic, strong) CoinCapitalTrendModel *hoursModel;
/// today
@property (nonatomic, strong) CoinCapitalTrendModel *todayModel;

@end

NS_ASSUME_NONNULL_END
