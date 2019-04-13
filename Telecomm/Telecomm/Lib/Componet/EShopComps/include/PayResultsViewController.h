//
//  PayResultsViewController.h
//  ESPChatComps
//
//  Created by YRH on 2017/12/8.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

// 支付结果 界面

#import <UIKit/UIKit.h>
#import "EShopPayManager.h"

typedef NS_ENUM(NSUInteger, TradeType) {
    /// 购物
    TradeTypeShop,
    /// 充值
    TradeTypeTopUp
};

@interface PayResultsViewController : UIViewController

/// @"success" @"good_name" @"demandvideotitle" @"price"
@property (nonatomic, strong) NSMutableDictionary *demandRoom;

@property (nonatomic, assign) TradeType tradeType;

/// 付款方式
@property (nonatomic, assign) EShopPayType payType;
/// 单位
@property (nonatomic, copy) NSString *mouthUnit;
/// 付款金额
@property (nonatomic, copy) NSString *payAmount;

@end
