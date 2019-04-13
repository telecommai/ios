//
//  JFRedPacketHttpManager.h
//  WalletManager
//
//  Created by 董艳武 on 2019/2/18.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFRedPacketHttpManager : NSObject

/**
 获取红包记录

 @param userId 用户ID
 @param page 第几页
 @param pageSize 每页有几条记录
 @param type 类型 1、我收到的 2、我发出的
 @param success 成功
 @param failure 失败
 */
+(void)requestForPackedRecordWittUserId:(NSString *)userId
                                   page:(NSString *)page
                               pageSize:(NSString *)pageSize
                                   type:(NSString *)type
                                success:(void (^)(id responseObject))success
                                failure:(void(^)(NSString *error))failure;


/**
 发送红包

 @param params 参数Z字典
 @param success 失败的回调
 @param failure 成功的回调
 */
+(void)requestForSendRedPacketParams:(NSDictionary *)params
                             success:(void (^)(id responseObject))success
                             failure:(void(^)(NSString *error))failure;


/**
 抢红包

 @param userId 用户ID
 @param trusteeshipCoinId 代币id
 @param packetId 红包id
 @param imUserId 用户即时通讯id
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForGrabRedPacketWithUserId:(NSString *)userId
                       trusteeshipCoinId:(NSString *)trusteeshipCoinId
                                packetId:(NSString *)packetId
                                imUserId:(NSString *)imUserId
                                 success:(void (^)(id responseObject))success
                                 failure:(void(^)(NSString *error))failure;


/**
红包记录

 @param userId 用户ID
 @param packetId 红包ID
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForPackedStateWittUserId:(NSString *)userId
                              packetId:(NSString *)packetId
                               success:(void (^)(id responseObject))success
                               failure:(void(^)(NSString *error))failure ;
@end

NS_ASSUME_NONNULL_END
