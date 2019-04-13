//
//  SingleWalletController.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/28.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WalletCardView.h"
#import "WalletModel.h"
#import "TalkChainHeader.h"
#import "WalletUtil.h"
#import "WalletHttpManager.h"
#import "WalletDBManager.h"
#import "JFStockMarketHomeModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface SingleWalletController : UIViewController

@property (nonatomic, strong) NSString *chainName;
/// 链类型
@property (nonatomic, strong) BlockChainModel *chainModel;
/// 列表页
@property (nonatomic, strong) UITableView *tableView;
/// 钱包卡片
@property (nonatomic, strong) WalletCardView *walletCardView;
/// 钱包实体
@property (nonatomic, strong) WalletModel *wallet;


-(void)viewDidAppear;
-(void)viewDidDisappear;


/// 本次请求的数据
@property (nonatomic, strong) JFStockMarketHomeModel *homeModel;
/// 上一次请求的数据
@property (nonatomic, strong) JFStockMarketHomeModel *lastHomeModel;

@property (nonatomic, strong) NSTimer *timer;

@end

NS_ASSUME_NONNULL_END
