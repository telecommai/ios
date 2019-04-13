//
//  AFNetworkingManager.h
//  AFNetworking
//
//  Created by YRH on 2018/3/5.
//  Copyright © 2018年 YRH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "AFNetworkReachabilityManager.h"

typedef void(^netWorkingSuccessResultCompletionHandle)(id result);
typedef void(^netWorkingErrorCompletionHandle)(NSString *error);
typedef void(^netWorkingProgressCompletionHandle)(NSProgress *progress);

@interface AFNetworkingManager : NSObject

/**
 Get 请求
 
 @param urlStr 地址（内部对url进行加密）
 @param success 成功的block
 @param failure 失败的block
 */
- (void)netWorkingRequestGetWithUrl:(NSString *)urlStr success:(netWorkingSuccessResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;

/**
 Post 请求
 
 @param urlStr 地址（内部对url进行加密）
 @param parameters post请求的参数
 @param success 成功的block
 @param failure 失败的block
 */
- (void)netWorkingRequestPostWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters success:(netWorkingSuccessResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;

/**
 下载
 
 @param urlStr 地址
 @param parameters 参数
 @param localPath 下载到本地路径需要写下载下来文件的名字
 @param success 成功的block
 @param failure 失败的block
 */
- (NSURLSessionDownloadTask *)netWorkingDownLoadWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters localPath:(NSURL *)localPath progress:(netWorkingProgressCompletionHandle)progress success:(netWorkingSuccessResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;

/**
 上传
 
 @param urlStr 地址
 @param fileData 文件二进制数据
 @param fileName 文件名称，需要表明文件格式
 @param success 成功的block
 @param failure 失败的block
 */
- (NSURLSessionUploadTask *)netWorkingUploadWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters fileData:(NSData *)fileData fileName:(NSString *)fileName progress:(netWorkingProgressCompletionHandle)progress success:(netWorkingSuccessResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;

/**
 检测网络
 */
- (void)networkReachabilityStatus:(void(^)(AFNetworkReachabilityStatus status))networkingStatus;

/**
 取消下载任务
 
 @param task task
 */
- (void)cancelDownloadTaskWithTask:(NSURLSessionDownloadTask *)task;

/**
 取消全部下载任务
 */
- (void)cancelAllDownloadTask;

/**
 取消上传任务
 
 @param task task
 */
- (void)cancelUploadTaskWithTask:(NSURLSessionDataTask *)task;

/**
 取消全部上传任务
 */
- (void)cancelAllUploadTask;

@end
