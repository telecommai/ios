//
//  StockMarketConfigModel.h
//  StockMarket
//
//  Created by 王胜利 on 2018/11/20.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StockMarketConfigCoinModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *coinNameOther;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *symbol;


@property (nonatomic, strong) NSString * indexMarketId;
@property (nonatomic, strong) NSString * indexSites;
@property (nonatomic, strong) NSString * webSite;


@property (nonatomic, strong) NSString * icoAmount;
@property (nonatomic, strong) NSString * icoCost;
@property (nonatomic, strong) NSString * icoTime;
@property (nonatomic, strong) NSString * type;
@property (nonatomic, strong) NSString * whitePaper;

@property (nonatomic, strong) NSString * recommendSite;

@end

@interface StockMarketConfigMarketModel : NSObject

@property (nonatomic, strong) NSString * site;
@property (nonatomic, strong) NSString * coin;
@property (nonatomic, strong) NSString * currency;
@property (nonatomic, assign) NSInteger cs;
@property (nonatomic, assign) NSInteger dc;
@property (nonatomic, assign) NSInteger ticker;
@property (nonatomic, strong) NSString * type;
@property (nonatomic, strong) NSString * future;
@property (nonatomic, strong) NSString * fee;

@end

@interface StockMarketConfigSiteModel : NSObject

@property (nonatomic, copy) NSString *fee;
@property (nonatomic, copy) NSString *logo;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;

@end

NS_ASSUME_NONNULL_END
