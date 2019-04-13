//
//  JFStockAnalysisCommissionsHeaderView.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFSortLabel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisCommissionsHeaderView : UITableViewHeaderFooterView

@property(nonatomic,copy) SortOptionCallBack leftSort;
@property(nonatomic,copy) SortOptionCallBack rightSort;

@end

NS_ASSUME_NONNULL_END
