//
//  StockMarketCurrencySymbol.h
//  StockMarket
//
//  Created by YRH on 2019/2/19.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StockMarketCurrencyManager : NSObject

/// 当前设置的货币类型
+ (NSString *)currentCurrencyType;
/// 返回当前货币类型的符号标识
+ (NSString *)currentCurrencySymbol;
/// 根据货币类型返回符号标识
+ (NSString *)currencySymbolWithCurrencyType:(NSString *)currentCurrencyType;

@end

NS_ASSUME_NONNULL_END
