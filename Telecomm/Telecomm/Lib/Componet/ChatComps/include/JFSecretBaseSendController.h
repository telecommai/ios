//
//  JFSecretBaseSendController.h
//  ESPChatComps
//
//  Created by 王胜利 on 2018/5/8.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFSecretPasswordView.h"
#import "PersonModel.h"

@interface JFSecretBaseSendController : UIViewController

/// 密信输入框
@property (nonatomic, strong) JFSecretPasswordView *passwordView;
/// 公钥
@property (nonatomic, strong) NSString *publicKey;

/// 右上角发送按钮事件
- (void)sendAction;

/// 更新用户信息
- (void)updateUserInfoWithSuccess:(void(^)(PersonModel *personModel))success;
@end
