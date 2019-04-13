//
//  SignleWalletController+Market.h
//  WalletManager
//
//  Created by 王胜利 on 2019/2/26.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import "SingleWalletController.h"

NS_ASSUME_NONNULL_BEGIN

@interface SingleWalletController (Market)

/// 获取行情ID
- (NSString *)marketID;
/// 是否支持行情显示
- (BOOL)isSupportMarket;
/// 是否开启定时器
- (void)isStartTimer:(BOOL)isStartTimer;
/// 开启定时
- (void)startMarketTimer;
/// 停止定时
- (void)stopMarketTimer;
/// 请求行情配置信息(第一次请求，定时器不执行)
- (void)requestMarketConfig;
/// 请求行情数据
- (void)requestMarketData;

@end

NS_ASSUME_NONNULL_END
