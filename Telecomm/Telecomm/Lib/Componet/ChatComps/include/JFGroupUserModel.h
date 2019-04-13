//
//  JFGroupUserModel.h
//  ESPMobile
//
//  Created by 陈海鹏 on 2018/6/21.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  群成员模型(GroupUsers表)

#import <Foundation/Foundation.h>

@class JFUserModel;

@interface JFGroupUserModel : NSObject

///用户
@property (nonatomic, strong)  JFUserModel *user;
///所在群Id
@property (nonatomic, assign)  NSInteger   groupId;
///群备注
@property (nonatomic, copy)    NSString    *note;
///群职称(0:普通成员 1:管理员  9:群主),默认为0
@property (nonatomic, assign)  NSInteger   groupUserType;
///群成员是否被移除,默认值为1
@property (nonatomic, assign)  NSInteger   enable;

@end
