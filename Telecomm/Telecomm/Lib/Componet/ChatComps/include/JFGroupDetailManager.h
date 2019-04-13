//
//  JFGroupDetailManager.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    /// 部落名称
    JFGroupDetailTypeGroupName,
    /// 部落英文名称
    JFGroupDetailTypeEnglishName,
    /// 部落介绍
    JFGroupDetailTypeIntroduction,
    /// 我在本部落的昵称
    JFGroupDetailTypeMyNickName,
    /// 部落成员
    JFGroupDetailTypeMember,
    /// 置顶聊天
    JFGroupDetailTypeOnTop,
    /// 免打扰
    JFGroupDetailTypeDontBother,
    /// 自由进群
    JFGroupDetailTypeJoinInFreedom,
    /// 全员禁言
    JFGroupDetailTypeAllQuite,
    /// 部落地址
    JFGroupDetailTypeAddress,
    /// 部落地址按钮
    JFGroupDetailTypeAddressAddButton,
    /// 创建时间
    JFGroupDetailTypeCreateTime,
    /// 分享部落
    JFGroupDetailTypeShareGroup
} JFGroupDetailType;

typedef void(^AddAddressSuccessCallBack)(id);

typedef void(^FailiureCallBack)(NSString *);

typedef void(^SelectGroupMemberSuccessCallBack)(NSArray *);

typedef void(^SelectGroupMemberFailureCallBack)(NSString *);

@interface JFGroupDetailManager : NSObject

@property(nonatomic,copy)                NSString       *groupId;

/// 群信息
@property(nonatomic,strong)              NSDictionary   *groupInfoDict;

/// 我在此群的昵称
@property(nonatomic,copy,readonly)       NSString       *myNickNameInGroup;

/// 个人设置
@property(nonatomic,strong)              NSDictionary   *personalConfigurationDict;

/// 群名称
@property(nonatomic,copy,readonly)       NSString       *groupName;

/// 聊天置顶
@property(nonatomic,copy,readonly)       NSString       *chatOnTop;

/// 消息免打扰
@property(nonatomic,copy,readonly)       NSString       *dontBother;

/// 自由进群
@property(nonatomic,copy,readonly)       NSString       *joinFree;

/// 禁言状态 0 是未禁言 1是全部禁言
@property(nonatomic,copy,readonly)       NSString       *allQuiteSate;

/// 群头像
-(UIImage *)imageForGroup;

/// 标题
-(NSString *)titleForGroupType:(JFGroupDetailType)type;

/// 内容
-(NSString *)contentForGroupType:(JFGroupDetailType)type;

/// 判断是否是群主或者管理员
-(Boolean)isOnwer;

/// 判断是否是管理员
-(Boolean)isManager;

/// 数据库查询 群成员
-(void)selectGroupUserInfo:(SelectGroupMemberSuccessCallBack)success
                   failure:(SelectGroupMemberFailureCallBack)failure;

/// 获取部落地址
-(void)getGroupAddressWithSuccess:(void(^)(NSArray *)) success
                          failure:(void(^)(NSString *)) failure;

/// 添加部落地址
-(void)addGroupAddressWithdict:(NSDictionary *)dict
                       Success:(AddAddressSuccessCallBack) success
                       failure:(FailiureCallBack) failure;

/// 删除群聊地址
-(void)deleteGroupAddressWithAddressId:(NSString *)addressId
                               Success:(void(^)(void)) success
                               failure:(void(^)(NSString *)) failure;

/// 退出并解散群
-(void)quitTheGroupWithSuccess:(void(^)(void)) success
                       failure:(void(^)(NSString *)) failure;

/// 将是否置顶和免打扰保存到数据库中
-(void)updateChatOnTop:(NSString *)chatOnTop dontBother:(NSString *)dontBother;

/// 单例
+(instancetype)sharedInstance;


/// 销毁单例
+(void)tearDown;

@end
