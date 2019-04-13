//
//  SurePasswordAlert.h
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/15.
//  Copyright © 2018年 wsl. All rights reserved.
//  确认密码弹窗
//

#import <UIKit/UIKit.h>

@interface SurePasswordAlert : UIViewController

+ (instancetype)showWithSuperVc:(UIViewController *)superVc subTitle:(NSString *)subTitle isRight:(void(^)(NSString *password))isRight;

@end
