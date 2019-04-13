//
//  JFChatSearchManager.h
//  ChatComps
//
//  Created by 董艳武 on 2018/11/5.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFChatSearchUserModel.h"
#import "JFChatSearchGroupModel.h"
#import "JFChatSearchResultModel.h"

NS_ASSUME_NONNULL_BEGIN

/// 搜索好友的回调
typedef void(^QueryFriendsCompletionHandler)(NSArray<JFChatSearchUserModel *>*);
/// 搜搜部落的回调
typedef void(^QueryGroupsCompletionHandler)(NSArray<JFChatSearchGroupModel *>*);
/// 搜索结果的回到
typedef void(^QueryResultCompletionHandler)(JFChatSearchResultModel *result);

@interface JFChatSearchManager : NSObject


/**
 执行搜索好友

 @param keywords 关键词
 @param handler 结果的回调 没有结果则返回空数组
 */
+(void)queryFriendsByKeywords:(NSString *)keywords
            completionHandler:(QueryFriendsCompletionHandler)handler;


/**
 执行搜索部落

 @param keywords 关键词
 @param handler 结果的回调 没有结果则返回空数组
 */
+(void)queryGroupsByKeywords:(NSString *)keywords
           completionHandler:(QueryGroupsCompletionHandler)handler;


/**
 同时搜索好友和部落

 @param keywords 关键词
 @param handler 结果的回调 
 */
+(void)queryInfoByKeywords:(NSString *)keywords
         completionHandler:(QueryResultCompletionHandler)handler;

@end

NS_ASSUME_NONNULL_END
