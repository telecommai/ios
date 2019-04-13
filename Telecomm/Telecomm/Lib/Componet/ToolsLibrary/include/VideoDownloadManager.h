//
//  VideoDownloadManager.h
//  ToolsLibrary
//
//  Created by 赵洪壮 on 2018/10/15.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  下载视频

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface VideoDownloadManager : NSObject

+ (NSURLSessionDownloadTask *)downloadDataWithUrlString:(NSString *)urlString localDocumentFileName:(NSString *)localDocumentFileName fileLocalName:(NSString *)fileLocalName progress:(void(^)(CGFloat downloadProgress))progress successComplectionHandle:(void(^)(NSString *filePath))successComplectionHandle failComplectionHandle:(void(^)(NSError *error))failComplectionHandle ;

@end

NS_ASSUME_NONNULL_END

