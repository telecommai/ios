//
//  JFCardHttpManager.h
//  WalletManager
//
//  Created by 董艳武 on 2018/9/19.
//  Copyright © 2018年 pansoft. All rights reserved.
//  积分卡页面网络请求

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "Constant.h"

/// 请求成功的回调
typedef void(^RequestSuccessCallBack)(id);

/// 请求失败的回调
typedef void(^RequestFailureCallBack)(NSError *);

@interface JFCardHttpManager : NSObject

/**
 卡片信息的网络请求

 @param phoneNumber 手机号
 @param success 请求成功的回调
 @param faliure 请求失败的回调
 */
+(void)requestForCardInfoWithPhoneNumber:(NSString *)phoneNumber
                                 success:(RequestSuccessCallBack)success
                                 failure:(RequestFailureCallBack)faliure;

/**
 积分卡充值下单

 @param phoneNumber 手机号
 @param payType 充值类型
 @param coinNumber 充值金额
 @param cardId 卡号
 @param success 请求成功的回调
 @param faliure 请求失败的回调
 */
+(void)requestForCardRechargePhoneNumber:(NSString *)phoneNumber
                                 payType:(NSString *)payType
                              coinNumber:(NSString *)coinNumber
                                  cardId:(NSString *)cardId
                                 success:(RequestSuccessCallBack) success
                                 failure:(RequestFailureCallBack) faliure;


/**
 获取充值比率

 @param cardId 积分卡ID
 @param success 请求成功的回调
 @param faliure 请求失败的回调
 */
+(void)requestForCardRateWithCardId:(NSString *)cardId
                            success:(RequestSuccessCallBack) success
                            failure:(RequestFailureCallBack) faliure;


/// 请求积分卡余额
+ (void)requestCardBalanceWithCardId:(NSString *)cardId
                             success:(SuccessBlock)success
                                fail:(FailBlock)fail;

@end
