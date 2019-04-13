//
//  OpenWalletHttpManager.h
//  OpenPlanet
//
//  Created by 谢虎、王胜利 on 2018/6/9.
//  Copyright © 2018年 wsl. All rights reserved.
//  钱包接口请求类
//

#import <Foundation/Foundation.h>
#import "Constant.h"
#import "WalletHeader.h"
#import "WalletModel.h"
#import "BTCModel.h"
#import "WalletUtil.h"

@interface WalletHttpManager : NSObject

/// 获取链列表
+ (void)walletHttpForChainistSuccess:(SuccessBlock)success failure:(FailBlock)failure;

/**
 维护用户代币关系
 
 @param chainType 代币所属链类型
 @param tokenID 代币编号
 @param userAddress 用户钱包地址
 @param type 0是取消关注此代币 1关注此代币
 */
+ (void)walletHttpForUpdateUserTokenWithChainType:(BlockChainType)chainType
                                          tokenID:(NSString *)tokenID
                                      userAddress:(NSString *)userAddress
                                             type:(NSString *)type
                                          success: (SuccessBlock)success
                                          failure:(void(^)(NSString *error))failure;

/**
 根据链编号与钱包地址获取所有代币列表
 
 @param chainType 代币所属链类型
 @param userAddress 用户钱包地址
 */
+ (void)allTokenWithChainType:(BlockChainType)chainType
                                       userAddress:(NSString *)userAddress
                                           success: (void(^)(NSArray <WalletTokenModel *>*))success
                                           failure:(void(^)(NSString *error))failure;

/**
 根据链编号与钱包地址获取关注的代币列表（包括代币余额）
 
 @param chainType 代币所属链类型
 @param userAddress 用户钱包地址
 */
+ (void)walletHttpForLikeTokenListWithChainType:(BlockChainType)chainType
                                    userAddress:(NSString *)userAddress
                                        success: (SuccessBlock)success
                                        failure:(void(^)(NSString *error))failure;



/// 添加钱包
+ (void)addSubWalletWithWalletModel:(WalletModel *)walletModel
                            success: (SuccessBlock)success
                            failure:(void(^)(NSString *error))failure;

/// 批量添加子钱包
+ (void)addSubWalletsWithWalletModels:(NSArray <WalletModel *> *)walletModels
                              success: (SuccessBlock)success
                              failure:(void(^)(NSString *error))failure;

/// 根据主钱包获取子钱包
+ (void)childWalletsWithMainAddress:(NSString *)mainAddress
                            success: (SuccessBlock)success
                            failure:(void(^)(NSString *error))failure;


/// 获取所有子钱包
+ (void)childWalletsWithMainAddress:(NSString *)mainAddress success:(void(^)(NSArray <WalletModel *>*))success fail:(FailBlock)fail;

/**
 更新子钱包信息
 
 @param walletAddress 钱包地址
 @param mainWalletAddress 主钱包地址
 @param otherParams 其他参数
 @param success 更新成功
 @param fail 更新失败
 */
+ (void)updateChildWalletInfoWithWalletAddress:(NSString *)walletAddress
                             mainWalletAddress:(NSString *)mainWalletAddress
                                   otherParams:(NSDictionary *)otherParams
                                       success:(SuccessBlock)success
                                          fail:(FailBlock)fail;


/// 删除子钱包
+ (void)deleteChildWalletWithWalletAddress:(NSString *)walletAddress
                         mainWalletAddress:(NSString *)mainWalletAddress
                                 chainType:(BlockChainType)chainType
                                   success:(SuccessBlock)success
                                      fail:(FailBlock)fail;


/// 更新通讯公钥(臧严科)
+ (void)updateComPublicKey:(NSString *)comPublicKey success:(SuccessBlock)success fail:(FailBlock)fail;
/// 查询通讯私钥(张明成)
+ (void)querySecretComPrivateKeyWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// 更新加密通讯私钥(张明成)
+ (void)updateSecretComPrivateKeyWithPublicKey:(NSString *)publicKey privateKey:(NSString *)privateKey success:(SuccessBlock)success fail:(FailBlock)fail;

/**
 钱包交易记录
 
 @param chainType 代币所属链类型
 @param walletAddress 用户钱包地址
 @param tokenId 用户钱包地址
 @param page 第几页，默认值1
 @param pagesize 每页记录数,默认值25
 @param type 类型1全部2转出3转入4失败
 @param success 成功
 @param fail 失败
 */
+ (void)walletTradeRecordWithChainType:(BlockChainType)chainType
                         walletAddress:(NSString *)walletAddress
                               tokenId:(NSString *)tokenId
                                  page:(NSString *)page
                              pageSize:(NSString *)pagesize
                                  type:(NSString *)type
                               success:(void(^)(NSArray <WalletTradeModel *>*datas))success
                                  fail:(FailBlock)fail;

/// 获取代币详细信息
+ (void)tokenInfoWithChainType:(BlockChainType)chainType
                 walletAddress:(NSString *)walletAddress
                       tokenId:(NSString *)tokenId
                       success:(SuccessBlock)success
                          fail:(FailBlock)fail;

@end

#pragma mark - PWR相关接口

@interface WalletHttpManager (PWR)

/// 查询单钱包账户余额(能量)
+ (void)pwrQueryBalanceWithAddress:(NSString *)address success:(SuccessBlock)success fail:(FailBlock)fail;
/// 查询多账户余额(能量)
+ (void)pwrQueryBalancesWithAddresses:(NSArray <NSString *>*)addresses success:(SuccessBlock)success fail:(FailBlock)fail;
/// 获取银钻数
+ (void)pwrQuerySilverDiamondNumWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;


@end

#pragma mark - ETH相关接口

@interface WalletHttpManager (ETH)


@end

#pragma mark - BTC相关接口

@interface WalletHttpManager (BTC)

/// btc获取单地址余额
+ (void)btcBalanceWithWalletAddress:(NSString *)walletAddress  success:(void(^)(BTCBalanceModel *))success fail:(FailBlock)fail;
/// btc获取多地址余额
+ (void)btcBalanceWithWalletAddresses:(NSArray<NSString *> *)walletAddresses success:(void(^)(NSArray<BTCBalanceModel *>*))success fail:(FailBlock)fail;

/// btc请求UTFOs(未花费的交易)
+ (void)btcUtfosWithWalletAddress:(NSString *)walletAddress  success:(void(^)(NSArray<BTCUTFOModel *>*))success fail:(FailBlock)fail;

/// btc发布交易并保存
+ (void)btcPulishTxSign:(NSString *)sign txhash:(NSString *)txHash toUserId:(NSString *)toUserId success:(SuccessBlock)success fail:(FailBlock)fail;

/// btc获取交易记录
+ (void)btcTradeInfoWithWalletAddress:(NSString *)walletAddress page:(NSUInteger)page pageSize:(NSUInteger)pageSize status:(NSString *)status  success:(void(^)(NSArray <WalletTradeModel *>*))success fail:(FailBlock)fail;
@end

#pragma mark - EOS相关接口

@interface WalletHttpManager (EOS)

/// eos恢复钱包通过account获取ownerPublicKey和activePublicKey
+ (void)eosGetAccountWithAccount:(NSString *)account success:(SuccessBlock)success fail:(FailBlock)fail;
/// eos根据owner公钥查询账户
+ (void)eosGetAccountWithOwnerPublicKey:(NSString *)ownerPublicKey activePublicKey:(NSString *)activePublicKey success:(void(^)(NSArray <NSString *>*))success fail:(FailBlock)fail;

/// eos请求余额
+ (void)eosBalanceWithAccount:(NSString *)account success:(SuccessBlock)success fail:(FailBlock)fail;

/// eos查询创建账户ram、new、cpu单价
+ (void)eosGetCreateAccountFeeUnitWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// eos请求Data
+ (void)eosActionDataWithParams:(NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;
/// eos获取最新区块信息
+ (void)eosGetInfoWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;
/// eos发布交易
+ (void)eosPushTransactionWithParams:(NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;
/// eos交易历史
+ (void)eosTradeInfoWithWalletAddress:(NSString *)walletAddress page:(NSUInteger)page pageSize:(NSUInteger)pageSize status:(NSString *)status  success:(void(^)(NSArray <WalletTradeModel *>*))success fail:(FailBlock)fail;

@end


/// MARK: - 总资产
@interface WalletHttpManager (TotalAsset)

+ (void)totalAssetWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;

@end
