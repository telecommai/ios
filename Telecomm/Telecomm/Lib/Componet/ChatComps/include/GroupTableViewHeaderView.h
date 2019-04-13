//
//  GroupTableViewHeaderView.h
//  ESPChatComps
//
//  Created by Sunjimin on 16/12/20.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFAvatar.h"

@interface GroupTableViewHeaderView : UIView

@property (nonatomic, strong) NSMutableDictionary *GroupInfo;//生成二维码需要的群信息
@property (nonatomic, strong) UIImageView *iconView; // 头像
@property (nonatomic, strong) EFAvatar *avatarView; // 头像
@property (nonatomic, strong) UILabel *groupId; // 群ID
@property (nonatomic, strong) UIButton *QRCode; // 群二维码

@end
