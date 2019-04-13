//
//  ZoneHeaderView.h
//  Zone
//
//  Created by 王胜利 on 2018/5/10.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Zone.h"

@interface ZoneHeaderView : UIView

@property (nonatomic, strong) UIImageView *backImageView;
@property (nonatomic, strong) ZoneUserModel *userModel;
@property (nonatomic, assign) BOOL isAvatarEnable;
/// 未读消息数
@property (nonatomic, assign) NSInteger unreadCount;
/// 点击了未读消息事件
@property (nonatomic, copy)   VoidBlock unreadMessageBlock;

@end
