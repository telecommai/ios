//
//  EFDynamicSegmentView.h
//  ESPChatComps
//
//  Created by Sunjimin on 16/12/13.
//  Copyright © 2016年 Pansoft. All rights reserved.
//
//  QQ样式的title菜单

#import <UIKit/UIKit.h>
#import "StubObject.h"
#import "TagView.h"
@class EFDynamicSegmentView;

@protocol EFSegmentViewDelegate <NSObject>

/**
 选中哪个item

 @param segment segment对象
 @param index 索引
 @param stubObject stu对象
 */
- (void)segmentView:(EFDynamicSegmentView *)segment
      selectedIndex:(NSInteger)index
         stubObject:(StubObject *)stubObject;


/**
 --

 @param index 索引
 @param stubObject stu对象
 @param segmentFrame segmentfrrame
 @param segmentViewFrame --
 */
- (void)segmentViewMoreMenuDidSelectWithIndex:(NSInteger)index
                                   stubobject:(StubObject *)stubObject
                                 segmentFrame:(CGRect)segmentFrame
                             segmentViewFrame:(CGRect)segmentViewFrame;

@end

@interface EFDynamicSegmentView : UIView

/// 设置风格颜色 默认蓝色风格
@property (nonatomic, strong) UIColor *tinColor;

/// 委托
@property (nonatomic) id<EFSegmentViewDelegate>delegate;

/**
 初始化

 @param frame frame
 @param stubObjectArr stu数组
 @param isBorderExist 边线是否存在
 @param norColor 普通颜色
 @param selColor 选中颜色
 @return 实例化f对象
 */
- (id)initWithFrame:(CGRect)frame
      stubObjectArr:(NSArray *)stubObjectArr
      isBorderExist:(BOOL)isBorderExist
           norColor:(UIColor *)norColor
           selColor:(UIColor *)selColor;

/**
选中item
 
@param index 序号
 */
-(void)selectItemAtIndex:(int)index;


/**
 改变item标题

 @param title 标题
 @param index 序号
 */
-(void)changeSegmentTitle:(NSString *)title
                    index:(NSInteger)index;

@end
