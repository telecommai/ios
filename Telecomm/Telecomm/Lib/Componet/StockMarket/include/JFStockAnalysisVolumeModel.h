//
//  JFStockAnalysisVolumeModel.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/19.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisVolumeModel : NSObject

@property(nonatomic,copy)   NSString                *volume;
@property(nonatomic,copy)   NSString                *price;

@property(nonatomic,assign) CGFloat                 originalPrice;
@property(nonatomic,assign) NSInteger               time;
@property(nonatomic,assign) NSInteger               type;

@end

NS_ASSUME_NONNULL_END
