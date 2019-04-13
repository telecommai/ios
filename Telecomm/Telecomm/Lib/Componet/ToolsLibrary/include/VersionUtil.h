//
//  VersionUtil.h
//  IOSESPBase
//
//  Created by JavorFeng on 13-12-30.
//  Copyright (c) 2013年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VersionUtil : NSObject
+(void)createVersionInfoWithXML:(NSString *) xml;

+(NSString *)getInitURL;
+(NSString *)getCurrentVersion;
+(void)setCurrentVersion:(NSString *)version;
+(NSString *)getUpdateURL;
+(NSString *)getUpdateVersion;

@end
