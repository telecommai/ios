//
//  AddFriendDetailCellOthers.h
//  ESPChatComps
//
//  Created by 吴鹏 on 16/8/8.
//  Copyright © 2016年 Pansoft. All rights reserved.
//  查找未添加好友的用户展示界面cell 文字+文字 例 (编号 593）

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@interface AddFriendDetailCellOthers : UITableViewCell
@property (strong, nonatomic)UILabel *label_main;
@property (strong, nonatomic)UILabel *label_detail;
- (void)setData:(PersonModel *)model;

@end
