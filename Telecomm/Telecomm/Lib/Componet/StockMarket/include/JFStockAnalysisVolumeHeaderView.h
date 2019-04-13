//
//  JFStockAnalysisVolumeHeaderView.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFSortLabel.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^SortCallBack)(void);
@interface JFStockAnalysisVolumeHeaderView : UITableViewHeaderFooterView

@property(nonatomic,copy)  SortOptionCallBack sortCallBack;

@property(nonatomic,assign)              BOOL sortEnable;

@end

NS_ASSUME_NONNULL_END
