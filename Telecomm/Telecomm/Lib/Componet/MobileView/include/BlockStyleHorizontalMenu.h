//
//  EFTagButton.m
//  ESPMobileView
//
//  Created by 虎 谢 on 2018/1/30.
//  Copyright © 2017年 Pansoft. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "StubObject.h"

@class BlockStyleHorizontalMenu;

@protocol BlockStyleHorizontalMenuDelegate <NSObject>

@required
-(void)blockStyleHorizontalMenu:(BlockStyleHorizontalMenu *)menu didClickItem:(StubObject *)item position:(int)position;

@end

@interface BlockStyleHorizontalMenu : UIView

/// 初始化titleView
-(instancetype)initWithFrame:(CGRect)frame items:(NSMutableArray *)items;
/// 默认字体颜色
@property(nonatomic, strong) UIColor *titleColor;
/// 选中字体颜色
@property(nonatomic, strong) UIColor *selectedTitleColor;
/// 字体大小
@property(nonatomic, assign) CGFloat fontSize;
/// 选中字体大小
@property(nonatomic, assign) CGFloat selectFontSize;

///delegate
@property(nonatomic, weak) id<BlockStyleHorizontalMenuDelegate> delegate;

/// 创建组件
-(void)creationComplete;
/// 重置items
-(void)resetViewItems:(NSMutableArray *)items;
/// 添加条目
-(void)addItemForArray:(StubObject *)item;

/// 设置主题
- (void)setThemeWithStub:(StubObject*)stub;

-(void)changeButtonTitle:(NSString *)title index:(NSInteger)index;


/**
 根据index滑动标题栏(注：此方法不能与scrollWithScrollScale同时执行，功能重复)
 
 @param index 需要滑动到的标题的index
 */
- (void)selectMenuAtIndex:(int)index;

/**
 根据滑动比例滑动标题栏(注：此方法不能与scrollWithIndex同时执行，功能重复)
 
 @param scrollScale pageView滑动X偏移的比例（例如： pageView滑动了一屏半 即scrollScale = 1.5）
 */
- (void)scrollWithScrollScale:(CGFloat)scrollScale;

///选中的字体大小(新样式弃用)
@property(nonatomic, assign) CGFloat selectedFontSize;
///是否显示标题指示条(新样式弃用)
@property(nonatomic, assign) BOOL isShowTitleBar;

@end

