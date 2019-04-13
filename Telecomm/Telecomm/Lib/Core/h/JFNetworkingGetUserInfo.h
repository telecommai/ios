//
//  JFNetworkingGetUserInfo.h
//  ESPChatComps
//
//  Created by YRH on 2018/5/2.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

/*
 获取用户信息，带钱包地址信息
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JFNetworkingGetUserInfo : NSObject

+ (void)getUserEthAddressWithIMUserId:(NSString *)imUserId Success:(void(^)(NSString *ethAddress))userEthAddress fail:(void(^)(NSString *error))fail;

@end
