//
//  EFSelectCollectionMenu.h
//  MyCollectionView
//
//  Created by xinqing on 15/9/14.
//  Copyright (c) 2015年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import <ToolsLibraryFramework/ToolsLibraryFramework.h>
#import "EFSelectCollectionMenuCell.h"
#import "StubObject.h"
#import "PlistUtil.h"


@class EFSelectCollectionMenu;

@protocol EFSelectCollectionMenuDelegate <NSObject>

-(void)selectCollectionMenu:(EFSelectCollectionMenu *)selectCollectionMenu didSelectItemAtIndex:(NSInteger)index;

@end


@interface EFSelectCollectionMenu : UIView <UICollectionViewDataSource,UICollectionViewDelegate,UIScrollViewDelegate>
///全选复选框
@property(nullable, nonatomic,readonly,strong) SSCheckBoxView *allSelectCheckBox;
///保存按钮
@property(nullable, nonatomic,readonly,strong) UIButton *saveButton;
///!!!数据 重写set方法
@property(nullable,nonatomic,strong) NSMutableArray *items;
///显示几列
@property(nonatomic,assign) int columnCount;

///delegate
@property(nullable,nonatomic,weak) id<EFSelectCollectionMenuDelegate> selectCollectionMenuDelegate;

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
///1 init
-(instancetype)initWithData:(NSMutableArray *)stubObjects;
-(instancetype)initWithFrame:(CGRect)frame datas:(NSMutableArray *) stubObjects;



///2 属性赋值
///3 创建组件
-(void)creationComplete;

/////选择所有
//-(void)selectAll;
/////取消所有选择
//-(void)deselectAll;
///重新加载（数据发生变化时调用）
-(void)reloadData;
@end
