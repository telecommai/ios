//
//  ETHManager+ChainConsult.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/7.
//  Copyright © 2019 pansoft. All rights reserved.
//  链上询证签名Data
//

#import "ETHManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETHManager (ChainConsult)

/// MARK: - 以下是签章合约Data
/// addCertification(新增一条银行询证信息合约Data)
+ (NSData *)addCertificationWithKey:(NSString *)key
                  enterpriseAddress:(NSString *)enterpriseAddress
                        bankAddress:(NSString *)bankAddress
                memoryAuditFirmIpfs:(NSString *)memoryAuditFirmIpfs
                memoryAuditFileHash:(NSString *)memoryAuditFileHash;

/// memoryAuditFirmIpfs(企业确认信息合约Data)
+ (NSData *)modifyByEnterpriseWithKey:(NSString *)key
                  memoryAuditFirmIpfs:(NSString *)memoryAuditFirmIpfs;
/// modifyByBank(银行确认信息合约Data)
+ (NSData *)modifyByBankWithKey:(NSString *)key
                 memoryBankIpfs:(NSString *)memoryBankIpfs
           memoryBankReFileHash:(NSString *)memoryBankReFileHash;

@end

NS_ASSUME_NONNULL_END
