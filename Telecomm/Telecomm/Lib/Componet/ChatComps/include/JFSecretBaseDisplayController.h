//
//  JFSecretBaseDisplayController.h
//  ESPChatComps
//
//  Created by 王胜利 on 2018/5/8.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

@interface JFSecretBaseDisplayController : UIViewController


/// 初始化密信、密图、密件
- (instancetype)initWithMessage:(IMStructMessage *)message password:(NSString *)password;

/// 解密后的密码
@property (nonatomic,strong ) NSString *password;
/// 消息体
@property (nonatomic,strong ) IMStructMessage *message;
/// 消息内容JSON
@property (nonatomic,strong ) NSDictionary *messageContent;
/// 解密失败
- (void)decryptFail;

@end
