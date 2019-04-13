//
//  AESUtil.h
//  ESPChatComps
//
//  Created by 王胜利 on 2018/5/5.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonKeyDerivation.h>

@interface AESUtil : NSObject
/// 加密文本(密信)
+ (NSString *)encryptAES:(NSString *)content password:(NSString *)password;
/// 解密文本(密信)
+ (NSString *)decryptAES:(NSString *)content password:(NSString *)password;
/// 加密Data(密图、密件)
+ (NSData *)encryptAESData:(NSData *)data password:(NSString *)password;
/// 解密Data(密图、密件)
+ (NSData *)decryptAESData:(NSData *)data password:(NSString *)password;

@end
