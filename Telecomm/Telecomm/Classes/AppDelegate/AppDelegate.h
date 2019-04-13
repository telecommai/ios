//
//  AppDelegate.h
//  OpenPlanet
//
//  Created by Javor on 16/3/16.
//  Copyright (c) 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFChatLeftViewController.h"


#define LOGIN_STEP @"loginStep"

typedef NS_ENUM(NSUInteger, LoginStep) {
    /// 注册步骤
    /// 1.默认状态(跳转输入手机号页面)
    LoginStepDefault,
    /// 2.注册未设置头像(跳转设置头像界面)
    LoginStepNoAvatar,
    /// 3.注册未设置通讯录(跳转导入通讯录界面)
    LoginStepNoFans,
    /// 4.登录成功(跳转主界面)
    LoginStepLoginSuccess,
};



@class MainTabBarController;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, strong) MainTabBarController *tabbarController;
@property (nonatomic, strong) EFChatLeftViewController *left;
@property (nonatomic, assign) BOOL isSystemShare;
@property (nonatomic, assign) BOOL allowRotate;
//进入App后展示的推荐页，默认Yes，展示
@property (nonatomic, assign) BOOL isAlertShow;

/// 根据登录步骤去上次没完成的界面
- (void)goLastStepControllerByLoginStep;
/// 去主界面（默认有启动图）
- (void)goMainView;
- (void)goMainViewWithAlertShow:(BOOL)isAlertShow;
/// 退出登录
- (void)logout;

@end

