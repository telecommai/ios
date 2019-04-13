//
//  JFHorizSlidingFormView.h
//  WalletManager
//
//  Created by YRH on 2018/12/11.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 横向滑动的表格
#import <UIKit/UIKit.h>

@protocol JFHorizSlidingFormViewDelegate <NSObject>

/// 每列item的size
- (CGFloat)formRowItemWidthCollectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout widthForItemAtColumnIndexPath:(NSIndexPath *)columnIndexPath;

@end

@interface JFHorizSlidingFormView : UIView

@property (nonatomic, weak) id<JFHorizSlidingFormViewDelegate> delegate;

/// 标题栏高度
@property (nonatomic, assign) CGFloat titleHeight;
/// 标题栏名称内容
@property (nonatomic, copy) NSString *titleContent;
/// 标题栏名称背景色
@property (nonatomic, strong) UIColor *titleBackgroundColor;
/// 标题栏Row背景色
@property (nonatomic, strong) UIColor *titleRowBackgroundColor;
/// 标题栏名称文字大小
@property (nonatomic, strong) UIFont *titleTextFont;
/// 标题栏Row文字大小
@property (nonatomic, strong) UIFont *titleRowTextFont;
/// 标题栏名称文字颜色
@property (nonatomic, strong) UIColor *titleTextColor;
/// 标题栏Row文字颜色
@property (nonatomic, strong) UIColor *titleRowTextColor;

/// 内容每行高度
@property (nonatomic, assign) CGFloat contentRowHeight;
/// 内容背景色
@property (nonatomic, strong) UIColor *contentBackgroundColor;
/// 内容文字颜色
@property (nonatomic, strong) UIColor *contentTextColor;
/// 内容文字大小
@property (nonatomic, strong) UIFont *contentTextFont;

/// 赋值
- (void)setFormTitleData:(NSArray <NSString *>*)titleArray contentData:(NSArray <NSArray <NSString *>*>*)contentDataArray columnNum:(NSInteger)columnNum;

@end
