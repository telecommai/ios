//
//  ImageButton.h
//  Zone
//
//  Created by 王胜利 on 2018/5/4.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageButton : UIControl

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) UIImageView *imageView;
@property (assign, nonatomic) UIEdgeInsets imageEdgeInsets;

@end
