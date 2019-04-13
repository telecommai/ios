//
//  SelectRecentFriendController.h
//  ChatComps
//
//  Created by 王胜利 on 2018/10/15.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IIMStruct.h"
#import "JFUserModel.h"
#import "JFFriendModel.h"
#import "JFGroupsModel.h"

NS_ASSUME_NONNULL_BEGIN


typedef void(^PersonBlock)(postType postType,JFFriendModel * _Nullable userModel, JFGroupsModel * _Nullable groupModel);

@interface SelectRecentFriendController : UIViewController

@property (nonatomic,copy) PersonBlock personBlock;

@end

NS_ASSUME_NONNULL_END
