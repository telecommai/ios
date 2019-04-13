//
//  NSString+Theme.h
//  ThemeDemo
//
//  Created by 王胜利 on 2018/4/18.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ThemeConstant.h"

typedef NSString *(^ThemeStringPicker)(void);

@interface NSString (Theme)

+ (ThemeStringPicker)theme_stringForKey:(NSString *)key from:(NSString *)from;
/// MARK: - 弃用
+ (ThemeStringPicker)theme_stringForKey:(NSString *)key fromDictName:(NSString *)fromDictName Deprecated("使用Deprecated:from:");

@end
