//
//  CloudDiskUpDownloadManager.h
//  CloudDiskComps
//
//  Created by 于仁汇 on 2017/4/7.
//  Copyright © 2017年 YRH. All rights reserved.
//  用于管理 上传、下载

#import <Foundation/Foundation.h>

@interface CloudDiskUpDownloadManager : NSObject

+ (instancetype)sharedCloudDiskUpDownloadManager;

/**
 获得 所有下载的任务

 @return 包含 所有 下载任务字典 的数组
 */
- (NSMutableArray *)acquisitionAllDownloadTaskInQueue;

/**
 获得 所有上传的任务

 @return 包含 所有 上传任务字典 的数组
 */
- (NSMutableArray *)acquisitionAllUploadTaskInQueue;

/**
 添加 下载任务

 @param taskDic 下载任务字典 @{@"session" : @"", @"downloadTask" : @""}
 */
- (void)addDownloadTask:(NSMutableDictionary *)taskDic;

/**
 添加 上传任务

 @param taskDic 上传任务字典 @{@"session" : @"", @"uploadTask" : @""}
 */
- (void)addUploadTask:(NSMutableDictionary *)taskDic;

/**
 删除 完成的下载任务

 @param taskDicUrl 已完成的下载任务
 */
- (void)removeFinishDownloadTask:(NSString *)taskDicUrl;

/**
 删除 完成的上传任务

 @param taskDicUrl 已完成的上传任务
 */
- (void)removeFinishUploadTask:(NSString *)taskDicUrl;

/**
 查询下载任务是否已在队列中

 @param url 下载任务 的请求地址
 @return YES表示 在，NO表示不在
 */
- (BOOL)downloadTaskIsInQueue:(NSString *)url;

/**
 查询上传任务是否已在队列中

 @param url 上传任务 的请求地址
 @return YES表示在， NO表示不在
 */
- (BOOL)uploadTaskIsInQueue:(NSString *)url;

/**
 暂停下载
 
 @param taskDic 下载任务
 */
- (void)stopDownload:(NSMutableDictionary *)taskDic;

/**
 开始下载
 
 @param taskDic 下载任务
 */
- (void)startDownload:(NSMutableDictionary *)taskDic;


/**
 暂停上传

 @param taskDic 上传任务
 */
- (void)stopUpload:(NSMutableDictionary *)taskDic;

/**
 开始上传

 @param taskDic 上传任务
 */
- (void)startUpload:(NSMutableDictionary *)taskDic;


@end
