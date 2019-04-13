//
//  TCChosePlanetController.h
//  
//
//  Created by YRH on 2018/4/20.
//  Copyright © 2018年 YRH. All rights reserved.
//  2.注册选择入驻星球
//

#import <UIKit/UIKit.h>

@interface TCChosePlanetController : UIViewController

/// 账号类型 0:手机号 1:邮箱
@property (nonatomic, assign) NSInteger accountType;
/// 账号(手机号或邮箱)
@property (nonatomic, copy) NSString *account;

@end
