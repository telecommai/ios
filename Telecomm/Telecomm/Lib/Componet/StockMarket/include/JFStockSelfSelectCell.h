//
//  JFStockSelfSelectCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/10.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 自选、市值 cell

#import <UIKit/UIKit.h>
#import "JFStockMarketHomeModel.h"
#import "JFStockMarketValueModel.h"
#import "JFExchangeHomeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockSelfSelectCell : UITableViewCell

///自选model
@property (nonatomic, strong) JFStockSelfSelectModel *selfSelectModel;
///市值model
@property (nonatomic, strong) JFStockMarketValueModel *marketValueModel;
///排名
@property (nonatomic, assign) NSInteger index;
///上一次金额,用于变色
@property (nonatomic, copy) NSString *lastValue;

///交易所model
@property (nonatomic, strong) JFExchangeChildModel *exchangeChildModel;

@end

NS_ASSUME_NONNULL_END
