//
//  TCTools.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/4/27.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TCTools : NSObject

/// 获取HUD动画图片数组
+ (NSArray *)getHudAnimationImages;

/// 根据英文星球名返回中文星球名
+ (NSString *)getZhPlanetNameWithEnName:(NSString *)enPlanetName;

/// 根据英文星球名返回中文星球基地(后面带“基地”)
+ (NSString *)getZhPlanetBaseNameWithEnName:(NSString *)enPlanetName;

@end
