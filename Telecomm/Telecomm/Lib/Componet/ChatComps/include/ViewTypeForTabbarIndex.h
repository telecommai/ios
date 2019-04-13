//
//  ViewTypeForTabbarIndex.h
//  OSPMobile
//
//  Created by 于仁汇 on 17/3/6.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ViewTypeForTabbarIndex : NSObject

/// 获得 当前控制器 在 tabbar中的角标
+ (NSInteger)viewTypeIndexInTabbarWithKey:(NSString *)key;

+ (NSInteger)viewTypeIndexInTabbarWithIdKey:(NSString *)key;
@end
