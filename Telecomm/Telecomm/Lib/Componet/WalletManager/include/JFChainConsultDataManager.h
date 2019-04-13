//
//  JFChainConsultDataManager.h
//  WalletManager
//
//  Created by 董艳武 on 2018/12/12.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^RequestSuccessCallBack)(id);
typedef void(^RequestFailureCallBack)(NSError *);

@interface JFChainConsultDataManager : NSObject
/**
 请求询证函列表

 @param userId 用户id
 @param success 成功
 @param failure 失败
 */
+(void)requestForConfirmationListWithUserId:(NSString *)userId
                                    success:(RequestSuccessCallBack)success
                                    failure:(RequestFailureCallBack)failure;
/**
 获取用户所在单位
 
 @param userId 用户id
 @param success 成功
 @param failure 失败
 */
+(void)requestGetCompanyWithUserId:(NSString *)userId
                           success:(RequestSuccessCallBack)success
                           failure:(RequestFailureCallBack)failure;

/**
 根据单位Id获取单位信息
 
 @param companyId 单位id
 @param success 成功
 @param failure 失败
 */
+(void)requestGetCompanyInfoWithId:(NSString *)companyId
                           success:(RequestSuccessCallBack)success
                           failure:(RequestFailureCallBack)failure;

/**
 审计机构和企业上传询证加密数据（银行上传回复内容的加密信息）到ipfs，返回ipfs产生的hash
 @param success 成功
 @param failure 失败
 */
+(void)requestUpLoadIpfsContentWithConfirmationId:(NSString *)confirmationId
                                      ipfsContent:(NSString *)ipfsContent
                                           userId:(NSString *)userId
                                          success:(RequestSuccessCallBack)success
                                          failure:(RequestFailureCallBack)failure;

/**
 审计事务签名
 @param success 成功
 @param failure 失败
 */
+(void)requestAuditSignEthWithSignedTransactionData:(NSString *)signedTransactionData
                                     confirmationId:(NSString *)confirmationId
                                             userId:(NSString *)userId
                                            success:(RequestSuccessCallBack)success
                                            failure:(RequestFailureCallBack)failure;

/**
 银行回复
 @param success 成功
 @param failure 失败
 */
+(void)requestBankSignEthWithSignedTransactionData:(NSString *)signedTransactionData
                                    confirmationId:(NSString *)confirmationId
                                            userId:(NSString *)userId
                                  bankRelayContent:(NSString *)bankRelayContent
                                           success:(RequestSuccessCallBack)success
                                           failure:(RequestFailureCallBack)failure;

/**
 企业签名
 @param success 成功
 @param failure 失败
 */
+(void)requestEnterpriseSignEthWithSignedTransactionData:(NSString *)signedTransactionData
                                          confirmationId:(NSString *)confirmationId
                                                  userId:(NSString *)userId
                                                 success:(RequestSuccessCallBack)success
                                                 failure:(RequestFailureCallBack)failure;


@end

NS_ASSUME_NONNULL_END
