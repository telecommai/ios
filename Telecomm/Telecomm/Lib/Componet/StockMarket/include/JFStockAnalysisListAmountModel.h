//
//  JFStockAnalysisListAmountModel.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/20.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisListAmountModel : NSObject

@property(nonatomic,copy)   NSString                *volume;
@property(nonatomic,copy)   NSString                *price;
@property(nonatomic,copy)   NSString                *originalPrice;

+(instancetype)nullModel;

@end

@interface JFStockAnalysisListAmountDataModel : NSObject

@property (nonatomic , copy) NSArray             * asks;
@property (nonatomic , copy) NSArray             * bids;

@property (nonatomic , assign) CGFloat              asksProportion;
@property (nonatomic , assign) CGFloat              bidsProportion;

@end

NS_ASSUME_NONNULL_END
