//
//  DetailCellHead.h
//  FriendSearch
//
//  Created by 吴鹏 on 16/4/9.
//  Copyright © 2016年 Caoyq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"
#import "ShowImageInfoView.h"

@interface DetailCellHead : UITableViewCell<ShowImageInfoViewDelegate>

@property (strong, nonatomic) UIImageView *imageView_header;
@property (strong, nonatomic) UIImageView *imageView_sex;
@property (strong, nonatomic) UILabel *label_user;
@property (strong, nonatomic) UILabel *label_haoma;
@property (strong, nonatomic) UILabel *label_nicheng;
@property (nonatomic, strong) ShowImageInfoView     *showImageInfoView;

- (void)setData:(PersonModel *)model;

@end

