//
//  JFStockAnalysisVolumeCell.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFStockAnalysisVolumeModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface JFStockAnalysisVolumeCell : UITableViewCell

@property(nonatomic,strong,class) UIColor *timeColor;
@property(nonatomic,strong,class) UIColor *upPriceColor;
@property(nonatomic,strong,class) UIColor *downPriceColor;
@property(nonatomic,strong,class) UIColor *countColor;
@property(nonatomic,strong,class) UIColor *upColor;
@property(nonatomic,strong,class) UIColor *downColor;

@property(nonatomic,assign) float  baseProportion;
@property(nonatomic,assign) double currencyRate;
@property(nonatomic,assign) double oriRate;

@property(nonatomic,strong) JFStockAnalysisVolumeModel *volumeModel;

@end

NS_ASSUME_NONNULL_END
