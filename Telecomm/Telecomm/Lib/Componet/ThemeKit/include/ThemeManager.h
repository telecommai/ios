//
//  ThemeManager.h
//  ThemeDemo
//
//  Created by 王胜利 on 2018/4/18.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - 皮肤模型
@interface ThemeModel: NSObject

/// 皮肤Id
@property (nonatomic, strong) NSString *themeId;
/// 皮肤名称
@property (nonatomic, strong) NSString *themeName;
/// 皮肤Icon路径
@property (nonatomic, strong) NSString *themeIconPath;
/// 皮肤Icon
@property (nonatomic, strong) UIImage *themeIcon;
/// 皮肤文件路径
@property (nonatomic, strong) NSString *filePath;
/// 皮肤配置内容
@property (nonatomic, strong) NSDictionary *config;
/// 此主题是否在本地
@property (nonatomic, assign) BOOL isLocal;
/// 此主题是否是当前主题
@property (nonatomic, assign) BOOL isCurrent;

@end


#pragma mark - 皮肤管理器
@interface ThemeManager : NSObject

/// 获取所有的皮肤配置模型
+ (NSArray <ThemeModel *>*)allThemes;
/// 获取当前皮肤模型
+ (ThemeModel *)currentTheme;
/// 获取当前皮肤ID
+ (NSString *)currentThemeId;
/// 应用主题
+ (void)applyTheme:(NSString *)themeId;

@end

@interface ThemeManager (MutableTheme)

/// 添加皮肤
+ (void)addTheme:(NSString *)themeId filePath:(NSString *)filePath;
/// 删除皮肤
+ (void)removeTheme:(NSString *)themeId;

@end

