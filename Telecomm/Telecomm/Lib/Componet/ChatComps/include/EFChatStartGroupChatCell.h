//
//  StartGroupChatCell.h
//  startGroupChat
//
//  Created by 吴鹏 on 16/8/1.
//  Copyright © 2016年 luckier. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@interface EFChatStartGroupChatCell : UITableViewCell
///是否选中button
@property (nonatomic, strong) UIButton      *selButton;
///用户名称
@property (nonatomic, strong) UILabel       *nameLabel;
///用户头像
@property (nonatomic, strong) UIImageView   *headerImage;

@property (nonatomic, strong) PersonModel   *model;

@end
