//
//  JFFriendModel.h
//  ESPMobile
//
//  Created by 陈海鹏 on 2018/6/21.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  好友模型(Friends表)

#import <Foundation/Foundation.h>

@class JFUserModel;

@interface JFFriendModel : NSObject

///好友
@property (nonatomic, strong)  JFUserModel *user;
///登录UserId
@property (nonatomic, assign)  NSInteger loginUserId;
///备注名
@property (nonatomic, copy)    NSString  *remark;
///是否置顶
@property (nonatomic, assign)  NSInteger isTop;
///是否免打扰
@property (nonatomic, assign)  NSInteger isBother;

@property (nonatomic, assign)  NSInteger isImportent;
///好友是否删除
@property (nonatomic, assign)  NSInteger enable;

@end
