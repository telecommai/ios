//
//  TCSMSController.h
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/10.
//  Copyright © 2018年 wsl. All rights reserved.
//  验证码控制器(支持注册、验证码登录、验证码修改密码三种模式)
//  注册：3.校验验证码
//  登录：3.验证码登录

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    /// 注册
    TCSMSTypeRegister = 0,
    /// 忘记密码
    TCSMSTypeForgetPassword
} TCSMSType;


@interface TCSMSController : UIViewController

/// 控制器类型
@property (nonatomic, assign) TCSMSType type;
/// 手机号
@property (nonatomic, copy) NSString *phone;
/// 邀请码
@property (nonatomic, copy) NSString *inviteCode;
/// 星球英文名
@property (nonatomic, copy) NSString *planetEnName;

@end
