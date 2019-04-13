//
//  ZoneNetworkManager.h
//  Zone
//
//  Created by 王胜利 on 2018/5/9.
//  Copyright © 2018年 pansoft. All rights reserved.
//  空间网络管理类
//

#import <Foundation/Foundation.h>
#import "Zone.h"

typedef void(^ZoneSuccess)(NSArray <ZoneModel *>*datas);
typedef void(^ListSuccess)(NSArray *datas);
typedef void(^Success)(NSDictionary *datas);


@interface ZoneNetworkManager : NSObject

/// 请求空间首页数据
+ (void)requestShortPostsWithEventTime:(NSString *)eventTime Type:(NSInteger) type success:(ZoneSuccess)success fail:(FailBlock)fail;
/// 请求个人空间数据
+ (void)requestPersonShortPortWithEventTime:(NSString *)eventTime friendId:(NSString *)friendId success:(ZoneSuccess)success fail:(FailBlock)fail;
/// 请求与我相关
+ (void)requestAboutMeWithEventTime:(NSString *)eventTime success:(ZoneSuccess)success fail:(FailBlock)fail;
/// 根据引力波ID请求引力波详情
+ (void) requestShortPostDetailWithShortPostId:(NSString *)shortpostid userid:(NSString *) userId success:(ZoneSuccess)success fail:(FailBlock)fail;
/// 发表引力波
+ (void)sendShortPostContent:(NSDictionary *)content success:(Success)success fail:(FailBlock)fail;
/// 转发引力波
+ (void)transmitShortPostContent:(NSString *)content sourceShortPostId:(NSString *)sourceShortPostId success:(Success)success fail:(FailBlock)fail;
/// 删除引力波
+ (void)deleteShortPortWithShortPostId:(NSString *)shortPostId success:(Success)success fail:(FailBlock)fail;
/// 点赞\取消赞
+ (void)likeWithZoneModel:(ZoneModel *)zoneModel success:(Success)success fail:(FailBlock)fail;
/// 发表评论
+ (void)sendCommentWithZoneModel:(ZoneModel *)zoneModel comment:(NSString *)comment success:(Success)success fail:(FailBlock)fail;
/// 发表回复
+ (void)sendReplyCommentWithZoneModel:(ZoneModel *)zoneModel parentCommentModel:(ZoneCommentModel *)parentCommentModel comment:(NSString *)comment success:(Success)success fail:(FailBlock)fail;
/// 删除评论
+ (void)deleteCommentWithCommentId:(NSString *)commentId success:(Success)success fail:(FailBlock)fail;
/// 请求用户头部背景图
+ (void)requstPersonTopBackImageWithUserId:(NSString *)userId success:(Success)success fail:(FailBlock)fail;
/// 更新自己头部背景图
+ (void)updateSelfTopBackImageWithImageUrl:(NSString *)imageUrl success:(Success)success fail:(FailBlock)fail;
/// 添加/取消关注(type=0:删除，type=1:添加)
+ (void) requestFollowFansWithType:(NSInteger)type starId:(NSString *) starId success:(Success)success fail:(FailBlock)fail;
/// 关注列表
+ (void) requestFansListSuccess:(ListSuccess)success fail:(FailBlock)fail;
/// 黑名单列表
+ (void) requestBlackListSuccess:(ListSuccess)success fail:(FailBlock)fail;
/// 添加黑名单
+ (void) addBlackFansWithblackUserid:(NSString *)blackUserid success:(Success)success fail:(FailBlock)fail;
/// 移除黑名单
+ (void) deleteBlackFansWithblackUserid:(NSString *)blackUserid success:(Success)success fail:(FailBlock)fail;
@end
