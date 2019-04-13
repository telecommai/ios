//
//  TCInputPasswordController.h
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/10.
//  Copyright © 2018年 wsl. All rights reserved.
//  2.密码登录(老用户)

#import <UIKit/UIKit.h>

@interface TCInputPasswordController : UIViewController

/// 账号类型 0:手机号 1:邮箱
@property (nonatomic, assign) NSInteger accountType;
/// 账号(手机号或邮箱)
@property (nonatomic, copy) NSString *account;

@end
