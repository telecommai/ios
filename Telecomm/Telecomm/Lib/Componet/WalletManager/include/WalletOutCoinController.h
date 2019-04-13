//
//  WalletOutCoinController.h
//  WalletManager
//
//  Created by 王胜利 on 2018/8/10.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "Masonry.h"
#import "ThemeKit.h"
#import "CategoryHeader.h"
#import "WalletModel.h"
#import "WalletSilderScrollView.h"
#import "BottomAlert.h"
#import "WalletSelectView.h"
#import "SurePasswordAlert.h"
#import "SLAlertController.h"
#import "AESUtil.h"
#import "WalletConfirmTradeView.h"
#import "WalletTradeResultController.h"
#import "TradeOutItemView.h"
#import "TradeOutNormalView.h"
#import "JFLanguageManager.h"
#import "WalletTradeUtil.h"

@interface WalletOutCoinController : UIViewController


/// 二维码扫描json处理
@property (nonatomic, strong) NSDictionary *qrJson;
/// 钱包
@property (nonatomic,strong) WalletModel *walletModel;
/// 代币(ETH、PWR)
@property (nonatomic, strong) WalletTokenModel *wallletTokenModel;



// MARK: QR
/// QR 转账金额
@property (nonatomic, copy) NSString *qr_amount;
/// QR 收款地址
@property (nonatomic, copy) NSString *qr_toAddress;

// MARK: - private

/// 链
@property (nonatomic, assign) BlockChainType chainType;

/// 背景ScrollView
@property (nonatomic, strong) WalletSilderScrollView *scrollView;
/// 交易按钮
@property (nonatomic, strong) UIButton *nextButton;
/// 金额
@property (nonatomic, strong) TradeOutItemView *moneyView;
/// 备注
@property (nonatomic, strong) TradeOutNormalView *remarkView;
/// 收款地址
@property (nonatomic, strong) TradeOutItemView *toView;

/// 底部弹出Alert
@property (nonatomic, strong) BottomAlert *bottomAlert;


/// 钱包列表
@property (nonatomic, strong) NSArray *wallets;
/// 当前钱包
@property (nonatomic, strong) WalletModel *currentModel;
@property (nonatomic, strong) WalletTokenModel *currentTokenModel;
- (void)tradeAction;
/// 交易
- (BOOL)isCanTrade;

@property (nonatomic, strong) NSString *tradeTitle;

@end
