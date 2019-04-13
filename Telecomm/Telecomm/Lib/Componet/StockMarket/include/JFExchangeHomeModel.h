//
//  JFExchangeHomeModel.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/12/3.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  交易所 Model

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JFExchangeChildModel;

@interface JFExchangeHomeModel : NSObject

///横向滑动列表数据
@property (nonatomic, strong) NSArray <NSString *>*currencies;
///列表数据
@property (nonatomic, strong) NSArray <JFExchangeChildModel *>*tickers;

@end

@interface JFExchangeChildModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *high;
@property (nonatomic, copy) NSString *low;
@property (nonatomic, copy) NSString *buy;
@property (nonatomic, copy) NSString *sell;
@property (nonatomic, copy) NSString *last;
@property (nonatomic, copy) NSString *vol;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *open;
@property (nonatomic, copy) NSString *twentyFour_open;

@end


NS_ASSUME_NONNULL_END
