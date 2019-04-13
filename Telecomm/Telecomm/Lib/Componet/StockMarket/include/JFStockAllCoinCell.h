//
//  JFStockAllCoinCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 所有币种显示 cell

#import <UIKit/UIKit.h>
#import "JFStockAllCoinModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAllCoinCell : UITableViewCell

@property (nonatomic, strong) JFStockAllCoinChildModel *allCoinChildModel;

///上一次金额,用于变色
@property (nonatomic, copy) NSString *lastValue;
///是否显示币种类型
@property (nonatomic, assign) BOOL isShowCoinType;

@end

NS_ASSUME_NONNULL_END
