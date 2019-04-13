//
//  GroupChatViewController.h
//  FriendSearch
//
//  Created by 吴鹏 on 16/4/9.
//  Copyright © 2016年 Caoyq. All rights reserved.
//  通讯录界面点击“部落”cell，进入的群聊列表界面。

#import <UIKit/UIKit.h>
#import "EFUIViewController.h"

/**
 群组点击事件

 - JFGroupListSelectTypeNone: 默认进群组聊天
 - JFGroupListSelectTypeBackGroupInfo: 返回群组信息
 */
typedef NS_ENUM(NSUInteger, JFGroupListSelectType) {
    JFGroupListSelectTypeNone,
    JFGroupListSelectTypeBackGroupInfo,
};

@interface GroupChatViewController : EFUIViewController

@property (nonatomic, assign) JFGroupListSelectType selectType;

@property (nonatomic,assign) BOOL isSharedImage;

@property (nonatomic, copy) void(^groupSelectBlock)(NSString *groupId);

@end
