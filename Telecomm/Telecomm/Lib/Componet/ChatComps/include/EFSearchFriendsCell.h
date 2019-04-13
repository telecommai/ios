//
//  EFSearchFriendsCell.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2016/12/19.
//  Copyright © 2016年 Pansoft. All rights reserved.
//  通讯录中新的朋友和群组搜索时的cell 头像+用户名字/群组名

#import <UIKit/UIKit.h>

@interface EFSearchFriendsCell : UITableViewCell

@property (nonatomic,strong) UIImageView *headImageView;

@property (nonatomic,strong) UILabel     *nameLabel;

@property (nonatomic,strong) UILabel     *detailLabel;

@end
