//
//  JFRechargeWaySelectHeaderView.h
//  WalletManager
//
//  Created by 董艳武 on 2018/9/17.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CloseAlertVieCallBack)(void);

@interface JFRechargeWaySelectHeaderView : UIView

@property (nonatomic,copy) CloseAlertVieCallBack cb;

@end
