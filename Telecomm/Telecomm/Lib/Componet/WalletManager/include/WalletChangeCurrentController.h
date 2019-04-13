//
//  WalletListController.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/8.
//  Copyright © 2018年 wsl. All rights reserved.
//  切换钱包
//

#import <UIKit/UIKit.h>
#import "BlockChainManager.h"

@interface WalletChangeCurrentController : UIViewController

@property (nonatomic, assign) BlockChainType chainType;

@end
