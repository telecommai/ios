//
//  WalletTradeUtil+ChainConsult.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/7.
//  Copyright © 2019 pansoft. All rights reserved.
//  链上询证交易
//

#import "WalletTradeUtil.h"

NS_ASSUME_NONNULL_BEGIN

#define ETHConfirmationAddress  @"0x66e6f028296f40f005dd5d077847a60cf96f2782"

/// PWR银行询证参数配置
@interface ETHConfirmationConfig : NSObject

/// 密码
@property (nonatomic, copy) NSString *password;
/// 链类型
@property (nonatomic, assign) BlockChainType chainType;
/// 转出钱包
@property (nonatomic, strong) CloudKeychainSigner *signer;
/// 智能合约地址
@property (nonatomic, copy) NSString *constractAddress;
/// 旷工费用
@property (nonatomic, copy) NSString *gas;
/// key
@property (nonatomic, copy) NSString *key;
/// enterpriseAddress
@property (nonatomic, copy) NSString *enterpriseAddress;
/// bankAddress
@property (nonatomic, copy) NSString *bankAddress;
/// memoryAuditFirmIpfs
@property (nonatomic, copy) NSString *memoryAuditFirmIpfs;
/// memoryAuditFileHash
@property (nonatomic, copy) NSString *memoryAuditFileHash;
@property (nonatomic, copy) NSString *contentBody;

@end

@interface WalletTradeUtil (ChainConsult)

// MARK: - 银行询证签名
// MARK: addCertification(新增签名)
+ (void)chainConsultAddCertificationSignWithConfig:(ETHConfirmationConfig *)config success:(void(^)(NSString *sign))success fail:(FailBlock)fail;
// MARK: modifyByEnterprise(企业确认)
+ (void)chainConsultModifyByEnterpriseSignWithConfig:(ETHConfirmationConfig *)config success:(void(^)(NSString *sign))success fail:(FailBlock)fail;
// MARK: modifyByBank(银行确认)
+ (void)chainConsultModifyByBankSignWithConfig:(ETHConfirmationConfig *)config success:(void(^)(NSString *sign))success fail:(FailBlock)fail;



@end

NS_ASSUME_NONNULL_END
