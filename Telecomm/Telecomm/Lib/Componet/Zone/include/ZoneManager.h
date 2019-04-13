//
//  ZoneManager.h
//  Zone
//
//  Created by 王胜利 on 2018/5/3.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Zone.h"

@interface ZoneManager : NSObject

/// 根据userId获取User
+ (ZoneUserModel *)userInfoWithUserId:(NSString *)userId;


/// 获取引力波正文
+ (NSAttributedString*)cellContentText:(NSString *)string;
/// 获取转发正文
+ (NSAttributedString *)cellTransmitText:(ZoneModel *)zoneModel;
/// 点赞人员
+ (NSAttributedString *)cellLikeViewText:(ZoneModel *)zoneModel;
/// 获取评论
+ (NSAttributedString *)commentCellAttribute:(ZoneCommentModel *)commentModel;

+ (CGFloat)zoneSectionHeaderHeightWithModel:(ZoneModel *)model;
+ (CGFloat)zoneToolCellHeightWithModel:(ZoneModel *)model;
+ (CGFloat)zoneSectionFooterHeightWithModel:(ZoneModel *)model;

/// 获取Cell高度
+ (CGFloat)zoneContentCellHeightWithModel:(ZoneModel *)model;
/// 获取评论Cell高度
+ (CGFloat)zoneCommentCellHeightWithModel:(ZoneCommentModel *)model;

/// 详情页评论Cell高度
+ (CGFloat)zoneDetialCommentCellHeightWithModel:(ZoneCommentModel *)model;
/// 详情页回复cell高度
+ (CGFloat)zoneDetialReplyCellHeightWithModel:(ZoneCommentModel *)model;




/// 解析空间首页数据
+ (NSArray <ZoneModel *>*)handleShortPostDatas:(NSArray *)responseObject;
/// 解析与我相关数据
+ (NSArray *)handleAboutMeDatas:(NSArray *)responseObject;

/// 发表引力波
+ (ZoneModel *)postShortPost:(NSDictionary *)shortPost;
/// 转发
+ (ZoneModel *)transmitShortPostWithZoneModel:(ZoneModel *)model transmitReason:(NSString *)transmitReason;
/// 更新引力波Id
+ (void)updateShortPostIdWhitZoneModel:(ZoneModel *)model shortPostId:(NSString *)shortPostId coinCount: (NSInteger) coinCount;
/// 点赞
+ (void)zanWithZoneModel:(ZoneModel *)model successBlock:(VoidBlock) successBlock;
/// 添加评论
+ (void)addCommentWithZoneModel:(ZoneModel *)model comment:(NSString *)comment images:(NSArray <UIImage *>*)images successBlock:(VoidBlock) successBlock;
/// 添加回复
+ (void)addCommentReplyWithZoneModel:(ZoneModel *)model commentModel:(ZoneCommentModel *)commentModel comment:(NSString *)comment successBlock:(VoidBlock) successBlock;
/// 删除评论或回复
+ (void)removeCommentWithZoneModel:(ZoneModel *)model commentModel:(ZoneCommentModel *)commentModel successBlock:(VoidBlock) successBlock;

@end
