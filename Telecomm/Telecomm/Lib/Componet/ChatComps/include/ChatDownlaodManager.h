//
//  ChatDownlaodManager.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/4/3.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFChatAnimationModel.h"

#define ANIMATION   @"animation"
#define STYLE       @"style"

///成功回调
typedef void(^downloadSuccess)(id response);
///失败回调
typedef void(^downloadFail)(id response);

@interface ChatDownlaodManager : NSObject


/**
 下载操作
 
 @param urlString 下载地址
 @param loaclPath 保存地址
 @param success 成功
 @param fail 失败
 */
+(void)downloadWithUrlString:(NSString *)urlString localPath:(NSString *)loaclPath  success:(downloadSuccess)success fail:(downloadFail)fail;

/**
 解压操作
 
 @param zipPath 解压文件路径
 @param savePath 解压之后保存路径
 @return YES成功 NO失败
 */
+(BOOL)unzipFileWithZipPath:(NSString *)zipPath savePath:(NSString *)savePath;

/**
 下载固定地址，名称资源文件
 
 @param success 成功
 @param fail 失败
 */
+(void)totalAnimationDownloadUnzipsuccess:(downloadSuccess)success fail:(downloadFail)fail;

/**
 根据名称下载资源文件,并解压
 
 @param urlString  下载地址(必填)
 @param name 资源文件名称(必填)
 @param success 成功
 @param fail 失败
 */
+(void)zipFileWithUrlString:(NSString *)urlString resourceName:(NSString *)name success:(downloadSuccess)success fail:(downloadFail)fail;


/**
 下载,解压,并读取json文件,返回JFChatAnimationModel
 
 @param type 下载model类型
 @param number 下载model编号
 @param success 成功
 @param fail 失败
 */
+(void)animationModelWithType:(NSString *)type number:(NSString *)number success:(downloadSuccess)success fail:(downloadFail)fail;
@end
