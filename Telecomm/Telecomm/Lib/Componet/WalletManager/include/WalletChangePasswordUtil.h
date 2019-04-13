//
//  WalletChangePasswordUtil.h
//  WalletManager
//
//  Created by 王胜利 on 2018/6/21.
//  Copyright © 2018年 pansoft. All rights reserved.
//  修改密码封装
//

#import <Foundation/Foundation.h>
#import "WalletModel.h"
#import "Constant.h"
#import <ethers/WalletManager.h>
#import <ethers/Wallet.h>
#import <ethers/CloudKeychainSigner.h>
#import <ethers/Account.h>

@interface WalletChangePasswordUtil : NSObject

+ (void)reAddWalletWithOldPassoword:(NSString *)oldPassword newPassword:(NSString *)newPassword complete:(SuccessBlock)complete;

@end
