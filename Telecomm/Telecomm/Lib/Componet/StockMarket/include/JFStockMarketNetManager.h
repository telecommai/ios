//
//  JFStockMarketNetManager.h
//  StockMarket
//
//  Created by 赵洪壮 on 2018/11/16.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constant.h"
#import "JFCoinSimpleIntroManager.h"
#import "JFCoinCapitalManager.h"

NS_ASSUME_NONNULL_BEGIN

/// 测试地址 
#define KSTOCKMARKETURL @"https://x.szsing.com:443"
/// 服务器地址
//#define KSTOCKMARKETURL [ReadPlistFile readValueFromPlistName:@"OptionSetting.plist" valueKey:@"Stockmarket"]

@interface JFStockMarketNetManager : NSObject

/// MARK: Config
+ (void)stockMarketConfigWithCategoryVersion:(NSString *)categoryVersion success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 汇率
+ (void)stockMarketRateWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 标题
+ (void)stockMarketTitleWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;

@end

@interface JFStockMarketNetManager (MarketList)

/// MARK: 自选
+ (void)marketListSelfSelectWithCategoryVersion:(NSString *)categoryVersion marketIds:(NSArray <NSString *>*)marketIds success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 市值
+ (void)marketListMarketValueWithPageSize:(NSInteger)pageSize page:(NSInteger)page success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 涨跌幅
+ (void)stockMarketRiseFallWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 交易所
+ (void)marketListExchangeWithPageSize:(NSInteger)page_size page:(NSInteger)page success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 平台币 所有币种(categoryID 币类型)
+ (void)marketListAllCoinWithCategoryID:(NSString *)categoryID success:(SuccessBlock)success fail:(FailBlock)fail;

@end

@interface JFStockMarketNetManager (MarketDetail)

/// MARK: 详情头部
+(void)marketDetailHeaderInfoWithMarketId:(NSString *)marketId success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: K线
+ (void)marketDetialKlineWithMarketId:(NSString *)marketId type:(NSString *)type since:(NSString *)since InfoSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 加载之前的k线
+ (void)marketDetialBeforeKlineWithMarketId:(NSString *)marketId type:(NSString *)type before:(NSString *)before InfoSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 简介
+ (void)marketDetailSimpleIntroWithCoinName:(NSString *)coinName success:(void(^)(CoinSimpleIntroModel *introModel))success fail:(FailBlock)fail;
/// MARK: 资金
+ (void)marketDetailCapitalWithWithSite:(NSString *)site coinName:(NSString *)coinName success:(void(^)(CoinCapitalModel *capitalModel))success fail:(FailBlock)fail;

/// MARK: - 详情分析
/// MARK: 深度图
+ (void)marketDetailDepthWithMarketID:(NSString *)marketID success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 挂单量 marketIndex 分类
+ (void)marketDetailAmountWithMarketIndex:(NSString *)marketIndex success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 委单量 marketIndex 分类
+ (void)marketDetailCommissionsWithMarketIndex:(NSString *)marketIndex success:(SuccessBlock)success fail:(FailBlock)fail;
/// 成交量 marketIndex 分类 timeZone 时区
+ (void)marketDetailVolumeWithMarketIndex:(NSString *)marketIndex timeZone:(NSString *)timeZone success:(SuccessBlock)success fail:(FailBlock)fail;

@end

@interface JFStockMarketNetManager (Exchange)

/// MARK: 交易所列表
+ (void)exchangeListWithSite:(NSString *)site currency:(NSString *)currency pageSize:(NSInteger)pageSize page:(NSInteger)page success:(SuccessBlock)success fail:(FailBlock)fail;

@end


@interface JFStockMarketNetManager (Base)

/// MARK: 基础GET请求
+ (void)GET:(NSString *)localUrl params:(nullable NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;

/// MARK: 基础POST请求
+ (void)POST:(NSString *)localUrl params:(nullable NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;
/// MARK: 接口失败文字
+ (NSString *)showFailMessage:(NSError *)error;

@end

NS_ASSUME_NONNULL_END



