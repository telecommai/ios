//
//  JFNewFriendCell.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/3.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFNewFriendModel.h"
#import "JFUserModel.h"
@class JFNewFriendCell;
@protocol  stateChangeDelegate <NSObject>

-(void)changeStateWithNewFriendCell:(JFNewFriendCell *)cell userModel:(JFNewFriendModel *)model;

@end

@interface JFNewFriendCell : UITableViewCell

@property(nonatomic,weak)   id<stateChangeDelegate> delegate;

@property(nonatomic,strong) JFNewFriendModel *model;

@end
