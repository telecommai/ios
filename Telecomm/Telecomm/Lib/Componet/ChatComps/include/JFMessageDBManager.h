//
//  JFMessageDBManager.h
//  ChatComps
//
//  Created by Javor Feng on 2018/5/18.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "JFChatModel.h"
#import "JFUserModel.h"
#import "JFFriendModel.h"
#import "JFNewFriendModel.h"
#import "JFGroupsModel.h"
#import "JFGroupUserModel.h"
#import "JFGroupNoticeModel.h"
#import "EFChatListModel.h"
#import "IMStructMessage.h"

@interface JFMessageDBManager : NSObject

#pragma mark - JFUserModel
///向User中插入用户
+ (BOOL)insertIntoUserWithModel:(JFUserModel *)userModel;
+ (void)insertIntoUserWithUserArray:(NSMutableArray *)userArray;
///更新User表中avatar(更换头像)
+ (BOOL)updateAvatarWithUserId:(NSInteger)userId avatar:(NSString *)avatar;
///更新User表中nickName(更改昵称)
+ (BOOL)updateNickNameWithUserId:(NSInteger)userId nickName:(NSString *)nickName;
///更新User表中sex(更改性别)
+ (BOOL)updateSexWithUserId:(NSInteger)userId sex:(NSString *)sex;
///更新User表中sigNature(更改个性签名)
+ (BOOL)updateSigNatureWithUserId:(NSInteger)userId sigNature:(NSString *)sigNature;
///更新用户钱包地址跟公钥
+ (BOOL)updateUserAddressAndPublicKeyWithUserModel:(JFUserModel *)userModel;
///查询User用户信息
+ (JFUserModel *)selectUserWithUserId:(NSInteger)userId;
//查询Friend用户信息
+ (JFFriendModel *)friendModelWithUserId:(NSInteger)userId;
///获取钱包地址
+ (NSString *)selectEthAddressWithUserId:(NSInteger)userId;

#pragma mark - JFFriendModel
///向Friends和User表中插入数据
+ (void)insertIntoFriendsAndUserWithFriendModelArray:(NSMutableArray *)friendModelArray;
///更新Friends表中isTop和isBother
+ (BOOL)updateFriendsTopAndBotherWithFriendModel:(JFFriendModel *)friendModel;
///更新Friends表中remark（备注名称）
+ (BOOL)updateFriendsRemarkWithFriendModel:(JFFriendModel *)friendModel;
///更新Friends表中的enable(删除好友)
+ (BOOL)updateFriendsEnableWithLoginUserId:(NSInteger)loginUserId friendId:(NSInteger)friendId;
///更新User表和Friends表中enable(是否关注应用号)
+ (BOOL)updateUserAndFriendsEnableWithUserId:(NSInteger)userId enable:(NSInteger)enable;
///根据loginUserId和type获取Friends表和User表中信息(返回的remark字段经过优先级处理)
+ (NSMutableArray *)selectFriendsAndUserInforWithLoginUserId:(NSInteger)loginUserId userType:(NSUInteger)userType;
///根据loginUserId和userId获取Friends表和User表中信息(返回的remark字段经过优先级处理)
+ (JFFriendModel *)selectFriendsAndUserInforWithLoginUserId:(NSInteger)loginUserId userId:(NSInteger)userId;

#pragma mark - JFNewFriendModel
///向NewFriend表中添加数据
+ (BOOL)insertIntoNewFriendWithNewFriendModel:(JFNewFriendModel *)newFriendModel;
///更新NewFriend表数据（state和time）
+ (BOOL)updateNewFriendWithNewFriendModel:(JFNewFriendModel *)newFriendModel;
///根据loginUserId和userId查询NewFriend数据
+ (JFNewFriendModel *)selectNewFriendInfro:(NSInteger)loginUserId userId:(NSInteger)userId;
///根据loginUserId查询NewFriend和User表中的数据
+ (NSMutableDictionary *)selectNewFriendAndUserWithLoginUserId:(NSInteger)loginUserId;

#pragma mark - JFGroupsModel
///向Groups里插入数据（插入二维码扫描后的群组）
+ (BOOL)insertIntoGroupWithGroupModel:(JFGroupsModel *)groupModel;
///向Groups、GroupUsers和MyGroup表中插入数据(创建群组)
+ (BOOL)createChatGroupWithGroupModel:(JFGroupsModel *)groupModel groupUserModelArray:(NSMutableArray *)groupUserModelArray;
///向Groups 和 MyGroup表中插入数据(获取群列表时)
+ (void)addChatGroupWithGroupModelArray:(NSMutableArray *)groupModelArray;
///更新Groups表中groupName(更换组名)
+ (BOOL)updateGroupsGroupNameWithGroupId:(NSInteger)groupId groupName:(NSString *)groupName;
///更新Groups表中avatar(更换群头像)
+ (BOOL)updateGroupsAvatarWithGroupId:(NSInteger)groupId avatar:(NSString *)avatar;
///更新MyGroup表中isTop和isBother
+ (BOOL)updateMyGroupTopAndBotherWithGroupsModel:(JFGroupsModel *)groupsModel;
///更新GroupUsers、Groups、MyGroup(自己退群)
+ (BOOL)outGroupWithGroupId:(NSInteger)groupId userId:(NSInteger)userId;
///根据groupId查询MyGroup表中的信息
+ (JFGroupsModel *)selectMyGroupInfoWithGroupId:(NSInteger)groupId;
///根据loginUserId查询MyGroup表中的信息
+ (NSMutableArray *)selectMyGroupInfoWithLoginUserId:(NSInteger)loginUserId;
///根据groupId查询Groups表中的信息
+ (JFGroupsModel *)selectGroupsInfoWithGroupId:(NSInteger)groupId;
///根据loginUserId查询Groups表中的信息
+ (NSMutableArray *)selectGroupsInfoWithLoginUserId:(NSInteger)loginUserId;
///根据groupId查询Groups和MyGroup表中信息
+ (JFGroupsModel *)selectGroupAndMyGroupInfoWithGroupId:(NSInteger)groupId;
///根据groupId和loginUserId查询MyGroup、Groups和GroupUsers表中的信息
+ (NSMutableDictionary *)selectMyGroupAndGrooupAndGroupUsersWithGroupId:(NSInteger)groupId loginUserId:(NSInteger)loginUserId;

#pragma mark - JFGroupUserModel
///向GroupUsers表中添加成员(不涉及操作user表)
+ (BOOL)insertIntoGroupUserWithGroupUserModel:(JFGroupUserModel *)groupUserModel;
///获取群成员时，同时操作GroupUsers和user表
+ (void)insertOrReplaceGroupUserAndUserWithGroupUserModelArray:(NSMutableArray *)groupUserModelArray;
///更新GroupUsers表中的note(群昵称)
+ (BOOL)updateGroupUsersNoteWithGroupUserModel:(JFGroupUserModel *)groupUserModel;
///更新GroupUsers表中的groupUserType(群职称)
+ (BOOL)updateGroupUsersGroupUserTypeWithGroupUserModel:(JFGroupUserModel *)groupUserModel;
///移除群成员时，同时操作GroupUsers和GroupNotice表
+ (BOOL)updateGroupUsersAndGroupNoticeEnableWithGroupId:(NSInteger)groupId userId:(NSInteger)userId;
///根据groupId获取群成员数量
+ (NSInteger)selectGroupUsersCountWithGroupId:(NSInteger)groupId;
///根据groupId查询群组全部成员的全部信息(返回的note字段经过优先级处理)
+ (NSMutableArray *)selectGroupUsersInforGroupId:(NSInteger)groupId;
///根据groupId和userId查询群组单个成员的全部信息(返回的note字段经过优先级处理)
+ (JFGroupUserModel *)selectGroupUsersInforWithGroupId:(NSInteger)groupId userId:(NSInteger)userId;

#pragma mark - JFGroupNoticeModel
///向GroupNotice表中插入数据
+ (BOOL)insertIntoGroupNoticeWithGroupNoticeModel:(JFGroupNoticeModel *)groupNoticeModel;
///更新GroupNotice表中isRead（设置为已读）
+ (BOOL)updateGroupNoticeisRead;
///更新GroupNotice表中成员状态（删除群成员时）
+ (BOOL)updateGroupNoticeWhenDeleteGroupUserWithGroupId:(NSInteger)groupId userId:(NSInteger)userId;
/// 同意加入群之后 往 GroupUsers表中插 同时更新 GroupNotice
+ (BOOL)agreedJoinGroupUpdateGroupUsersWithGroupId:(NSInteger)groupId userId:(NSInteger)userId;
///根据groupId和userId查询GroupNotice表中信息
+ (JFGroupNoticeModel *)selectGroupNoticeInfoWithGroupId:(NSInteger)groupId userId:(NSInteger)userId;
///查询GroupNotice表中所有的数据
+ (NSMutableArray *)selectGroupNoticeAllInfo;

#pragma mark - EFChatListModel
///存储聊天列表--数组
+ (void)saveChat_ListToDataBase:(NSMutableArray *)chatListArray;
///存储聊天列表--单条形式
+ (void)saveChatListToDataBaseBySingle:(EFChatListModel *)chatListModel;
///更新ChatList表中unreadcount(未读数目)
+ (BOOL)updateChatListNnReadCountWithChatListModel:(EFChatListModel *)chatListModel;
///更新ChatList表中enable(删除消息)
+ (BOOL)updateChatListEnableWithChatListModel:(EFChatListModel *)chatListModel;
///根据loginUserId读取消息列表信息
+ (NSMutableDictionary *)dataFromChatListWithUserId:(NSInteger)loginUserId;

#pragma mark - IMStructMessage
///将Cell高度存入表中
+ (void)insertIntoMessageCellHeightWithMsgID:(NSString *)msgID cellHeight:(NSString *)height;
///将消息存入message表中
+ (void)insertIntoMessageWithIMStructMessage:(IMStructMessage *)message;
///更新message表中enable字段（删除消息）
+ (BOOL)updateMessageEnableWithIMStructMessage:(IMStructMessage *)message;
///更新消息内容
+ (BOOL)updateMessageWithMessageId:(NSString *)messageID message:(NSString *)message;
///从Message表中查询未读信息
+ (NSMutableArray *)selectUnreadMessageFromMessage:(NSInteger)fromUserID toUserID:(NSInteger)toUserID;
///获取Cell的高度
+ (NSString *)selectCellHeightWithMsgID:(NSString *)msgID;
///根据userId获取用户最后一条消息信息
+ (IMStructMessage *)selectUserLastMessageWithUserId:(NSString *)userId;
///根据messageID获取消息信息
+ (IMStructMessage *)selectMessageWithMessageID:(NSString *)messageID;
/// 单聊 从Message表 中读取 信息 ，返回按时间排好序的数组(升序) count为 查询的条数
+ (NSMutableArray *)selectMessageFromMessage:(NSInteger)fromUserID withtoUserID:(NSInteger)toUserID messageCount:(NSInteger)count messageId:(NSString *)messageId;
/// 群聊 从Message表中读取信息
+ (NSMutableArray *)selectMessageToGroupID:(NSInteger)toGroupID messageCount:(NSInteger)count withMessageId:(NSString *)messageId;

///根据userId，groupId返回该用户的信息(包含User表，Friend表，GroupUser表)
+(NSMutableArray *)userNameWithUserId:(NSInteger)userId groupId:(NSInteger)groupId;

//根据loginUserId获取通讯录好友列表
+ (NSMutableArray *)selectFriendsListWithLoginUserId:(NSInteger)loginUserId;

@end

