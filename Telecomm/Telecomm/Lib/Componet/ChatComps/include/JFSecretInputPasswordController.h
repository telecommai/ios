//
//  JFDecryptionController.h
//  ESPChatComps
//
//  Created by YRH on 2018/5/5.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  加密消息解密输入密码


#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

typedef void(^CompleteBlock)(NSString *password);

@interface JFSecretInputPasswordController : UIViewController

/// 弹出输入密码组件
+ (instancetype)showWithComplete:(CompleteBlock)complete;

@end
