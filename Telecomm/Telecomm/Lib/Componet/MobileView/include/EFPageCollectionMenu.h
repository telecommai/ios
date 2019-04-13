//
//  EFPageCollectionMenu.h
//  MyCollectionView
//
//  Created by xinqing on 15/9/14.
//  Copyright (c) 2015年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFPageCollectionMenuCell.h"
#import "StubObject.h"
#import "JFMessageManager.h"
@class EFPageCollectionMenu;

@protocol EFPageCollectionMenuDelegate <NSObject>

-(void)pageCollectionMenu:(EFPageCollectionMenu *)pageCollectionMenu didSelectItemAtIndex:(NSInteger)index;

@end


@interface EFPageCollectionMenu : UIView <UICollectionViewDataSource,UICollectionViewDelegate,UIScrollViewDelegate,JFMessageManagerDelegate>
///!!!数据 重写set方法
@property(nonatomic,strong) NSMutableArray *items;
///显示几列
@property(nonatomic,assign) int columnCount;
///显示几行
@property(nonatomic,assign) int rowCount;

@property(nonatomic, strong) UICollectionView *collectionView;


//@property(nonatomic,assign) CGFloat layoutWidth;
//@property(nonatomic,assign) CGFloat layoutHeight;
//@property(nonatomic,assign) UICollectionViewScrollDirection scrollDirection;

///delegate
@property(nonatomic,weak) id<EFPageCollectionMenuDelegate> pageCollectionMenuDelegate;

///cell图片宽度
@property(nonatomic,assign) CGFloat cellImageWidth;
///cell图片高度
@property(nonatomic,assign) CGFloat cellImageHeight;
///cell标题高度
@property(nonatomic,assign) CGFloat cellTitleHeight;
///cell标题字体大小
@property(nonatomic,assign) CGFloat cellTitleFontSize;
///cell标题字体颜色
@property(nonatomic,strong) UIColor *cellTitleTextColor;
///cell背景颜色
@property(nonatomic,strong) UIColor *cellBackgroudColor;
///pageControl 指示器颜色（未选中时）
@property(nonatomic,strong) UIColor *pageIndicatorTintColor;
///pageControl 指示器颜色（选中时）
@property(nonatomic,strong) UIColor *currentPageIndicatorTintColor;


///1 initWithFrame
-(instancetype)initWithFrame:(CGRect)frame datas:(NSMutableArray *) stubObjects;


///2 属性赋值
///3 创建组件
-(void)creationComplete;


///清除右上角所有的指示
-(void)clearAllIndicate;
///清除右上角所有的指示
-(void)clearIndicateAtIndex:(NSInteger)index;

///刷新
-(void)refresh;

///重新加载（数据发生变化时调用）
-(void)reloadData;
@end
