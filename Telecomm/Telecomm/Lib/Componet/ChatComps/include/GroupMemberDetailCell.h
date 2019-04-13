//
//  GroupMenberDetailCell.h
//  ESPChatComps
//
//  Created by 亦晴 on 2018/4/11.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PersonModel.h"

@class GroupMemberDetailCell;
@protocol GroupMemberDetailCellDelegate <NSObject>

/// 长按cell事件
- (void)whenLongPressCellToDo:(GroupMemberDetailCell *)cell;

@end

@interface GroupMemberDetailCell : UITableViewCell

@property (nonatomic, copy)   NSString    *createUserId;   //群主的id
@property (nonatomic, strong) UIImageView *imageView_icon; //用户头像
@property (nonatomic, strong) UILabel     *label_terms;    //群称谓
@property (nonatomic, strong) UILabel     *label_user;     //成员名字
@property (nonatomic, strong) NSString    *headerShape;   //头像形状

@property (nonatomic, weak) id<GroupMemberDetailCellDelegate> delegate;

@property (nonatomic, strong) PersonModel *model;

- (void)creatData:(PersonModel *)model;

@end
