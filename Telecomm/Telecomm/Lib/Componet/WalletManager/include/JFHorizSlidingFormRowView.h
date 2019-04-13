//
//  JFHorizSlidingFormRowView.h
//  WalletManager
//
//  Created by YRH on 2018/12/11.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 表格 行view
#import <UIKit/UIKit.h>

@protocol JFHorizSlidingFormRowViewDelegate <NSObject>

/// 每一个单元格的大小
- (CGSize)formCollectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath;

/// 滑动代理
- (void)rowScrollViewDidScroll:(UIScrollView *)scrollView;

@end

@interface JFHorizSlidingFormRowView : UIView

@property (nonatomic, weak) id<JFHorizSlidingFormRowViewDelegate> delegate;

@property (nonatomic, copy) NSString *typeStr;

@property (nonatomic, strong) NSArray <NSString *> *itemArray;

@property (nonatomic, strong) UIView *titleLabelBackView;

@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, strong) UICollectionView *collectionView;

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, strong) UIColor *textColor;

@property (nonatomic, strong) UIFont *font;


@end
