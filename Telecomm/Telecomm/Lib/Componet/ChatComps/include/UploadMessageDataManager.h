//
//  UploadMessageDataManager.h
//  ChatComps
//
//  Created by YRH on 2018/8/23.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface UploadMessageDataManager : NSObject

/// 消息内容实体，上传服务器 消息体中json必须要有 @"path":数据本地相对路径, 可以带有 @"dataName":本地文件名字
+ (IMStructMessage *)uploadDataToCloudAndPreSendWithMessageString:(NSString *)messageString toUserID:(int)toUserID postType:(Byte)postType subType:(short)subtype data:(NSData *)data fileName:(NSString *)fileName messageExtra:(NSMutableDictionary *)extra;

/// 消息内容实体，重传服务器
+ (IMStructMessage *)recendUploadDataToCloudAndReSendPreWithMessage:(IMStructMessage *)oldMessage;

@end
