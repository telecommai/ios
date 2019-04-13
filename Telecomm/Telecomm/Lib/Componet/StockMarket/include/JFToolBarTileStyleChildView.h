//
//  JFChildToolBatItemTileStyle.h
//  StockMarket
//
//  Created by YRH on 2018/11/13.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

// 平铺样式的 子视图
#import <UIKit/UIKit.h>
#import "JFStockSegmentBarItem.h"

@protocol JFToolBatTileStyleChildViewDelegate <NSObject>

- (void)didSelectItemAtIndexPath:(NSIndexPath *)indexPath collection:(UICollectionView *)collectionView titleString:(NSString *)titleString parentModel:(JFStockSegmentBarItemModel *)parentModel itemModel:(JFSegmentBarItemChildModel *)itemModel;

- (void)didTouchView;

@end

NS_ASSUME_NONNULL_BEGIN

@interface JFToolBarTileStyleChildView : UIView

@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) JFStockSegmentBarItemModel *model;
@property (nonatomic, strong) NSArray *dataArray;
@property (nonatomic, weak) id<JFToolBatTileStyleChildViewDelegate> delegate;

@property (nonatomic, assign) CGFloat contentHieght;

@end

NS_ASSUME_NONNULL_END
