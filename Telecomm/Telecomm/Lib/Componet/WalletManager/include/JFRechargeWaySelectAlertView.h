//
//  JFRechargeWaySelectAlertView.h
//  WalletManager
//
//  Created by 董艳武 on 2018/9/17.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFRechargeWaySelectHeaderView.h"

typedef void(^SelectPayWayCallBack)(NSInteger);

@interface JFRechargeWaySelectAlertView : UITableView

@property (nonatomic,copy) SelectPayWayCallBack selectPayCb;

-(instancetype)initWithRechargeWay:(NSArray *)infoArr;

-(CGFloat)getAlertHeight;


@end
