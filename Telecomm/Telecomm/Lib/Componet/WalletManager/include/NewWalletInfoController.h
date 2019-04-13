//
//  NewWalletInfoController.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/9.
//  Copyright © 2018年 wsl. All rights reserved.
//  创建钱包填写头像、名称界面
//

#import <UIKit/UIKit.h>
#import "WalletHeader.h"

@interface NewWalletInfoController : UIViewController

/// 添加\导入
@property (nonatomic, assign) AddWalletType addWalletType;
/// 钱包所属链类型
@property (nonatomic, assign) BlockChainType chainType;

@end
