//
//  JFNewFriendModel.h
//  ESPMobile
//
//  Created by 陈海鹏 on 2018/6/21.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  新的朋友通知(NewFriend表)

#import <Foundation/Foundation.h>
#import "JFUserModel.h"

@interface JFNewFriendModel : NSObject

///登录Id
@property (nonatomic, assign)  NSInteger loginUserId;
///通知的相关用户的ID
@property (nonatomic, assign)  NSInteger userId;
///接收通知时间
@property (nonatomic, copy)    NSString  *time;
///通知的消息状态  0  未处理  1好友  2已发送  3已拒绝  4被拒绝
@property(nonatomic,assign)    NSInteger state;
///该通知是否删除,默认值为0
@property (nonatomic, assign)  NSInteger enable;
///申请的信息
@property(nonatomic,copy)      NSString  *leaveMessage;

@property(nonatomic,strong)     JFUserModel *userModel;

@end
