//
//  NewFriendViewController.h
//  FriendSearch
//
//  Created by 吴鹏 on 16/4/9.
//  Copyright © 2016年 Caoyq. All rights reserved.
//

/*
 通讯录界面点击”新的朋友“cell，跳转的新的朋友列表界面
 */

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@protocol reloadDatadelegate <NSObject>

/// 添加好友代理
- (void)newFriendReloadData;
/// 新添加的好友可以在新的好友界面跳入详细资料，进行对该好友修改备注和删除该联系人

@end

@interface NewFriendViewController : UIViewController

@property(nonatomic,weak) id<reloadDatadelegate> delegate;

@end
