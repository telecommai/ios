//
//  AFNetworkingDownloadManager.h
//  AFNetworking
//
//  Created by YRH on 2018/3/14.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^Progress)(NSProgress *downloadProgress);

@interface AFNetworkingDownloadManager : NSObject

- (NSURLSessionDownloadTask *)downLoadWithUrl:(NSString *)urlStr parameters:(NSDictionary *)parameters localPath:(NSURL *)localPath progressBlock:(Progress)progressBlock success:(void(^)(id result))success failure:(void(^)(NSString *error))failure;

@end
