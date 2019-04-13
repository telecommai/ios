//
//  JFStockAnalysisCommissionsCell.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFStockAnalysisCommissionsModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisCommissionsCell : UITableViewCell

@property(nonatomic,strong,class) UIColor *leftPercentColor;
@property(nonatomic,strong,class) UIColor *leftContentColor;
@property(nonatomic,strong,class) UIColor *rightPercentColor;
@property(nonatomic,strong,class) UIColor *rightContentColor;
@property(nonatomic,strong,class) UIColor *leftAnimationColor;
@property(nonatomic,strong,class) UIColor *rightAnimationColor;

@property(nonatomic,strong) JFStockAnalysisCommissionsModel *leftModel;
@property(nonatomic,strong) JFStockAnalysisCommissionsModel *rightModel;

@property(nonatomic,assign) float baseProportion;
@property(nonatomic,assign) double currencyRate;
@property(nonatomic,assign) double oriRate;



@end

NS_ASSUME_NONNULL_END
