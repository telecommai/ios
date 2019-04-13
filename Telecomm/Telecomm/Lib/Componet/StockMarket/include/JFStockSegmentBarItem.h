//
//  JFStockToolBarItem.h
//  WalletManager
//
//  Created by YRH on 2018/11/10.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJExtension/MJExtension.h"

NS_ASSUME_NONNULL_BEGIN

@class JFStockSegmentBarItemModel;

@interface JFStockSegmentBarItem : UIControl

@property (nonatomic, strong) JFStockSegmentBarItemModel *itemModel;
@property (nonatomic, readonly, assign) BOOL isShowNextLevelView;

- (CGFloat)labelWidth;

- (void)showNextLevelView;
- (void)hiddenNextLevelView;
//- (void)updateArrowLayout;

@end

@interface JFStockSegmentBarItemModel : NSObject

/// 显示的字符
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, assign) BOOL needSince;
@property (nonatomic, assign) BOOL xAxisShowHour;
/// 是否画三角
@property (nonatomic, assign) BOOL drawArrow;
/// 下一级的样式
@property (nonatomic, assign) NSInteger styleIndex;
/// 下一级数据
@property (nonatomic, strong) NSArray *nextLeve;

@end

@interface JFSegmentBarItemChildModel : NSObject

// 是否选中
@property (nonatomic, assign) BOOL isSelected;

// 显示的字符
@property (nonatomic, copy) NSString *name;
// 代表的代码编号
@property (nonatomic, copy) NSString *code;
@property (nonatomic, assign) BOOL needSince;
@property (nonatomic, assign) BOOL xAxisShowHour;

// 副标题数组
@property (nonatomic, strong) NSArray *subtitles;
// 选中的副标题的下标
@property (nonatomic, assign) NSInteger selectedSubtitleIndex;

@end

NS_ASSUME_NONNULL_END
