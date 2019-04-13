//
//  JFGroupsModel.h
//  ESPMobile
//
//  Created by 陈海鹏 on 2018/6/21.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  群组(Groups表,MyGroup表)

#import <Foundation/Foundation.h>
#import "JFGroupsModel.h"
@interface JFGroupsModel : NSObject

///群Id
@property (nonatomic, assign)  NSInteger groupId;
///群主UserId
@property (nonatomic, assign)  NSInteger createUserId;
///群名称
@property (nonatomic, copy)    NSString  *groupName;
///建群时间
@property (nonatomic, copy)    NSString  *createTime;
///群头像
@property (nonatomic, copy)    NSString  *avatar;
///群组是否删除
@property (nonatomic, assign)  NSInteger enable;
///登录UserId
@property (nonatomic, assign)  NSInteger loginUserId;
///是否置顶
@property (nonatomic, assign)  NSInteger isTop;
///是否免打扰
@property (nonatomic, assign)  NSInteger isBother;
///是否禁言
@property (nonatomic, assign)  NSInteger noSpeak;
///是否禁言
@property (nonatomic, assign)  NSInteger groupType;

@end
