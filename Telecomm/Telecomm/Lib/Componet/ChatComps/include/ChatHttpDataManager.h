//
//  ChatHttpDataManager.h
//  ESPChatComps
//
//  Created by 亦晴 on 2018/4/23.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  处理数据库中查找的数据

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface ChatHttpDataManager : NSObject


/*
 获取群组设置的图标信息
 */
- (void) httpRequestForSearchGroupIconConfigInfoWithGroupId:(NSString *)groupId GroupMenuArray:(NSArray *)groupMenuArray success:(void (^)(NSMutableArray *groupDetailsIconArray))success failure:(void (^)())failure;

/*
 群工作地址
 */
- (void) httpRequestForSearchGroupOfficeAddressWithGroupId:(NSString *)groupId success:(void (^)(NSMutableArray *dataArray))success;

/*
 判断是否是群主或者管理员
 */
- (void) roleFromGroupWithGroupId:(NSString *)groupId success:(void (^)(NSString *role))success;

/*
 修改群打卡地址
 */
- (void) httpRequestForAddGroupOfficeAddressWithDic:(NSDictionary *)dic GroupId:(NSString *)groupId success:(void (^)())success failure:(void (^)(NSString *error))failure;

/*
 修改群名
 */
- (void) httpRequestForUpGroupNameWithGroupId:(NSString *)groupId groupName:(NSString *)groupName success:(void (^)())success failure:(void (^)())failure;


/*
 修改群内备注名
 */
- (void) httpRequestForUpdataOwnRemarkInGroupWithGroupId:(NSString *)groupId ownRemark:(NSString *)remark success:(void (^)())success failure:(void (^)())failure;

/*
 判断是否是好友
 */
- (void) selectInfoFromDatabase:(NSString *)friendUserId success:(void (^)(BOOL isFriend))success;

/*
 删除群工作地址
 */
- (void) httpRequestForDeleteGroupOfficeAddressWithAddressArray:(NSArray *)addressArray specificAddress:(NSString *)specificAddress success:(void (^)(NSInteger row, NSArray *array))success;

/*
 退出或者解散群
 */
- (void) httpRequestForDissolveOrQuitGroupWithGroupId:(NSString *)groupId isCreator:(BOOL)isCreator success:(void (^)())success failure:(void (^)(NSString *error))failure;

/*
 更新数据库中的头像
 */
- (void) updateHeadImageToQN:(UIImage *)image WithName:(NSString *)name WithGroupId:(NSString *)groupId success:(void (^)(NSString *url))success failure:(void (^)(NSString *error))failure;

/*
 查找群头像
 */
- (void) selectGroupInfoWithGroupId:(NSString *)groupId WithHeadImageURL:(void (^)(NSString *headImageURL, UIImage *placeholderImage))success WithImage:(void (^)(UIImage *image))failure;

/*
 查询群组成员的全部信息
 */
- (void) selectGroupUsersInforWithGroup:(NSString *)groupId success:(void (^)(NSMutableArray *info))success failure:(void (^)(NSString *error))failure;

/*
 自己在本群的信息
 */
- (NSString *)selectSingleGroupUsersInfoWithGroupId:(NSString *)groupId;

/*
 拉取群成员信息，并存入数据库
 */
-(void)groupUsersWithUserId:(NSString *)userId passsWord:(NSString *)passsWord groupId:(NSString *)groupId success:(void (^)(id responseObject))success failure:(void (^)(NSString *error))failure;

/*
 修改英文名
 */
- (void) httpRequestForUpGroupEnglishNameWithGroupId:(NSString *)groupId groupName:(NSString *)groupName success:(void (^)(void))success failure:(void (^)(void))failure;


/*
 群工作地址
 */
- (void) httpRequestForSearchGroupOfficeAddressWithGroupId:(NSString *)groupId success:(void (^)(NSMutableArray *dataArray))success failure:(void(^)(NSString *)) failure;

@end
