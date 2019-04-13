//
//  HcdGuideViewCell.h
//  HcdGuideViewDemo
//
//  Created by 苏友龙 引导页 on 16/7/12.
//  Copyright © 2016年 Polesapp. All rights reserved.
//

#define kHcdGuideViewBounds [UIScreen mainScreen].bounds

#import <UIKit/UIKit.h>

@interface HcdGuideViewCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIButton    *button;
@property (nonatomic, strong) UIButton    *timeBtn;
@end
