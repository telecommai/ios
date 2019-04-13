//
//  GroupChatCell.h
//  FriendSearch
//
//  Created by 吴鹏 on 16/4/9.
//  Copyright © 2016年 Caoyq. All rights reserved.
//  通讯录中群聊界面cell 头像+群组名

#import <UIKit/UIKit.h>

@interface GroupChatCell : UITableViewCell

/// cell的基本信息
@property (nonatomic, strong) NSDictionary *chatGroupInfo;
@property (nonatomic, copy)   NSString     *headerShape;

@end
