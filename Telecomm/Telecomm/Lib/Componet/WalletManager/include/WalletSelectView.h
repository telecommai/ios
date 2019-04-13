//
//  WalletSelectView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/7.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

@class WalletModel;

typedef void(^WalletModelBlock)(WalletModel*wallet);

typedef NS_ENUM(NSUInteger, WalletSelectType) {
    WalletSelectTypeMoney,
    WalletSelectTypeAddress,
};

@interface WalletSelectView : UIView

+ (instancetype)walletsSelWithWallets:(NSArray <WalletModel *>*)wallets selWallet:(WalletModel *)selWallet  type:(WalletSelectType)type complete:(WalletModelBlock)complete;


@end
