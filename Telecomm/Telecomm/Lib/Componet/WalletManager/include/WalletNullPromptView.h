//
//  WalletNullPromptView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/11.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "WalletHeader.h"

typedef void(^AddWalletBlock)(AddWalletType type);

@interface WalletNullPromptView : UIView

- (instancetype)initWithType:(BlockChainType)type;

@property (nonatomic, copy) AddWalletBlock addWalletBlock;

@end
