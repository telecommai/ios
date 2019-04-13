//
//  JFStockRiseFallMenuCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 涨跌幅 包含collectionview Cell

#import <UIKit/UIKit.h>
#import "JFStockRiseFallModel.h"
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockRiseFallMenuCell : UITableViewCell

///点击colletioncell
@property (nonatomic, copy) IdBlock clickColletionCellBlock;

@property (nonatomic, strong) JFStockRiseFallModel *riseFallModel;

@end

NS_ASSUME_NONNULL_END
