//
//  EFDeviceUtil.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/1/25.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  判断设备型号

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EFDeviceUtil : NSObject

/**
 检测是否是全面屏

 @return YES/NO
 */
+(BOOL)isDeviceIpx;

/**
 检测设备型号

 @return 设备型号
 */
+ (NSString *)deviceType;

/**
 设备分辨率
 
 @return 分辨率
 */
+ (CGSize)deviceResolution;

@end
