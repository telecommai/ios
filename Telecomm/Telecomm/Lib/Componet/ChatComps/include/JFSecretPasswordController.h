//
//  JFSecretShowPasswordController.h
//  ESPChatComps
//
//  Created by YRH on 2018/5/5.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  加密消息解密显示密码控制器

#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

typedef void(^CompleteBlock)(NSString *password);

@interface JFSecretPasswordController : UIViewController

+ (instancetype)showWithIMStructMessage:(IMStructMessage *)structMessage decryptPassword:(NSString *)decryptPassword complete:(CompleteBlock)complete;

@end
