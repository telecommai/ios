//
//  PlistUtil.h
//  IOSESPBase
//
//  Created by JavorFeng on 13-12-9.
//  Copyright (c) 2013年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PlistUtil : NSObject

+(NSString *)getPathWithName : (NSString *) name;
+(NSDictionary *)getPLlistDicWitName:(NSString *)name;
+(NSDictionary *) getPlistDic:(NSString *) plistName;
+(void)saveData:(NSMutableDictionary *)data toFile:(NSString *)fileName;
+(NSDictionary *)dictionaryWithProjectPlistName:(NSString *)plistName;
+(NSString *)stringWithProjectPlistName:(NSString *)plsitName key:(NSString *)key;
+(NSString *)loginURL;
+(NSString *)IMBaseUrl;
@end
