//
//  SystemShareSendUtil.h
//  ChatComps
//
//  Created by 王胜利 on 2018/5/31.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SystemShareSendUtil : NSObject
/// 解析并发送消息
+ (void)sendShareMessageWithDictionary:(NSDictionary *)dataDictionary
                                 toUserId:(int)toUserId
                               toUserName:(NSString *)toUserName
                                 postType:(int)postType;


+ (void)pushToChatControllerWithToUserId:(NSInteger)toUserId toUserName:(NSString *)toUserName postType:(int)postType;
@end
