//
//  JFStockAllCoinModel.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/11/20.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class JFStockAllCoinChildModel;

@interface JFStockAllCoinModel : NSObject

///列表数据
@property (nonatomic, strong) NSArray <JFStockAllCoinChildModel *>*tickers;

@end


@interface JFStockAllCoinChildModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *high;
@property (nonatomic, copy) NSString *low;
@property (nonatomic, copy) NSString *buy;
@property (nonatomic, copy) NSString *sell;
@property (nonatomic, copy) NSString *last;
@property (nonatomic, copy) NSString *vol;
@property (nonatomic, copy) NSString *open;
@property (nonatomic, copy) NSString *time;

@end

NS_ASSUME_NONNULL_END
