//
//  EFChatAddFriendDetailViewController.h
//  ESPChatComps
//
//  Created by 吴鹏 on 16/8/8.
//  Copyright © 2016年 Pansoft. All rights reserved.
//  查找未添加好友的用户展示界面

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@interface EFChatAddFriendDetailViewController : UIViewController

@property (nonatomic, strong)NSMutableDictionary *avatarAndSex;

///未添加好友的userId
@property (nonatomic, strong)PersonModel *model;

@end
