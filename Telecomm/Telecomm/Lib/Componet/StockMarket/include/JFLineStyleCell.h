//
//  JFLineStyleCell.h
//  StockMarket
//
//  Created by YRH on 2018/11/14.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFStockSegmentBarItem.h"

@class JFLineStyleCell;
@protocol JFLineStyleCelldelegate <NSObject>

- (void)didTouchButton:(UIButton *)sender cell:(JFLineStyleCell *)cell index:(NSInteger)index model:(JFSegmentBarItemChildModel *)model title:(NSString *)title;

@end

NS_ASSUME_NONNULL_BEGIN

@interface JFLineStyleCell : UITableViewCell

@property (nonatomic, strong) JFSegmentBarItemChildModel *model;
@property (nonatomic, weak) id<JFLineStyleCelldelegate> delegate;

- (void)hiddenBottomLive;
- (void)showBottomLive;

@end

NS_ASSUME_NONNULL_END
