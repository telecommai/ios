//
//  FileUtil.h
//  IOSESPBase
//
//  Created by JavorFeng on 14-1-2.
//  Copyright (c) 2014年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileUtil : NSObject

+(NSData *)getFileDataWithPath:(NSString *) path andTypePath:(NSString *)typePath;
+(void)getPackageFiles;
+(void)getAPPPackageFilesWithPath:(NSString *)path;
+(void)removeAllFiles;
+(void)restoreTheFactorySettings;

+(void)copyFilesToDocument:(NSArray *)fileList;
+(void)copyOptionSettingFileToDocument:(NSArray *) fileList;
///判断文件是否存在
+ (BOOL)isFileExist:(NSString *)path;

@end
