//
//  SystemShareLanguageManager.m
//  SystemShare
//
//  Created by 夏祥可 on 2019/1/4.
//  Copyright © 2019 wsl. All rights reserved.
//

#import "SystemShareLanguageManager.h"

#define kLanguageKey @"language"

@implementation SystemShareLanguageManager

+ (NSString *)stringWithKey:(NSString *)key comment:(NSString *)comment {
    NSString *tableName = @"OpenPlanet";
    
    NSString *language = [self getCurrentLanguage];
    
    return [[NSBundle bundleWithPath:[[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"%@",language] ofType:@"lproj"]] localizedStringForKey:key value:@"" table:tableName];
}

+ (NSString *)getCurrentLanguage{
    // 1先判断用户是否设置语言
    NSString *language = [[NSUserDefaults standardUserDefaults] objectForKey:kLanguageKey];
    // 2如果未设置，为系统默认语言(如果为当前语言包没有系统默认语言，默认为英语)
    if (language == nil || language.length == 0) {
        NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults];
        NSArray * allLanguages = [defaults objectForKey:@"AppleLanguages"];
        language = [allLanguages objectAtIndex:0];
        // 2.1 系统语言返回可能有多余地区字母后缀，需要匹配相应语言路径
        if ([language containsString:@"zh-Hans"]) {
            // 简体中文
            language = @"zh-Hans";
        }else if ([language containsString:@"en"]) {
            // 英语
            language = @"en";
        }else if ([language containsString:@"ru"]) {
            // 俄语
            language = @"ru";
        }else if ([language containsString:@"hy"]) {
            // 亚美尼亚语
            language = @"hy";
        }else if ([language containsString:@"es"]) {
            // 西班牙语
            language = @"es";
        }else if ([language containsString:@"pt"]) {
            // 葡萄牙语
            language = @"pt-PT";
        }else if ([language containsString:@"th"]) {
            // 泰语
            language = @"th";
        }else {
            // 2.2如果没有系统默认语言对应语言包 暂时设置为英文
            language = @"en";
        }
    }
    return language;
}


@end
