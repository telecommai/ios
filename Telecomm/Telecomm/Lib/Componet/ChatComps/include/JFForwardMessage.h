//
//  JFForwardMessage.h
//  ChatComps
//
//  Created by StarLord on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFMessageManager.h"

@interface JFForwardMessage : NSObject

/// 转发消息
+ (void)forwardMessage:(IMStructMessage *)message toUserId:(int)toUserId toUserName:(NSString *)toUserName postType:(int)postType;

@end
