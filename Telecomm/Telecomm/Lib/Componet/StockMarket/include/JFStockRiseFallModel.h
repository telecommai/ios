//
//  JFStockRiseFallModel.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/11/20.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  股票行情 涨跌幅 model

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JFStockRiseFallChildModel;

@interface JFStockRiseFallModel : NSObject

///头部列表数据
@property (nonatomic, strong) NSArray <JFStockRiseFallChildModel *>*main;
///涨幅榜数据
@property (nonatomic, strong) NSArray <JFStockRiseFallChildModel *>*increases;
///跌幅榜数据
@property (nonatomic, strong) NSArray <JFStockRiseFallChildModel *>*decreases;

@property (nonatomic, assign) BOOL increasesShow;
@property (nonatomic, assign) BOOL decreasesShow;

@end


@interface JFStockRiseFallChildModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *high;
@property (nonatomic, copy) NSString *low;
@property (nonatomic, copy) NSString *buy;
@property (nonatomic, copy) NSString *sell;
@property (nonatomic, copy) NSString *last;
@property (nonatomic, copy) NSString *vol;
@property (nonatomic, copy) NSString *open;
@property (nonatomic, copy) NSString *time;

@end

NS_ASSUME_NONNULL_END
