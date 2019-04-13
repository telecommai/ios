//
//  EFMenuCollectionView.h
//  MyCollectionView
//
//  Created by xinqing on 15/9/14.
//  Copyright (c) 2015年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFMenuCollectionCell.h"
#import "StubObject.h"
///右上角指示器显得的数字的key
#define KEY_INDICATE_COUNT @"count"
@class EFMenuCollectionView;

@protocol EFMenuCollectionViewDelegate <NSObject>

-(void)menuCollectionView:(EFMenuCollectionView *)menuCollectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath;

@end


@interface EFMenuCollectionView : UICollectionView <UICollectionViewDataSource,UICollectionViewDelegate>
///!!!数据 重写set方法
@property(nonatomic,strong) NSMutableArray *stubObjects;
///显示几列
@property(nonatomic,assign) int columnCount;

@property(nonatomic,assign) CGFloat layoutWidth;
@property(nonatomic,assign) CGFloat layoutHeight;
@property(nonatomic,assign) UICollectionViewScrollDirection scrollDirection;

///delegate
@property(nonatomic,weak) id<EFMenuCollectionViewDelegate> menuCollectionViewDelegate;

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

///1 initWithFrame
-(instancetype)initWithFrame:(CGRect)frame datas:(NSMutableArray *) stubObjects;


///2 属性赋值
///3 创建组件
-(void)creationComplete;


///清除右上角所有的指示
-(void)clearAllIndicate;
///清除右上角所有的指示
-(void)clearIndicateAtIndex:(NSInteger)index;
@end
