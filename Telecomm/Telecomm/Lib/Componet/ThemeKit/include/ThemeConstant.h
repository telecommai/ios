//
//  ThemeConstant.h
//  ThemeKit
//
//  Created by 王胜利 on 2018/4/20.
//  Copyright © 2018年 wsl. All rights reserved.
//

#ifndef ThemeConstant_h
#define ThemeConstant_h


#define ThemeAnimationDuration 0.25
#define ThemeBundleName @"Theme.bundle"
#define ThemeBundlePath [[NSBundle mainBundle] pathForResource:ThemeBundleName ofType:nil]

#define Deprecated(instead) NS_DEPRECATED_IOS(2_0, 2_0,instead)


static NSString * kCurrentThemeKey = @"kCurrentThemeKey";
static NSString * kThemeChangeNotification = @"kThemeChangeNotification";


#endif /* ThemeConstant_h */
