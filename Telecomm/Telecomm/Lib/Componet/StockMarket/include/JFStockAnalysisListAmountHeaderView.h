//
//  JFStockAnalysisListAmountHeaderView.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFStockAnalysisListAmountHeaderView : UITableViewHeaderFooterView

@property(nonatomic,strong,class) UIColor *leftAnimationColor;
@property(nonatomic,strong,class) UIColor *rightAnimationColor;

@property(nonatomic,assign) CGFloat asksProportion;

@end

NS_ASSUME_NONNULL_END
