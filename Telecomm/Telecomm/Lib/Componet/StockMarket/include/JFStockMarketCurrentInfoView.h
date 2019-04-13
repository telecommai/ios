//
//  JFStockMarketCurrentInfoView.h
//  WalletManager
//
//  Created by YRH on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 股票当天基本信息视图
#import <UIKit/UIKit.h>
#import "JFMarketHeaderInfoModel.h"
#import "StockMarketConfigModel.h"
#import "FinanceDetailViewConst.h"

@interface JFStockMarketCurrentInfoView : UIView

/// 当前币种
@property (nonatomic, assign) CoinShowType currentCoinType;

/// 币种发生变化，刷新数据
- (void)coinTypeChangeNeedReloadData;

/// 赋值
- (void)reloadData:(JFMarketHeaderInfoModel *)model market:(StockMarketConfigMarketModel *)marketModel;

@end

