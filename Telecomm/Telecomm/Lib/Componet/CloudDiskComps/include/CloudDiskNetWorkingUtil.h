//
//  CloudDiskNetWorkingUtil.h
//  CloudDiskComps
//
//  Created by 于仁汇 on 17/3/31.
//  Copyright © 2017年 YRH. All rights reserved.
//  网络请求类

#import <Foundation/Foundation.h>

typedef void(^netWorkingResultCompletionHandle)(NSDictionary *resultDic);
typedef void(^netWorkingErrorCompletionHandle)(NSString *error);
typedef void(^netWorkingProgressCompletionHandle)(NSProgress *progress);

@interface CloudDiskNetWorkingUtil : NSObject


/**
 Get 请求
 
 @param urlStr 地址（内部对url进行加密）
 @param success 成功的block
 @param failure 失败的block
 */
+ (void)netWorkingRequestGetWithUrl:(NSString *)urlStr success:(netWorkingResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;


/**
 Post 请求
 
 @param urlStr 地址（内部对url进行加密）
 @param parameters post请求的参数
 @param success 成功的block
 @param failure 失败的block
 */
+ (void)netWorkingRequestPostWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters success:(netWorkingResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;

/**
 下载
 
 @param urlStr 地址
 @param parameters 参数
 @param localPath 下载到本地路径
 @param progress 返回进度的block
 @param success 成功的block
 @param failure 失败的block
 */
+ (NSURLSessionDownloadTask *)netWorkingDownLoadWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters localPath:(NSURL *)localPath progress:(netWorkingProgressCompletionHandle)progress success:(netWorkingResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;

/**
 上传
 
 @param urlStr 地址
 @param fileData 文件二进制数据
 @param fileName 文件名称，需要表明文件格式
 @param progress 返回进度的block
 @param success 成功的block
 @param failure 失败的block
 */
+ (NSURLSessionUploadTask *)netWorkingUploadWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters fileData:(NSData *)fileData fileName:(NSString *)fileName progress:(netWorkingProgressCompletionHandle)progress success:(netWorkingResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;

/**
 检测网络
 */
+ (void)networkReachabilityStatus;


@end

