//
//  JFGroupDetailCell.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/27.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFGroupDetailModel.h"

@interface JFGroupDetailCell : UITableViewCell

/// 查看群成员列表的回调
@property(nonatomic,copy) void(^memberListCallback)(void);

/// 添加群员的回调
@property(nonatomic,copy) void(^addFriendToGroupCallBack)(void);

/// 删除地址的回调
@property(nonatomic,copy) void(^deleteGroupAddressCallBack)(NSString *);

/// 开关的回调
@property(nonatomic,copy) void(^switchActionCallBack)(JFGroupDetailType,UISwitch *);

/// 没有权限的回调
@property(nonatomic,copy) void(^noRightCallBack)(JFGroupDetailType);

/// 数据模型
@property(nonatomic,strong) JFGroupDetailModel *model;


-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier model:(JFGroupDetailModel *)model;

@end
