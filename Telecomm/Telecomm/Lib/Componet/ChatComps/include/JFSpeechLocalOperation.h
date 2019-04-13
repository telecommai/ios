//
//  JFSpeechLocalOperation.h
//  ChatComps
//
//  Created by StarLord on 2018/9/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

#define kSpeechDownloading @"speechDownloading"
@interface JFSpeechLocalOperation : NSObject

/// 获取上传文件的fileId
+ (NSString *)fileIdWithMessage:(IMStructMessage *)message;
/// 获取本地文件名字，去除后缀
+ (NSString *)localPathfileIdWithMessage:(IMStructMessage *)message;

/// 检测本地是否存在
+ (NSString *)speechDataLocalPathWithMessage:(IMStructMessage *)message;

/// 下载 语音听写文件
+ (void)speechDownloadWithMessage:(IMStructMessage *)message success:(void(^)(NSString *filePath, IMStructMessage *downloadMessage))success failed:(void(^)(NSError *error, IMStructMessage *downloadMessage))failed;

/// 获取声音识别文件本地路径，本地没有就下载，返回nil就是下载失败了
+ (void)speechRecognizeObtainPathWithMessage:(IMStructMessage *)message localPath:(void(^)(NSString *speechLocalPath, IMStructMessage *message))speechLocalPath;

/// 保存波形图，tint波形图到本地
+ (void)localSaveWaveImage:(UIImage *)image tintImage:(UIImage *)tintImage message:(IMStructMessage *)message;
/// 获取本地存储的声波图
+ (UIImage *)getWaveImageWithMessage:(IMStructMessage *)message;
/// 获取本地tint波形图
+ (UIImage *)getLoaclSavedTintWaveImageWithName:(NSString *)name;

@end
