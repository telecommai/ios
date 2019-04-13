//
//  AddressPersonHeaderCell.h
//  ESPChatComps
//
//  Created by 陈海鹏 on 16/9/9.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"
#import "ShowImageInfoView.h"

@interface AddressPersonHeaderCell : UITableViewCell<ShowImageInfoViewDelegate>

@property (strong, nonatomic) UIImageView *imageView_header;
@property (strong, nonatomic) UIImageView *imageView_sex;
@property (strong, nonatomic) UILabel *label_user;
@property (strong, nonatomic) UILabel *label_haoma;
@property (strong, nonatomic) UILabel *label_nicheng;
@property (strong, nonatomic) PersonModel *model;
@property (strong, nonatomic) UIImageView *user_zone;
@property (nonatomic, strong) ShowImageInfoView     *showImageInfoView;

@end

