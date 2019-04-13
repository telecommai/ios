//
//  JFCoinSimpleIntroManager.h
//  StockMarket
//
//  Created by 王胜利 on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FinanceDetailViewConst.h"
#import "StockMarketConfigModel.h"

NS_ASSUME_NONNULL_BEGIN
@class CoinSimpleCoinIntroModel,CoinSimpleIntroRecommendModel;

@interface CoinSimpleIntroModel : NSObject

@property (nonatomic, strong) CoinSimpleCoinIntroModel *coin;
@property (nonatomic, strong) NSArray <CoinSimpleIntroRecommendModel *>* recommend_site;

@end

/// 币介绍
@interface CoinSimpleCoinIntroModel : NSObject

@property (nonatomic, copy) NSString * coin;
@property (nonatomic, copy) NSString * hans_title;
@property (nonatomic, copy) NSString * en_title;
@property (nonatomic, assign) double available_supply;
@property (nonatomic, copy) NSString * total_supply;
@property (nonatomic, assign) double max_supply;
@property (nonatomic, assign) double cap;
@property (nonatomic, copy) NSString * rank;
@property (nonatomic, copy) NSString * type;
@property (nonatomic, copy) NSString * exchange_sites;
@property (nonatomic, copy) NSString * ico_amount;
@property (nonatomic, copy) NSString * ico_cost;
@property (nonatomic, copy) NSString * ico_dispatch;
@property (nonatomic, copy) NSString * ico_time;
@property (nonatomic, copy) NSString * introduce;
@property (nonatomic, assign) double proportion;

@property (nonatomic, assign) double volume;
@property (nonatomic, copy) NSString * web_site;
@property (nonatomic, copy) NSString * white_paper;

@end

/// 推荐币
@interface CoinSimpleIntroRecommendModel : NSObject

@property (nonatomic, strong) NSString * coin;
@property (nonatomic, strong) NSString * currency;
@property (nonatomic, strong) NSString * en_locale;
@property (nonatomic, strong) NSString * en_title;
@property (nonatomic, strong) NSString * hans_locale;
@property (nonatomic, strong) NSString * hans_title;
@property (nonatomic, strong) NSString * url;
@property (nonatomic, strong) NSNumber * vol;

@end

@interface JFCoinSimpleIntroManager : NSObject

+ (CoinSimpleIntroModel *)coinSimpleIntroDatas;
@property (nonatomic, assign) CoinShowType coinShowType;
@property (nonatomic, strong) StockMarketConfigMarketModel *model;

+ (NSMutableArray *)coinSimpleIntroLocalDatasWithModel:(CoinSimpleIntroModel *)coinModel coinShowType:(CoinShowType)type marketConfigMarketModel:(StockMarketConfigMarketModel *)model ;

@end

NS_ASSUME_NONNULL_END
