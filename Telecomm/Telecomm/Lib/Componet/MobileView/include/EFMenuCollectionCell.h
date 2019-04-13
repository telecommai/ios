//
//  EFMenuCollectionCell.h
//  ESPTablet
//
//  Created by Javor on 14-8-12.
//  Copyright (c) 2014年 Javor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EFMenuCollectionCell : UICollectionViewCell

@property(nonatomic, assign) NSString *title;
@property(nonatomic, assign) NSString *imagePath;

@property(nonatomic,strong) UIImage *image;


//是否隐藏右上角指示
@property(nonatomic,assign) BOOL indicateLabelHidden;
//右上角指示显示的数字
@property(nonatomic,assign) int indicateCount;

///标题字体大小
@property(nonatomic,assign) CGFloat titleFontSize;
///标题字体颜色
@property(nonatomic,strong) UIColor *titleColor;

///image宽度
@property(nonatomic,assign) CGFloat imageWidth;
///image高度
@property(nonatomic,assign) CGFloat imageHeight;
///title高度
@property(nonatomic,assign) CGFloat titleHeight;

///3 create
-(void) creationComplete;

-(void)iconTouchDown;
-(void)iconTouchUp;


@end
