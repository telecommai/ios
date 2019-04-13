//
//  ZoneSectionHeaderView.h
//  Zone
//
//  Created by 王胜利 on 2018/10/22.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Zone.h"


/**
 引力场引力波操作事件

 - ZoneHeaderActionTypeDelete: 删除引力波
 - ZoneHeaderActionTypeAddFollow: 添加关注
 - ZoneHeaderActionTypeDeleteFollow: 取消关注
 - ZoneHeaderActionTypeAddBlackList: 添加黑名单
 */
typedef NS_ENUM(NSUInteger, ZoneHeaderActionType) {
    ZoneHeaderActionTypeDelete,
    ZoneHeaderActionTypeAddFollow,
    ZoneHeaderActionTypeDeleteFollow,
    ZoneHeaderActionTypeAddBlackList,
    ZoneHeaderActionTypeTextOpenClose,
};

NS_ASSUME_NONNULL_BEGIN

@protocol ZoneSectionHeaderViewDelegate<NSObject>

- (void)zoneSectionHeaderWithType:(ZoneHeaderActionType)type zoneModel:(ZoneModel *)zoneModel;

@end

@interface ZoneSectionHeaderView : UITableViewHeaderFooterView

@property (nonatomic,assign) BOOL isInBlackList;

@property (nonatomic, weak) id<ZoneSectionHeaderViewDelegate> delegate;
- (void)cellWithZoneModel:(ZoneModel *)zoneModel headRightButtonHidden:(BOOL) hidden avatarEnable:(BOOL)avatarEnable;
@property (nonatomic,copy) void(^touchBlock)(void);


@end

NS_ASSUME_NONNULL_END
