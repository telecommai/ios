//
//  VideoSendManager.h
//  ESPChatComps
//
//  Created by YRH on 2018/3/29.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

/*
 发送视频
 */

#import <Foundation/Foundation.h>
#import "JFMessageManager.h"
#import <Photos/Photos.h>

typedef void(^Completion)(BOOL isSuccess);

@interface VideoSendManager : NSObject

+ (NSString *)videoPreMessageStringWithToUserID:(int)toUserID postType:(Byte)postType localPath:(NSString *)localPath time:(NSString *)time;

+ (void) sendVideoWithAsset:(AVAsset *)asset videoInfo:(NSDictionary *)videoInfo duration:(NSString *)duration completion:(Completion) completion;

//+ (IMStructMessage *)videoPreSendMessageWithToUserID:(int)toUserID postType:(Byte)postType localPath:(NSString *)localPath time:(NSString *)time;
//
//+ (void)videoSendWithMessage:(IMStructMessage *)structMessage url:(NSString *)url;
//+ (void)videoResendMessage:(IMStructMessage *)message;

@end
