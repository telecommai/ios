//
//  IUIComponent.h
//  IOSESPBase
//
//  Created by wangzhanfeng on 14-2-17.
//  Copyright (c) 2014年 JavorFeng. All rights reserved.
//


#import "IComponent.h"
#import <UIKit/UIKit.h>
#import "CompsConfUtil.h"

@protocol IUIComponent <IComponent>

@property (nonatomic, copy, getter = getX) NSString *x;                           //** 横坐标 **//
@property (nonatomic, copy, getter = getY) NSString *y;                           //** 纵坐标 **//
@property (nonatomic, copy, getter = getWidth) NSString *width;                   //** 宽度 **//
@property (nonatomic, copy, getter = getHeight) NSString *height;                 //** 高度 **//
//@property (nonatomic, retain, getter = getPercentX) NSNumber *percentX;             //** 横坐标百分比 **//
//@property (nonatomic, retain, getter = getPercentY) NSNumber *percentY;             //** 纵坐标百分比 **//
@property (nonatomic, copy, getter = getPercentWidth) NSString * percentWidth;    //** 宽度百分比 **//
@property (nonatomic, copy, getter = getPercentHeight) NSString * percentHeight;  //** 高度百分比 **//
@property (nonatomic, copy, getter = getEnabled) NSString *enabled;
@property (nonatomic, copy, getter = getVisible) NSString *visible;
//@protocol (nonatomic, copy, getter = getGap) NSString *gap;
@property (nonatomic, copy, getter = getPaddingLeft) NSString *paddingLeft;
@property (nonatomic, copy, getter = getPaddingRight) NSString *paddingRight;
@property (nonatomic, copy, getter = getPaddingTop) NSString *paddingTop;
@property (nonatomic, copy, getter = getPaddingBottom) NSString *paddingBottom;

/** 返回跟参数(aUID)相同的subview */
-(UIView *)viewWithUID:(NSString *)aUID;

/** setter/getter */
-(void)setX:(NSString *)aX;
-(NSString *)getX;

-(void)setY:(NSString *)aY;
-(NSString *)getY;

-(void)setWidth:(NSString *)aWidth;
-(NSString *)getWidth;

-(void)setHeight:(NSString *)aHeight;
-(NSString *)getHeight;

-(void)setPercentWidth:(NSString *)aPercentWidth;
-(NSString *)getPercentWidth;

-(void)setPercentHeight:(NSString *)aPercentHeight;
-(NSString *)getPercentHeight;

-(void)setEnabled:(NSString *)aEnabled;
-(NSString *)getEnabled;

-(void)setVisible:(NSString *)aVisible;
-(NSString *)getVisible;

-(void)setPaddingLeft:(NSString *)aPaddingLeft;
-(NSString *)getPaddingLeft;

-(void)setPaddingRight:(NSString *)aPaddingRight;
-(NSString *)getPaddingRight;

-(void)setPaddingTop:(NSString *)aPaddingTop;
-(NSString *)getPaddingTop;

-(void)setPaddingBottom:(NSString *)aPaddingBottom;
-(NSString *)getPaddingBottom;
@end
