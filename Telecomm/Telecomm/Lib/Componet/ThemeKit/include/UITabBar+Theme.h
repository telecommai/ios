//
//  UITabBar+Theme.h
//  ThemeDemo
//
//  Created by 王胜利 on 2018/4/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"
#import "NSString+Theme.h"

@interface UITabBar (Theme)

@property (nonatomic, copy) ThemeColorPicker theme_tintColor;
@property (nonatomic, copy) ThemeColorPicker theme_barTintColor;
@property (nonatomic, copy) ThemeStringPicker theme_barStyle;

@end
