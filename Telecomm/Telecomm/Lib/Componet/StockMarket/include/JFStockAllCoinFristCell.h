//
//  JFStockAllCoinFristCell.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/12/4.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFStockAllCoinModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAllCoinFristCell : UITableViewCell

@property (nonatomic, strong) JFStockAllCoinChildModel *allCoinChildModel;

///上一次金额,用于变色
@property (nonatomic, copy) NSString *lastValue;

@end

NS_ASSUME_NONNULL_END
