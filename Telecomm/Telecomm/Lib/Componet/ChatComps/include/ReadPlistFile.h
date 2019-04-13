//
//  ReadPlistFile.h
//  OSPMobile
//
//  Created by 于仁汇 on 2017/7/4.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ReadPlistFile : NSObject

/**
 从plist文件中，根据某个key，获取值
 
 @param plistName plist文件名称
 @param key key值
 @return value值
 */
+ (NSString *)readValueFromPlistName:(NSString *)plistName valueKey:(NSString *)key;

@end
