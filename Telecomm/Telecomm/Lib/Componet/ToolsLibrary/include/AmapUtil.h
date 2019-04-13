//
//  AmapUtil.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/6/1.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 注册某一种类型的地图

 - MapActiveWithAMap: 高德地图
 - MapActiveWithGoogle: google地图
 */
typedef NS_ENUM(NSUInteger, MapActive) {
    MapActiveWithAMap,
    MapActiveWithGoogle,
};

@interface AmapUtil : NSObject

/// 注册地图
+ (void)registerMap:(MapActive)mapActive;
/// 获取当前激活的地图
+ (MapActive)currentMap;

@end
