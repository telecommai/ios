//
//  JFChatUserNameUtil.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/10.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constant.h"

@interface JFChatUserNameUtil : NSObject

//根据userID groupId 获取该用户的展示name
+(void)nameWithUserId:(NSInteger)userId groupId:(NSInteger)groupId complete:(StringBlock)complete;
+(NSString *)nameWithUserId:(NSInteger)userId groupId:(NSInteger)groupId;
//改变缓存的name
+(void)updateCacheNameWithUserId:(NSInteger)userId groupId:(NSInteger)groupId name:(NSString *)name;
//清除某个人的缓存
+(void)clearCacheWithUserId:(NSInteger)userId groupId:(NSInteger)groupId;

//清除缓存
-(void)clearCache;

@end
