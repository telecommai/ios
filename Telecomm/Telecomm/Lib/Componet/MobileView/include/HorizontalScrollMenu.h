//
//  HorizontalScrollMenu.h
//  MenuTest
//
//  Created by xinqing on 15/9/10.
//  Copyright (c) 2015年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

//@class StubObject;

#import "StubObject.h"

@class HorizontalScrollMenu;

@protocol HorizontalScrollMenuDelegate <NSObject>

@required
-(void)menu:(HorizontalScrollMenu *)menu didClickItem:(StubObject *)item position:(int)position;

@end

@interface HorizontalScrollMenu : UIView

///背景色
@property(nonatomic, strong) UIColor *backgroundColor;
///默认字体颜色
@property(nonatomic, strong) UIColor *titleColor;
///默认的字体大小
@property(nonatomic, assign) CGFloat fontSize;
///选中字体颜色
@property(nonatomic, strong) UIColor *selectedTitleColor;
///选中的字体大小
@property(nonatomic, assign) CGFloat selectedFontSize;

@property(nonatomic, weak) NSMutableArray *items;
///delegate
@property(nonatomic, weak) id<HorizontalScrollMenuDelegate> delegate;
//当item不能布满整个HorizontalScrollMenu时，是否居中显示
@property(nonatomic, assign) BOOL isCenterShowItem;
///是否显示标题指示条
@property(nonatomic, assign) BOOL isShowTitleBar;


-(instancetype)initWithFrame:(CGRect)frame items:(NSMutableArray *)items;

///创建组件
-(void)creationComplete;
//-(void) createView;
-(void)resetViewItems:(NSMutableArray *)items;

///选中menu
-(void)selectMenuAtIndex:(int)index;

-(void)addItemForArray:(StubObject *)item;

@end
