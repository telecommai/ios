//
//  JFMarketHeaderInfoModel.h
//  StockMarket
//
//  Created by YRH on 2018/11/20.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MJExtension/MJExtension.h"

NS_ASSUME_NONNULL_BEGIN

@class JFMarketHeaderInfoShowModel;

@interface JFMarketHeaderInfoModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, assign) CGFloat high;
@property (nonatomic, assign) CGFloat low;
@property (nonatomic, assign) CGFloat buy;
@property (nonatomic, assign) CGFloat sell;
@property (nonatomic, assign) CGFloat last;
@property (nonatomic, assign) CGFloat vol;
@property (nonatomic, assign) CGFloat open;
@property (nonatomic, assign) NSInteger time;
@property (nonatomic, copy) NSString *index_market_id;
@property (nonatomic, assign) NSInteger is_index;
@property (nonatomic, strong) JFMarketHeaderInfoShowModel *showModel;

@end

@interface JFMarketHeaderInfoShowModel : NSObject

@property (nonatomic, assign) NSInteger cs;
@property (nonatomic, assign) NSInteger dc;
@property (nonatomic, assign) NSInteger fund;
@property (nonatomic, assign) NSInteger statistics;
@property (nonatomic, assign) NSInteger announce;

@end

NS_ASSUME_NONNULL_END
