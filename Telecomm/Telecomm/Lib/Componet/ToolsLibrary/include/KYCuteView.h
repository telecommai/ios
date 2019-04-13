//
//  KYCuteView.h
//  KYCuteViewDemo
//
//  Created by Kitten Yang on 2/26/15.
//  Copyright (c) 2015 Kitten Yang. All rights reserved.
//


#import <UIKit/UIKit.h>


@interface KYCuteView : UIView

/// 父视图
@property (nonatomic,strong)UIView *containerView;

/// 气泡上显示数字的label
@property (nonatomic,strong)UILabel *bubbleLabel;

/// 气泡的直径
@property (nonatomic,assign)CGFloat bubbleWidth;

/// 气泡粘性系数，越大可以拉得越长
@property (nonatomic,assign)CGFloat viscosity;

/// 气泡颜色
@property (nonatomic,strong)UIColor *bubbleColor;

/// 需要隐藏气泡时候可以使用这个属性：self.frontView.hidden = YES;
@property (nonatomic,strong) UIView *frontView;

/// 移除动画
@property (nonatomic, strong) NSMutableArray * animationImages;

/// 拖拽结束的事件
@property (nonatomic,copy) void(^dragBubbleCallBack)(void) ;

/// 初始化
-(id)initWithPoint:(CGPoint)point superView:(UIView *)view;

-(void)setUp;

/// 显示cuteView
-(void)show;

/// 隐藏cuteView
-(void)hide;

/// 移除cuteView
-(void)remove;

@end
