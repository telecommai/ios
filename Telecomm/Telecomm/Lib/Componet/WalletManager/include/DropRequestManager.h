//
//  DropRequestManager.h
//  WalletManager
//
//  Created by StarLord on 2018/8/9.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^SuccessCompletionHandle)(id result);
typedef void(^FailureCompletionHandle)(NSString *errorString);
@interface DropRequestManager : NSObject

/// 获取空投场列表
+ (void)requestDropListWithPage:(NSInteger)page pagesize:(NSInteger)pagesize success:(SuccessCompletionHandle)success failure:(FailureCompletionHandle)failure;

/// 获取空投详情
+ (void)requestDropDetailWithId:(NSInteger)dropId success:(SuccessCompletionHandle)success failure:(FailureCompletionHandle)failure;

/// 抢币
+ (void)robCoinWithAddress:(NSString *)address userId:(NSString *)userId coinName:(NSString *)coinName airdropId:(NSString *)airdropId organization:(NSString *)organization picture:(NSString *)picture success:(SuccessCompletionHandle)success failure:(FailureCompletionHandle)failure;

/// 我的空投
+ (void)requestMyDropListWithUserId:(NSString *)userId success:(SuccessCompletionHandle)success failure:(FailureCompletionHandle)failure;

@end
