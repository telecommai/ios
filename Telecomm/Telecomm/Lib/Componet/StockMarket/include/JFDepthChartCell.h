//
//  JFDepthChartCell.h
//  StockMarket
//
//  Created by YRH on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFStockAnalysisDepthModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFDepthChartCell : UITableViewCell

@property (nonatomic, strong) JFStockAnalysisDepthDataModel *depthDataModel;

@end

NS_ASSUME_NONNULL_END
