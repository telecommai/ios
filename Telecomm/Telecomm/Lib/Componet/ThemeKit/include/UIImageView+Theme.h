//
//  UIImageView+Theme.h
//  ThemeDemo
//
//  Created by 王胜利 on 18/4/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImage+Theme.h"
@interface UIImageView (Theme)

@property (nonatomic,copy)ThemeColorPicker theme_tintColor;
@property (nonatomic,copy)ThemeImagePicker theme_image;

- (instancetype)theme_initWithImage:(ThemeImagePicker)imagePicker;
@end
