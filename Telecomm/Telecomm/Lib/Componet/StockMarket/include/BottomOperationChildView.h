//
//  BottomOperationChildView.h
//  StockMarket
//
//  Created by YRH on 2018/11/19.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BottomChildCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface BottomOperationChildView : UIView

@property (nonatomic, strong) NSArray *dataArray;

@property (nonatomic, copy) void(^didSelectRow)(NSIndexPath *indexPath, BarChildModel *model);
//@property (nonatomic, copy) void(^touchBlankView)(void);

- (void)changeTableViewFrameWithX:(CGFloat)x width:(CGFloat)width;

@end

NS_ASSUME_NONNULL_END
