//
//  JFSecretPasswordTipController.h
//  ESPChatComps
//
//  Created by 王胜利 on 2018/5/10.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  加密消息解密密码提示View

#import <UIKit/UIKit.h>

typedef void(^VoidBlock)(void);

@interface JFSecretPasswordTipController : UIViewController

/// 显示提示View
+ (instancetype)showTipWithComplete:(VoidBlock)complete;

@end
