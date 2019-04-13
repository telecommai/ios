//
//  ETHManager.h
//  WalletManager
//
//  Created by 王胜利 on 2018/8/6.
//  Copyright © 2018年 pansoft. All rights reserved.
//  ETH管理器
//

#import <Foundation/Foundation.h>
#import <ethers/CloudKeychainSigner.h>
#import <ethers/JFArgument.h>
#import "BlockChainManager.h"

@interface ETHManager : NSObject


/**
 返回签名Data

 @param args arg参数
 @param func 方法名
 @return 签名data
 */
+ (NSData *)contractTransferDataWithArgs:(NSArray *)args func:(NSString *)func;

// 普通转账签名
+ (NSString *)signWithType:(BlockChainType)chainType
                    signer:(CloudKeychainSigner *)signer
                 toAddress:(NSString *)toAddress
                     nonce:(NSString *)nonce
                       gas:(NSString *)gas
                     money:(NSString *)money;

// 合约转账签名
+ (NSString *)constractSignWithType:(BlockChainType)chainType
                             signer:(CloudKeychainSigner *)signer
                   constractAddress:(NSString *)constractAddress
                              nonce:(NSString *)nonce
                                gas:(NSString *)gas
                               data:(NSData *)data;



/// MARK: - 以下是合约的Data
/// ETH、PWR合约交易Data(toAddress 收款地址(非合约地址constractAddress),money 转账金额)
+ (NSData *)transactionDataWithToAddress:(NSString *)toAddress money:(NSString *)money;





@end




@interface JFArgument (Category)

+ (instancetype)argWithType:(NSInteger)type value:(id)value;

@end

