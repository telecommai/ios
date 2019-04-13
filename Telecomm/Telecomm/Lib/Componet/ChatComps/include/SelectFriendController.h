//
//  SelectFriendController.h
//  ChatComps
//
//  Created by 王胜利 on 2018/10/15.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  分享到联系人选择好友或群组
//

#import <UIKit/UIKit.h>
#import "SelectRecentFriendController.h"
#import "IIMStruct.h"

NS_ASSUME_NONNULL_BEGIN

@interface SelectFriendController : UIViewController

/// 选择类型
@property(nonatomic,assign) postType postType;
/// 好友信息回调
@property (nonatomic,copy) PersonBlock personBlock;

@end

NS_ASSUME_NONNULL_END
