//
//  NewFriendCell.h
//  FriendSearch
//
//  Created by 吴鹏 on 16/4/9.
//  Copyright © 2016年 Caoyq. All rights reserved.
//  通讯录中新的朋友界面cell 左边头像+中间名字和简介+右边接收button/已添加label

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@class NewFriendCell;

@protocol NewFriendCellDelegate <NSObject>

@optional

- (void)button_optionAct:(NewFriendCell *)selfcell;

@end

@interface NewFriendCell : UITableViewCell

@property (strong, nonatomic) UIImageView *imageView_header;
@property (assign, nonatomic) int lxr_id;
@property (strong, nonatomic) NSString *lxr_header;
@property (strong, nonatomic) UILabel *label_user;
@property (strong, nonatomic) UILabel *label_jianjie;
@property (strong, nonatomic) UILabel *label_option;
@property (strong, nonatomic) UIButton *button_option;
@property (nonatomic,weak) id <NewFriendCellDelegate> delegate;
@property (nonatomic, copy)   NSString *headerShape;

- (NSInteger)setData:(PersonModel *)model;

@end
