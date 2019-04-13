//
//  JFStockAnalysisCommissionsModel.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/19.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisCommissionsModel : NSObject

@property(nonatomic,copy)   NSString                *volume;
@property(nonatomic,copy)   NSString                *price;
@property(nonatomic,copy)   NSString                *originalPrice;


+(instancetype)nullModel;

@end

@interface JFStockAnalysisCommissionsDataModel : NSObject

@property(nonatomic,strong) NSArray *asks;
@property(nonatomic,strong) NSArray *bids;
@property(nonatomic,assign) float   baseProportion;

@end

NS_ASSUME_NONNULL_END
