//
//  JFAccountHttpManager.h
//  WalletManager
//
//  Created by 董艳武 on 2019/2/18.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFAccountHttpManager : NSObject


/**
 托管账户列表

 @param userId 用户ID
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForAccountListWithUserId:(NSString *)userId
                               success:(void (^)(id responseObject))success
                               failure:(void(^)(NSString *error))failure;


/**
 h交易记录

 @param userId 用户ID
 @param page 页码
 @param pageSize 每页有几条记录
 @param trusteeshipCoinId 代币id
 @param type 类型
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForManageAccountTradeHistoryUserId:(NSString *)userId
                                            page:(NSString *)page
                                        pageSize:(NSString *)pageSize
                               trusteeshipCoinId:(NSString *)trusteeshipCoinId
                                            type:(NSString *)type
                                         success:(void (^)(id responseObject))success
                                         failure:(void(^)(NSString *error))failure;

/**
 获取资产列表

 @param userId 用户ID
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForCoinListWittUserId:(NSString *)userId
                            success:(void (^)(id responseObject))success
                            failure:(void(^)(NSString *error))failure;

/**
 增加资产

 @param userId 用户ID
 @param trusteeshipCoinId 代币ID
 @param type 类型
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForAddCoinWithUserId:(NSString *)userId
                 trusteeshipCoinId:(NSString *)trusteeshipCoinId
                              type:(NSString *)type
                           success:(void (^)(id responseObject))success
                           failure:(void(^)(NSString *error))failure;


/**
 资产余额

 @param chainId 链id
 @param accountAddress 账户地址
 @param coinAddress 币地址
 @param coinDecimals 精度值
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForBalanceWithChainId:(NSString *)chainId
                     accountAddress:(NSString *)accountAddress
                        coinAddress:(NSString *)coinAddress
                       coinDecimals:(NSInteger)coinDecimals
                            success:(void (^)(id responseObject))success
                            failure:(void(^)(NSString *error))failure;


/**
 提现

 @param signedTransactionData 认证交易数据
 @param userId 用户id
 @param trusteeshipCoinId 代币id
 @param value 数量
 @param txTo 16进制
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForBalanceWithsignedTranSactionData:(NSString *)signedTransactionData
                                           userId:(NSString *)userId
                                trusteeshipCoinId:(NSString *)trusteeshipCoinId
                                            value:(NSString *)value
                                             txTo:(NSString *)txTo
                                          success:(void (^)(id responseObject))success
                                          failure:(void(^)(NSString *error))failure;


/**
 充值

 @param userId 用户id
 @param trusteeshipId 代币id
 @param signedTransactionData 认证交易数据
 @param value 数量
 @param from 来自
 @param txFrom 16进制来自
 @param txTo 给
 @param success 成功的回调
 @param failure 失败的回调
 */
+(void)requestForRechargeWithUserId:(NSString *)userId
                      trusteeshipId:(NSInteger)trusteeshipId
              signedTransactionData:(NSString *)signedTransactionData
                              value:(float)value from:(NSString *)from
                             txFrom:(NSString *)txFrom
                               txTo:(NSString *)txTo
                            success:(void (^)(id responseObject))success
                            failure:(void(^)(NSString *error))failure;
@end

NS_ASSUME_NONNULL_END
