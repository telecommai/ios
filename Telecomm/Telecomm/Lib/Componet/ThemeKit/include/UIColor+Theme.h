//
//  UIColor+Theme.h
//  ThemeDemo
//
//  Created by 王胜利 on 18/4/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThemeConstant.h"

typedef UIColor *(^ThemeColorPicker)(void);
typedef CGColorRef (^ThemeCGColorPicker)(void);

@interface UIColor (Theme)

+ (ThemeColorPicker)theme_colorForKey:(NSString *)key;
+ (ThemeColorPicker)theme_tabBarColorForKey:(NSString *)key;
+ (ThemeColorPicker)theme_navigationBarColorForKey:(NSString *)key;
+ (ThemeColorPicker)theme_colorForKey:(NSString *)key from:(NSString *)from;
+ (ThemeCGColorPicker)theme_CGColorForKey:(NSString *)key ;
+ (ThemeCGColorPicker)theme_CGColorForKey:(NSString *)key from:(NSString *)from;

/// MARK: - 弃用
+ (ThemeColorPicker)theme_colorPickerForKey:(NSString *)key Deprecated("使用theme_colorForKey:");
+ (ThemeColorPicker)theme_tabBarColorPickerForKey:(NSString *)key Deprecated("使用theme_tabBarColorForKey:");
+ (ThemeColorPicker)theme_navigationBarColorPickerForKey:(NSString *)key Deprecated("使用theme_navigationBarColorForKey:");
+ (ThemeColorPicker)theme_colorPickerForKey:(NSString *)key fromDictName:(NSString *)fromDictName Deprecated("使用theme_colorForKey:from:");
+ (ThemeCGColorPicker)theme_CGColorPickerForKey:(NSString *)key Deprecated("使用theme_CGColorForKey");
+ (ThemeCGColorPicker)theme_CGColorPickerForKey:(NSString *)key fromDictName:(NSString *)fromDictName Deprecated("使用theme_CGCcolorForKey:from:");

@end
