//
//  JFMarketDBManager.h
//  StockMarket
//
//  Created by YRH on 2018/12/3.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StockMarketConfigModel.h"


@interface JFMarketDBManager : NSObject

// MARK: 创建行情数据
+ (void)createMarketDataBase;

@end

// MARK: - 自选
@interface JFMarketDBManager (SelfSelected)


// MARK: 增加自选
+ (BOOL)replaceSelfSelectedCoinWithId:(NSString *)Id;
// MARK: 删除自选
+ (BOOL)deleteSelfSelectedCoinWithId:(NSString *)Id;
// MARK: 查询所有自选id
+ (NSArray <NSString *>*)selectAllIdStringFromSelfSelectedCoin;
// MARK: 查询是否有该自选
+ (BOOL)isSavedSelfSelectedCoinWithId:(NSString *)Id;


@end

// MARK: - 行情配置
@interface JFMarketDBManager (Config)

/// config数据库储存处理
+ (BOOL)updataConfigData:(NSDictionary *)dataDic;

/// 获取已保存ConfigMarket
+ (StockMarketConfigMarketModel *)getMarketConfigMarketWithMarketKey:(NSString *)marketKey;
/// 获取ConfigSites
+ (StockMarketConfigSiteModel *)getMarketConfigSiteWithSiteKey:(NSString *)siteKey;
/// 获取ConfigCoins
+ (StockMarketConfigCoinModel *)getMarketConfigCoinWithCoinKey:(NSString *)coinKey;
/// 获取configFutures
+ (NSMutableDictionary *)getMarketConfigFuturesWithFutureKey:(NSString *)futureKey;
/// 获取ConfigVersion
+ (NSString *)getMarketConfigVersion;

@end
