//
//  JFStockExchangeCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 交易所 cell

#import <UIKit/UIKit.h>
#import "JFStockExchangeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockExchangeCell : UITableViewCell

@property (nonatomic, strong) JFStockExchangeModel *exchangeModel;

//排名
@property (nonatomic, assign) NSInteger ranking;

@end

NS_ASSUME_NONNULL_END
