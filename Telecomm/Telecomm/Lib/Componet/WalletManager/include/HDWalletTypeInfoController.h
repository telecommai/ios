//
//  HDWalletTypeInfoController.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/4/1.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 钱包类型
 - HDWalletType_ColdWallet: 冷钱包
 - HDWalletType_HotWallet:  热钱包
 */
typedef NS_ENUM(NSUInteger, HDWalletType) {
    HDWalletType_ColdWallet,
    HDWalletType_HotWallet,
};

@interface HDWalletTypeInfoController : UIViewController

@property (nonatomic,assign) HDWalletType hdWalletType;

@end

NS_ASSUME_NONNULL_END
