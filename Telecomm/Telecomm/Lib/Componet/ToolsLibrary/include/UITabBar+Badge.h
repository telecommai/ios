//
//  UITabBar+Badge.h
//  ToolsLibrary
//
//  Created by 高建飞 on 2018/6/30.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (Badge)

/// 显示小红点 tabbarBadge_Nums:tabBar的数量
- (void)showBadgeOnItemIndex:(NSInteger)index tabbarBadge_Nums:(NSInteger) count;
/// 隐藏小红点
- (void)hideBadgeOnItemIndex:(NSInteger)index;
/// 移除小红点
- (void)removeBadgeOnItemIndex:(NSInteger)index;

/// 设置粘性的badge
- (void)setBubbleBadge:(NSString*)badge AtIndex:(NSUInteger)index;
/// 获取粘性的badge
- (NSString *)getBubbleBadgeAtIndex:(NSUInteger)index;

@end
