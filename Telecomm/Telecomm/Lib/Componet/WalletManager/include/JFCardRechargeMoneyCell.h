//
//  JFCardRechargeMoneyCell.h
//  WalletManager
//
//  Created by 董艳武 on 2018/9/17.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFCardInfoModel.h"

typedef void(^RechargeActionCallBack)(BOOL,NSString *);

@interface JFCardRechargeMoneyCell : UICollectionViewCell

/// 充值时间的回调
@property(nonatomic,copy)   RechargeActionCallBack      cb;

/// 积分卡模型
@property(nonatomic,strong) JFCardInfoModel             *model;

/// 充值比率
@property(nonatomic,assign) float                       rate;

@end
