//
//  JFAddAccountCell.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/20.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFMasterAccountModel.h"

typedef void (^AddAccountSwitchCallBack)(Boolean);

@interface JFAddAccountCell : UITableViewCell
/// 回调
@property (nonatomic,copy) AddAccountSwitchCallBack cb;

@property (nonatomic,assign) Boolean choosen;

@property (nonatomic,strong) JFCoinListModel *model;


@end
