//
//  GroupMemberDetailViewController.h
//  ESPChatComps
//
//  Created by 亦晴 on 2018/4/25.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

typedef NS_ENUM(NSUInteger, GroupMemberListStyle) {
    /// 默认
    GroupMemberListStyleNomal,
    /// ‘@’某人
    GroupMemberListStyleAT
};

typedef void(^SelectedCellCompletionHandle)(PersonModel *obj);

@interface GroupMemberListViewController : UIViewController

@property (nonatomic, copy)   NSString          *groupId;
@property (nonatomic, strong) NSMutableArray    *groupUserArray;  //群成员数组

@property (nonatomic, assign) GroupMemberListStyle groupMemberListStyle;
@property (nonatomic, copy) SelectedCellCompletionHandle selectedCellCallback;

@end
