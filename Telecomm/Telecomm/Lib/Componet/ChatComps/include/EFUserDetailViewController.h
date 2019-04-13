//
//  EFUserDetailViewController.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/5/10.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  用户详情界面

#import <UIKit/UIKit.h>
#import "PersonModel.h"
#import "EFUIViewController.h"

//当前页面用户与本用户的关系
typedef enum{
    /**单聊且是好友*/
    EFPersonFriendType      = (Byte)0,
    /**群聊且是好友*/
    EFGroupFriendType       = (Byte)1,
    /**群聊非好友*/
    EFGroupNotFriendType    = (Byte)2,
    /**点自己头像*/
    EFMyselfType            = (Byte)3,
    /**陌生人**/
    EFStrangerType          = (Byte)4,
    /**不确定关系类型**/
    EFUnkownType            = (Byte)5,
}EFUserType;

typedef enum{
    /**单聊*/
    EFChatDefaultType     = (Byte)0,
    /**单聊*/
    EFChatPersonType      = (Byte)1,
    /**群聊*/
    EFChatGroupType       = (Byte)2,
}EFChatType;
@protocol  UserModelRefreshDelegate <NSObject>
//-(void)refreshOldModel:(PersonModel *)oldModel withNewModel:(PersonModel *)newModel;

-(void)refreshModel;

@end

@interface EFUserDetailViewController : EFUIViewController

//数据源
@property(nonatomic,strong) PersonModel *model;
//当前页面用户与本用户的关系
@property(nonatomic,assign) EFUserType  userType;
//从聊天进入时的聊天类型
@property(nonatomic,assign) EFChatType  chatType;
//当前用户ID
@property(nonatomic,copy)   NSString    *currentUserId;
//当前用户所在的群组ID
@property(nonatomic,copy)   NSString    *currentGroupId;

@property(nonatomic,weak)   id<UserModelRefreshDelegate>   delegate;

//根据参数选择初始化方法
-(instancetype)initWithUserId:(NSString *)userId userType:(EFUserType)userType;
-(instancetype)initWithPersonModel:(PersonModel *)model userType:(EFUserType)userType;
-(instancetype)initWithPersonModel:(PersonModel *)model userId:(NSString *)userId atGroup:(NSString *)groupId userType:(EFUserType)userType;
-(instancetype)initWithUserId:(NSString *)userId atGroup:(NSString *)groupId userType:(EFUserType)userType;
//从聊天详情进入用户详情
-(instancetype)initWithUserId:(NSString *)userId userType:(EFUserType)userType chatType:(EFChatType)chatType;
@end
