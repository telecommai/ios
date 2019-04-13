//
//  JFToolBarLineStyleChildView.h
//  StockMarket
//
//  Created by YRH on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFLineStyleCell.h"

@protocol JFToolBarLineStyleChildViewDelegate <NSObject>

- (void)touchToolBarLineView;
- (void)didSelectedCellItem:(JFSegmentBarItemChildModel *)model title:(NSString *)title superModel:(JFStockSegmentBarItemModel *)superModel cellIndex:(NSInteger)cellIndex;

@end

NS_ASSUME_NONNULL_BEGIN

@interface JFToolBarLineStyleChildView : UIView

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSArray *dataArray;
@property (nonatomic, strong) JFStockSegmentBarItemModel *model;
@property (nonatomic, weak) id<JFToolBarLineStyleChildViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
