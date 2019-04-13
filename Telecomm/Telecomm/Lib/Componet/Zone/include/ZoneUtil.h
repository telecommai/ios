//
//  ZoneUtil.h
//  Zone
//
//  Created by 王胜利 on 2018/5/9.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZoneUtil : NSObject

/// 根据时间戳转换成时间
+ (NSString *)timeString:(NSTimeInterval)timeIntreval;
/// 获取当前时间戳
+ (NSString *)currentTimeInterval;


@end
