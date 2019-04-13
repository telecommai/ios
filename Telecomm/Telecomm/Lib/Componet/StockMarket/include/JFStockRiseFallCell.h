//
//  JFStockRiseFallCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 涨跌幅 Cell

#import <UIKit/UIKit.h>
#import "JFStockRiseFallModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockRiseFallCell : UITableViewCell

@property (nonatomic, strong) JFStockRiseFallChildModel *riseFallChildModel;

@end

NS_ASSUME_NONNULL_END
