//
//  EnvironmentUtil.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/6/1.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIkit.h>

@interface EnvironmentUtil : NSObject

/// 设置环境变量
+ (void)setupEnvironmentVariable;
/// 设置保存用户信息
+ (void)saveUserInfoWithDict:(NSDictionary *)userInfo;
/// 保存是否是ipx
+ (void)saveIsIphoneX;

@end
