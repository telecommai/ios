//
//  URLUtil.h
//  IOSESPBase
//
//  Created by JavorFeng on 13-12-3.
//  Copyright (c) 2013年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface URLUtil : NSObject

+ (BOOL)isURL:(NSString *)url;

+(BOOL)isRelativeURL:(NSString *)URL;

+(NSString *) getUrlWithIsSafe:(BOOL)isSafe ip:(NSString *)ip port:(NSString *)port serverPath:(NSString *) serverPath;

+(NSString *)getUrlWithPath:(NSString *)path;

@end
