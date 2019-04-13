//
//  AddressBookTableViewCell.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/12/14.
//  Copyright © 2016年 Pansoft. All rights reserved.
//  通讯录界面 显示联系人的cell

#import <UIKit/UIKit.h>
#import "PersonModel.h"

/// 通讯录界面 显示联系人的cell
@interface AddressBookTableViewCell : UITableViewCell

@property (strong, nonatomic) UIImageView *imageView_header;    //头像
@property (strong, nonatomic) UILabel *label_user;              //用户名称
@property (strong, nonatomic) UILabel *label_jianjie;           //简介
@property (strong, nonatomic) UIImageView *imageView_love;      //是否喜欢
@property (nonatomic, copy)   NSString  *headerShape;           //头像形状

- (void)setData:(PersonModel *)model;

@end
