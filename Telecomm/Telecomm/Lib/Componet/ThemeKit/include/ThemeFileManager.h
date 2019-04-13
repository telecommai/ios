//
//  ThemeFileManager.h
//  ThemeKit
//
//  Created by 王胜利 on 2018/4/20.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ThemeFileManager : NSObject

#pragma mark - bundle相关
/// 默认配置Bundle路径
+ (NSString *)defaultConfigSettingPath;
/// 将配置文件bundle拷贝到沙盒默认路径
+ (BOOL)copyConfigSettinBundleToDefaultPath;

@end
