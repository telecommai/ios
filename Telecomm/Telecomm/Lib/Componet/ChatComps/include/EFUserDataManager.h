//
//  EFUserDataManager.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/5/14.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PersonModel.h"
@interface EFUserDataManager : NSObject

//根据model组织要展示的数据结构
+(NSArray *)dataSourceWithModel:(PersonModel *)model;

//根据userid判断跟当前用户的关系
+(BOOL)isFriendWithUserId:(NSString *)friendUserId;

//根据userId将数据插入到newfriend表
+(void)insertNewFriendToDatabaseWithUserId:(NSString *)friendId message:(NSString *)leaveMessage;

//插入数据到user表
+(void)insertIntoUserDatabase:(NSDictionary*)userDic;

//根据userid获取用户信息
+(void)modelWithUserId:(NSInteger)userId success:(void (^)(id))success failure:(void (^)(NSString *))failure;

+(void)refreshUserDataWithUserId:(NSString *)userId success:(void (^)(id))success failure:(void (^)(NSString *))failure;
@end

