//
//  GroupMemberCell.h
//  ESPChatComps
//
//  Created by 亦晴 on 2018/4/11.
//  Copyright © 2018年 Pansoft. All rights reserved.
//



#import <UIKit/UIKit.h>
#import "PersonModel.h"


@class GroupMemberCell;
@protocol groupMemberCellDelegate <NSObject>

///加号图标的点击事件
- (void)inviteFriendsToGroup;
///群成员个人性情
- (void)intoPersonInfo:(PersonModel *)model;

@end
 
@interface GroupMemberCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic, strong) NSDictionary *dataDictionary; // 数据源

@property (nonatomic, weak) id<groupMemberCellDelegate>delegate;

@end
