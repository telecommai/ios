//
//  JFAccountDetailPageController.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/15.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>


/// 交易类型 1、全部 2、充值 3、提现 4、其他
typedef enum:NSInteger {
    JFAccountTradeTypeAll       = 1,
    JFAccountTradeTypeRecharge  = 2,
    JFAccountTradeTypeWithdraw  = 3,
    JFAccountTradeTypeOther     = 4,
} JFAccountTradeType;

@interface JFAccountDetailPageController : UIViewController

-(instancetype)initWithType:(JFAccountTradeType) type trusteeshipId:(NSInteger)trusteeshipId;

-(void)beginRefresh;

@end
