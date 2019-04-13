//
//  RemarkFriendNameViewController.h
//  ESPChatComps
//
//  Created by 陈海鹏 on 16/9/10.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

/*
 从个人详情右上角的menu按钮中，点击修改备注，跳转的"设置备注"界面。
 */

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@protocol remarkFriendDelegate <NSObject>

- (void)remarkFriendsName:(NSString *)remarkName;

@end

typedef enum{
    /**修改好友的备注*/
    FriendsRemarkType = (Byte)0,
    /**修改自己群昵称*/
    GroupOwnRemarkType = (Byte)1,
    /**修改好友的群昵称*/
    GroupFriendsRemarkType = (Byte)2,
    /**修改非好友群昵称*/
    GroupOtherRemarkType = (Byte)3,
}remarkType;

@interface RemarkFriendNameViewController : UIViewController

@property (nonatomic,strong)  PersonModel *model;
///修改备注的类型
@property (nonatomic, assign) Byte       remarkType;
@property (nonatomic, copy)   NSString   *groupId;

@property (nonatomic,weak) id<remarkFriendDelegate>delegate;

@end
