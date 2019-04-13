//
//  EFSelectCollectionMenuCell.h
//  ESPTablet
//
//  Created by Javor on 14-8-12.
//  Copyright (c) 2014年 Javor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SSCheckBoxView.h"

@interface EFSelectCollectionMenuCell : UICollectionViewCell

@property(nonatomic, assign) NSString *title;
@property(nonatomic, assign) NSString *imagePath;

@property(nonatomic,strong) UIImage *image;


//是否选中
@property(nonatomic,assign) BOOL isChecked;

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
