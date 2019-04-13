//
//  TCInputMemoryWordController.h
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/14.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCWalletTipController.h"

@interface TCInputMemoryWordController : UIViewController

/// 是否已经登录成功
@property (nonatomic, assign) WalletType type;
/// 密码
@property (nonatomic, copy) NSString *password;

@end
