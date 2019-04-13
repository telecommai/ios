//
//  UINavigationBar+Theme.h
//  ThemeDemo
//
//  Created by ss on 16/1/13.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"
#import "NSString+Theme.h"

@interface UINavigationBar (Theme)

@property (nonatomic, copy) ThemeColorPicker theme_tintColor;
@property (nonatomic, copy) ThemeColorPicker theme_barTintColor;
@property (nonatomic, copy) ThemeStringPicker theme_barStyle;

@end

