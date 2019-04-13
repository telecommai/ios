//
//  JFStockAnalysisListAmountCell.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFStockAnalysisListAmountModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisListAmountCell : UITableViewCell

@property(nonatomic,strong,class) UIColor *leftPercentColor;
@property(nonatomic,strong,class) UIColor *leftContentColor;
@property(nonatomic,strong,class) UIColor *rightPercentColor;
@property(nonatomic,strong,class) UIColor *rightContentColor;

@property(nonatomic,strong) JFStockAnalysisListAmountModel *leftModel;
@property(nonatomic,strong) JFStockAnalysisListAmountModel *rightModel;

@property(nonatomic,assign) double currencyRate;
@property(nonatomic,assign) double oriRate;

@end

NS_ASSUME_NONNULL_END
