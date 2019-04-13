//
//  WalletHeader.h
//  WalletManager
//
//  Created by 王胜利 on 2018/6/8.
//  Copyright © 2018年 wsl. All rights reserved.
//

#ifndef Wallet_h
#define Wallet_h

#import "Constant.h"
#import "BlockChainManager.h"

/**
 钱包类型

 - WalletTypeMain: 主钱包
 - WalletTypeSee: 观察钱包
 - WalletTypeActive: 活跃钱包
 - WalletTypeNormal: 普通钱包
 - WalletTypeCold: 冷钱包
 */
typedef NS_ENUM(NSUInteger, OpenWalletType) {
    OpenWalletTypeMain             = 0,
    OpenWalletTypeSee              = 1,
    OpenWalletTypeActive           = 2,
    OpenWalletTypeNormal           = 3,
    OpenWalletTypeCold             = 4,
};

/**
 添加新钱包方式

 - AddWalletTypeCreate: 创建
 - AddWalletTypeImport: 导入
 */
typedef NS_ENUM(NSUInteger, AddWalletType) {
    AddWalletTypeCreate            = 0,
    AddWalletTypeImport            = 1,
};



#define WalletUrl @"https://tc.ipcom.io"
#define BTCWalletUrl @"https://tc.ipcom.io"
/// BTC测试
//#define BTCWalletUrl @"http://chaintest.openserver.cn"


#define WalletBundle @"Wallet.bundle"
#define WalletBundleImage(path) BundleImage(WalletBundle, path)


#endif /* Wallet_h */
