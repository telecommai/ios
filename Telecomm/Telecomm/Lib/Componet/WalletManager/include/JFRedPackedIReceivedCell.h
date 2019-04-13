//
//  JFRedPackedIReceivedCell.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFMyPacketRecordModel.h"

@interface JFRedPackedIReceivedCell : UITableViewCell

/// 名字
@property(nonatomic,strong) UILabel      *nameLabel;

/// 时间
@property(nonatomic,strong) UILabel      *timeLabel;

/// 钱
@property(nonatomic,strong) UILabel      *moneyLabel;


@property(nonatomic,strong) JFMyPacketRecordModel *model;

@end
