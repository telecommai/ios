//
//  JFGroupNoticeModel.h
//  ESPMobile
//
//  Created by 陈海鹏 on 2018/6/21.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  群通知(GroupNotice表)

#import <Foundation/Foundation.h>
#import "JFUserModel.h"

@interface JFGroupNoticeModel : NSObject

///群Id
@property (nonatomic, assign)  NSInteger groupId;
///通知的相关用户的ID
@property (nonatomic, assign)  NSInteger userId;
///接收通知时间
@property (nonatomic, copy)    NSString  *time;
///通知的消息状态
@property(nonatomic,assign)    NSInteger state;
///该通知是否被读
@property (nonatomic, assign)  NSInteger isRead;
///该通知是否删除
@property (nonatomic, assign)  NSInteger enable;

@property (nonatomic, strong)  JFUserModel    *userModel;

@property (nonatomic, copy)    NSString  *leaveMessage;

@property (nonatomic, copy)    NSString *groupName;

@end
