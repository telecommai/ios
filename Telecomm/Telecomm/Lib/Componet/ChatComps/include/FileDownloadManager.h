//
//  MessageDataDownloadManager.h
//  ChatComps
//
//  Created by StarLord on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

// 下载消息中的 二进制数据

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface FileDownloadManager : NSObject

+ (void)downloadDataWithUrlString:(NSString *)urlString localDocumentFileName:(NSString *)localDocumentFileName fileLocalName:(NSString *)fileLocalName imStructMessage:(IMStructMessage *)structMessage successComplectionHandle:(void(^)(NSString *filePath))successComplectionHandle failComplectionHandle:(void(^)(NSError *error))failComplectionHandle;

+ (NSURLSessionDownloadTask *)downloadDataWithUrlString:(NSString *)urlString localDocumentFileName:(NSString *)localDocumentFileName fileLocalName:(NSString *)fileLocalName progress:(void(^)(CGFloat downloadProgress))progress successComplectionHandle:(void(^)(NSString *filePath))successComplectionHandle failComplectionHandle:(void(^)(NSError *error))failComplectionHandle ;

@end
