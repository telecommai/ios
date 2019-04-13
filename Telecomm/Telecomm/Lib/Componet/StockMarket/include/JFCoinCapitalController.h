//
//  JFCoinCapitalController.h
//  StockMarket
//
//  Created by 赵洪壮 on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  资金详情

#import <UIKit/UIKit.h>
#import "DetailChildBaseController.h"
#import "FinanceDetailViewConst.h"
#import "StockMarketConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFCoinCapitalController : DetailChildBaseController

/// 币名称
@property (nonatomic, copy) NSString *coinName;
/// 站点名字
@property (nonatomic, copy) NSString *coinSite;
/// 汇率CoinShowType
@property (nonatomic, assign) CoinShowType coinShowType;
@property (nonatomic, strong) StockMarketConfigMarketModel *model;

/// 刷新页面数据
- (void)refreshDataWithCoinShowType:(CoinShowType)type;

@end

NS_ASSUME_NONNULL_END
