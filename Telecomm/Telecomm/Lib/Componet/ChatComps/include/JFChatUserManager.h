//
//  JFChatUserManager.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/4/11.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PersonModel.h"

typedef void(^userManagerBlock)(id response);

@interface JFChatUserManager : NSObject

/**
 获取个人信息

 @param fromUserID 发消息用户ID
 @param toUserID 接收消息ID(userID或者groupID)
 @param postType 个人/群组
 @param userResponse 返回信息model
 */
+(void)userWithFromUserID:(int)fromUserID toUserID:(int)toUserID postType:(Byte)postType userManagerBlock:(userManagerBlock)userResponse;

/**
 清除所有缓存
 */
+(void)removeCachedUser;
@end
