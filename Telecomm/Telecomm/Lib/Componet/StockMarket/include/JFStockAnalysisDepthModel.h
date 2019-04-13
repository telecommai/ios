//
//  JFStockAnalysisDepthModel.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/21.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJExtension/MJExtension.h"
#import "StockMarketConfigModel.h"
#import "StockMarketRateManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisDepthItem : NSObject

@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *volume;

@end

@interface JFStockAnalysisDepthModel :NSObject

@property (nonatomic, copy) NSArray<JFStockAnalysisDepthItem *> *asks;
@property (nonatomic, copy) NSArray<JFStockAnalysisDepthItem *> *bids;

@end

@interface JFStockAnalysisDepthTickerModel :NSObject

@property (nonatomic , copy) NSString               *ticker_id;
@property (nonatomic , assign) NSInteger            time;
@property (nonatomic , assign) CGFloat              high;
@property (nonatomic , assign) CGFloat              buy;
@property (nonatomic , assign) CGFloat              sell;
@property (nonatomic , assign) CGFloat              last;
@property (nonatomic , assign) CGFloat              vol;
@property (nonatomic , assign) CGFloat              low;
@property (nonatomic , assign) CGFloat              open;

@end

@interface JFStockAnalysisDepthDataModel : NSObject

@property (nonatomic , strong) JFStockAnalysisDepthTickerModel              * ticker;
@property (nonatomic , strong) JFStockAnalysisDepthModel                    * depth;
@property (nonatomic , assign) NSInteger                                    code;
- (void)setDepthItemData:(NSDictionary *)dict oriRate:(CGFloat)oriRate coinRate:(CGFloat)coinRate;

@end


NS_ASSUME_NONNULL_END
