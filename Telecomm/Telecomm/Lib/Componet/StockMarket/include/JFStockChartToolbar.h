//
//  JFStockChartToolbar.h
//  WalletManager
//
//  Created by YRH on 2018/11/9.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 股市动态图表操作工具栏

#import <UIKit/UIKit.h>
#import "JFStockSegmentView.h"
#import "FinanceDetailViewConst.h"
#import "MJExtension/MJExtension.h"

@protocol JFStockChartToolbarDelegate <NSObject>

@optional
/// 改变k线数据
- (void)changeKlineData:(NSString *)code needSince:(BOOL)needSince xAxisShowHour:(BOOL)xAxisShowHour;
/// 横竖屏
- (void)somehowScreen;
/// 改变 指标
- (void)changeKlineTarget:(NSString *)title index:(NSInteger)index;

@end

@interface JFStockChartToolbar : UIView

@property (nonatomic, weak) id<JFStockChartToolbarDelegate> delegate;

@property (nonatomic, strong) JFStockSegmentBarItemModel *defaultSelectItemModel;

/// k线图改变了指标线
- (void)changedKlineIndex:(KLineIndexType)indexType;
/// 隐藏全屏按钮,调整布局
- (void)hiddenFullScreenButtonAdjustLayout;
/// 隐藏 指标 选项
- (void)hiddenSegmentIndexOption;

@end

