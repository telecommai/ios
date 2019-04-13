//
//  EOSCreateController.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//  EOS创建双私钥(未激活状态)
//

#import <UIKit/UIKit.h>
#import "WalletModel.h"

@interface EOSCreateKeyController : UIViewController

/// 创建EOS钱包初始化数据
+ (instancetype)eosCreateWithWalletName:(NSString *)name wallletAvatar:(NSString *)avatar;
/// 存在未激活的EOS钱包初始化诗句
+ (instancetype)eosCreateWithWalletModel:(WalletModel *)wallet;

@end
