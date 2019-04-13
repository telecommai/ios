//
//  JFStockManager.h
//  StockMarket
//
//  Created by 夏祥可 on 2019/2/18.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constant.h"

// 汇率加载间隔时间(以分钟计算) 24小时(一天)
#define RateLoadSpace 60*24

NS_ASSUME_NONNULL_BEGIN

@interface JFStockMarketManager : NSObject


+ (instancetype)manager;

/// 是否请求过配置
@property (nonatomic, assign) BOOL isLoadConfig;
/// 上次请求汇率的时间(间隔RateLoadSpace分钟以上，重新刷新)
@property (nonatomic, strong) NSDate  *lastLoadRateTime;

/// 请求行情配置信息(每次应用启动调用)
- (void)marketConfigWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// 请求行情汇率信息(间隔5分钟以上，重新掉接口刷新)
- (void)marketRateWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// 封装请求配置和汇率信息接口(以上两个)
- (void)marketConfigAndRateWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;

@end

NS_ASSUME_NONNULL_END
