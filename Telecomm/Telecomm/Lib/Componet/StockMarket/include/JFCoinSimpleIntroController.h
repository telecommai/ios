//
//  JFCoinSimpleIntroController.h
//  StockMarket
//
//  Created by 王胜利 on 2018/11/13.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import "DetailChildBaseController.h"
#import "FinanceDetailViewConst.h"
#import "StockMarketConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFCoinSimpleIntroController : DetailChildBaseController

/// 币名称
@property (nonatomic, copy) NSString *coinName;
/// 汇率CoinShowType
@property (nonatomic, assign) CoinShowType coinShowType;
@property (nonatomic, strong) StockMarketConfigMarketModel *model;

/// 刷新页面数据
- (void)refreshDataWithCoinShowType:(CoinShowType)type;

@end

NS_ASSUME_NONNULL_END
