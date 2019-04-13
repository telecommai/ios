//
//  CloudDiskUploadManager.h
//  CloudDiskComps
//
//  Created by Javor Feng on 2018/5/19.
//  Copyright © 2018年 YRH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "AFNetworkingManager.h"

typedef void(^netWorkingResultCompletionHandle)(NSDictionary *resultDic);
typedef void(^netWorkingErrorCompletionHandle)(NSString *error);
typedef void(^netWorkingProgressCompletionHandle)(NSProgress *progress);

@interface CloudDiskUploadManager : NSObject

/**
 上传
 
 @param urlStr 地址
 @param fileData 文件二进制数据
 @param fileName 文件名称，需要表明文件格式
 @param progress 返回进度的block
 @param success 成功的block
 @param failure 失败的block
 */
- (NSURLSessionUploadTask *)netWorkingUploadWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters fileData:(NSData *)fileData fileName:(NSString *)fileName progress:(netWorkingProgressCompletionHandle)progress success:(netWorkingResultCompletionHandle)success failure:(netWorkingErrorCompletionHandle)failure;


@end
