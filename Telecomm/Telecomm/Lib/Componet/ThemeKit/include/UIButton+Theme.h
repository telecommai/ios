//
//  UIButton+Theme.h
//  ThemeDemo
//
//  Created by 王胜利 on 18/4/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"
#import "UIImage+Theme.h"

@interface UIButton (Theme)

@property (nonatomic, copy) ThemeColorPicker _Nullable theme_tintColor;

- (void)theme_setImage:(_Nullable ThemeImagePicker)picker forState:(UIControlState)state;
- (void)theme_setBackgroundImage:(_Nullable ThemeImagePicker)picker forState:(UIControlState)state;
- (void)theme_setTitleColor:(_Nullable ThemeColorPicker)picker forState:(UIControlState)state;


@end
