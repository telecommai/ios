//
//  EShopChooseAddressTopView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/11.
//  Copyright © 2018年 wsl. All rights reserved.
//

/* 地理位置顶部view */

#import <UIKit/UIKit.h>

@class EShopChooseAddressTopView;
@class ContentInfoModel;

@protocol EShopChooseAddressTopViewDelegate <NSObject>

/**
 点击titleview

 @param sender sender
 @param view 此视图
 @param selectIndex 选中的下标
 */
- (void)touchTitleViewAction:(UIButton *)sender view:(EShopChooseAddressTopView *)view selectIndex:(NSInteger)selectIndex;

@end

@interface EShopChooseAddressTopView : UIView

/// 文字颜色
@property (nonatomic, strong) UIColor *tintColor;
/// 线条颜色
@property (nonatomic, strong) UIColor *lineColor;
/// 字体大小
@property (nonatomic, strong) UIFont *titleFont;
///// 选中的下标
//@property (nonatomic, assign) NSInteger selectIndex;

@property (nonatomic, weak) id<EShopChooseAddressTopViewDelegate> delegate;

/// 数据源
@property (nonatomic, strong) NSMutableArray <ContentInfoModel *>*titleDataArray;

/**
 创建视图

 @param index 从第几个位置开始创建
 */
- (void)createViewWithIndex:(NSInteger)index;

/**
 刷新数据
 */
- (void)reloadTitleView;

/**
选中标题

 @param index 下标
 */
- (void)selectTitleWithIndex:(NSInteger)index;

@end

/// 标题view内容信息model
@interface ContentInfoModel : NSObject

/// 标题
@property (nonatomic, copy) NSString *title;
/// 颜色
@property (nonatomic, strong) UIColor *titleColor;

@end
