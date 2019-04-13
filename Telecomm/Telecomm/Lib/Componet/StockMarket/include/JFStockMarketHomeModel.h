//
//  JFStockSelfSelectModel.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  股票行情 首页 自选 Model

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JFStockSelfSelectModel,StockMarketHomeCategoryModel,StockMarketHomeItemModel;

@interface JFStockMarketHomeModel : NSObject

///自选列表数据
@property (nonatomic, strong) NSArray <JFStockSelfSelectModel *>*tickers;
///横向滑动列表数据
@property (nonatomic, strong) StockMarketHomeCategoryModel *category;
///自选version
@property (nonatomic, copy) NSString *version;

@end


@interface JFStockSelfSelectModel : NSObject

@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *high;
@property (nonatomic, copy) NSString *buy;
@property (nonatomic, copy) NSString *sell;
@property (nonatomic, copy) NSString *last;
@property (nonatomic, copy) NSString *vol;
@property (nonatomic, copy) NSString *low;
@property (nonatomic, copy) NSString *open;

@end

@interface StockMarketHomeCategoryModel : NSObject

@property (nonatomic, copy) NSString *version;
@property (nonatomic, strong) NSArray <StockMarketHomeItemModel *>*list;

@end


@interface StockMarketHomeItemModel : NSObject

///币种类型
@property (nonatomic, copy) NSString *ID;
///币种名称
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) NSArray *market_ids;
@property (nonatomic, copy) NSString *type;

@end

NS_ASSUME_NONNULL_END
