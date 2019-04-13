//
//  ZoneBaseController+EventManager.h
//  Zone
//
//  Created by 王胜利 on 2018/5/14.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import "ZoneBaseController.h"

@interface ZoneBaseController (EventManager)

/// 转发引力波
- (void)transmitShortPostWithZoneModel:(ZoneModel *)zoneModel;
/// 删除引力波
- (void)deleteShortPostWithZoneModel:(ZoneModel *)zoneModel;
/// 添加评论
- (void)addCommentWithSection:(NSInteger)section;
/// 添加评论回复
- (void)addCommentReplyWithIndexPath:(NSIndexPath *)indexPath;
/// 删除评论
- (void)deleteCommentWithIndexPath:(NSIndexPath *)indexPath;
/// 添加、取消关注
- (void) followFansWithType:(NSInteger) type zoneModel:(ZoneModel *)zoneModel success:(VoidBlock) successBlock;
/// 添加黑名单
- (void) addBlackListWithZoneModel:(ZoneModel *) zoneModel success:(VoidBlock) successBlock;
/// 刷新本地数据
- (void) refreshLocalDataWithZoneModel:(ZoneModel *)zoneModel;

@end

