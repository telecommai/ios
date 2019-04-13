//
//  StockMarketRateManager.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/11/22.
//  Copyright © 2018 SpiderMan. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StockMarketRateManager : NSObject

+ (instancetype)manager;

/// 配置文件
@property (nonatomic ,strong) NSDictionary *rateDictionary;

/// 保存配置文件
+ (void)saveRate:(NSDictionary *)rate;

///不显示科学计数法
+ (NSString *)getStringFrom:(double)doubleVal;

/*
 换算为人民币
 @prama last     当前币种数值
 @prama currency 当前币种类型
 @prama site     当前交易所site
 */
+ (double)getCurrentTypeNmberWithNowNumber:(double)last currency:(NSString *)currency site:(NSString *)site;
/*
 换算为某种币
 @prama last     当前币种数值
 @prama currency 当前币种类型
 @prama site     当前站点
 @prama type     转换的币种类型
 */
+ (double)getNmberWithNowNumber:(double)last currency:(NSString *)currency site:(NSString *)site type:(NSString *)type;

/*
 获取对应币种汇率
 @prama site 当前交易所site
 @prama currency 当前币种类型
 */
+ (double)getRateWithSite:(NSString *)site currency:(NSString *)currency;

+ (double)calculateExchangeRate:(CGFloat)oriRate needRate:(CGFloat)needRate number:(CGFloat)number;

/*
 截取数字长度
 @prama value 值
 */
+ (NSString *)fixedCoinLengthWithOriginalValue:(CGFloat)value;

/*
 行情格式化数字
 @prama value 值
 */
+ (NSString *)marketFormatNumber:(CGFloat)num;

@end

NS_ASSUME_NONNULL_END
