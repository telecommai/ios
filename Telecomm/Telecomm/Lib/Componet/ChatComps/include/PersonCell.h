//
//  PersonCell.h
//  FriendSearch
//
//  Created by 吴鹏 on 16/4/9.
//  Copyright © 2016年 Caoyq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"
#import "TagView.h"
#import "StubObject.h"

@interface PersonCell : UITableViewCell

@property (strong, nonatomic) UIImageView *imageView_header;    //头像
@property (strong, nonatomic) UILabel *label_user;              //用户名称
@property (strong, nonatomic) UILabel *label_jianjie;           //简介
@property (strong, nonatomic) UIImageView *imageView_love;      //是否喜欢
@property (nonatomic, strong) TagView *badgeView;               //未读信息条数
@property (nonatomic, strong) StubObject *stubobject;

@end
