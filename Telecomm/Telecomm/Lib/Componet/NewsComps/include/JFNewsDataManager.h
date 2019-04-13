//
//  JFNewsDataManager.h
//  ESPChatComps
//
//  Created by 谢虎 on 2017/11/07.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^NEWS_netWorkingResultCompletionHandle)(id resultDic);
typedef void(^NEWS_netWorkingFaileCompletionHandle)(NSString *error);

@interface JFNewsDataManager : NSObject


/**
 获取新闻列表

 @param showPage 第几页
 @param pageNumber 每页数目
 @param channelID 频道ID
 @param success 成功
 @param faile 失败
 */
- (void)homeDatasByGetNetWorkingWithShowPage:(NSString *)showPage WithPageNumber:(NSString *)pageNumber withChannelID:(NSString *)channelID Success:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;

/**
 获取新闻评论列表
 
 @param params 参数
 @param success 成功
 @param faile 失败
 */
-(void)commentListByPostNetWorkingWithNewsID:(NSString *)newsId WithUserId:(NSString *)userId WithShowPage:(NSString *)showPage WithPageNumber:(NSString *)pageNumber Success:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;

/**
 增加评论
 
 @param params 参数
 @param success 成功
 @param faile 失败
 */
-(void)addCommentByPostNetWorkingWithNewsID:(NSString *)newsId WithParamUser:(NSString *)user WithParamUserName:(NSString *)userName WithParamComment:(NSString *)comment WithParamParentId:(NSString *)parentId Success:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;
/**
 评论点赞

 @param newsId 被点赞新闻
 @param commentId 被点赞评论ID
 @param success 成功
 @param faile 失败
 */
-(void)diggCommentByPostNetWorkingWithNewsId:(NSString *)newsId WithCommentId:(NSString *)commentId WithUser:(NSString *)user WithUserName:(NSString *)userName WithDigg:(NSString *)digg Success:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;


/**
 回复评论的回复列表

 @param newsId 新闻ID
 @param user 用户ID
 @param showPage 显示第几页
 @param pageNumber 每页数目
 @param success 成功
 @param faile 失败
 */
-(void)commentReplyListByPostNetWorkingWithNewsID:(NSString *)newsId WithUser:(NSString *)user WithParentId:(NSString *)parentId WithShowPage:(NSString *)showPage WithPageNumber:(NSString *)pageNumber Success:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;


/**
 回复评论的回复

 @param newsId 新闻ID
 @param user 用户ID
 @param userName 用户name
 @param comment 评论内容
 @param replyId 被评论ID
 @param parentId 评论的commentID
 @param success 成功
 @param faile 失败
 */
-(void)addCommentReplyByPostNetWorkingWithNewsID:(NSString *)newsId WithParamUser:(NSString *)user WithParamUserName:(NSString *)userName WithParamComment:(NSString *)comment WithReplyId:(NSString *)replyId WithParentId:(NSString *)parentId Success:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;

/**
 获取新闻频道

 @param success 成功
 @param faile 失败
 */
- (void)homeChannelsSuccess:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;

/**
 根据NewsId获取新闻业详情

 @param newsId newsId
 @param success 成功
 @param faile 失败
 */
- (void)newsDetailWithNewsId:(NSString *)newsId success:(NEWS_netWorkingResultCompletionHandle)success fail:(NEWS_netWorkingFaileCompletionHandle)faile;

@end
