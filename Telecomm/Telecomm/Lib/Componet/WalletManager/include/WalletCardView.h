//
//  WalletCardView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/5.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TalkChainHeader.h"
#import "WalletModel.h"
#import "WalletUtil.h"
#import "JFStockMarketHomeModel.h"

@interface WalletCardView : UIView

/// 数据源
@property (nonatomic, strong) WalletModel *model;
/// 转入
@property (nonatomic, copy) VoidBlock inCoinBlock;
/// 交易明细
@property (nonatomic, copy) VoidBlock transmitInfoBlock;
/// 转出
@property (nonatomic, copy) VoidBlock outCoinBlock;
/// 进入钱包详情
@property (nonatomic, copy) VoidBlock goWalletDetail;
/// 行情
@property (nonatomic, copy) VoidBlock marketBlock;

///自选model
@property (nonatomic, strong) JFStockSelfSelectModel *selfSelectModel;
///上一次金额,用于变色
@property (nonatomic, copy) NSString *lastValue;

@end
