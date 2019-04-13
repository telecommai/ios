//
//  JFStockTargetToolView.h
//  StockMarket
//
//  Created by YRH on 2018/11/13.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

/// 股市动态图表操作工具栏 指标操作部分的工具view
#import <UIKit/UIKit.h>
#import "JFStockSegmentBarItem.h"
#import "JFToolBarTileStyleChildView.h"
#import "JFToolBarLineStyleChildView.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^TouchBarItemCompletion)(NSInteger index, JFStockSegmentBarItemModel *dataModel, JFStockSegmentBarItem *barItem);

typedef void(^TouchToolBarTileStyleChildView)(NSInteger index, NSString *titleString, JFStockSegmentBarItemModel *barItemModel, JFSegmentBarItemChildModel *childModel);
typedef void(^TouchToolBarLineStyleChildView)(NSInteger selectedRow, NSString *titleString, JFStockSegmentBarItemModel *barItemModel, JFSegmentBarItemChildModel *childModel);

@interface JFStockSegmentView : UIView

- (instancetype)initWithFrame:(CGRect)frame dataArray:(NSMutableArray <JFStockSegmentBarItemModel *>*)dataArray;

- (void)addBarItemChildView;

/// 重新排版视图
- (void)recompositionSegmentViewWithNewDataArray:(NSMutableArray <JFStockSegmentBarItemModel *>*)newDataArray;

/// 点击barItem
@property (nonatomic, copy) TouchBarItemCompletion touchBarItemCompletion;
/// 点击barItem的子item（collection样式的）
@property (nonatomic, copy) TouchToolBarTileStyleChildView touchBarTileChildView;
/// 点击barItem的子item（tableview样式的）
@property (nonatomic, copy) TouchToolBarLineStyleChildView touchBarLineChildView;

/// 当前数据源
@property (nonatomic, strong) NSMutableArray *currentDataArray;

@property (nonatomic, assign) NSInteger defaultSelectedIndex;
@property (nonatomic, assign) BOOL hiddenBottomLine;

@end

NS_ASSUME_NONNULL_END
