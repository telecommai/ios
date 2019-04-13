//
//  TCPasswordController.h
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/14.
//  Copyright © 2018年 wsl. All rights reserved.
//  重置密码

#import <UIKit/UIKit.h>



/**
 重置密码进入方式

 - ResetPasswordFromLogin: 登录的时候
 - ResetPasswordFromApp: 应用内
 */
typedef NS_ENUM(NSUInteger, ResetPasswordFrom) {
    ResetPasswordFromLogin,
    ResetPasswordFromApp,
};

@interface TCResetPasswordController : UIViewController

/// 手机号（或者邮箱）
@property (nonatomic, copy) NSString *phone;

/// 账号类型 0:手机号 1:邮箱
@property (nonatomic, assign) NSInteger accountType;

@property (assign,nonatomic) ResetPasswordFrom from;

@end
