//
//  SelectGroupController.h
//  ChatComps
//
//  Created by 王胜利 on 2018/11/2.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SelectRecentFriendController.h"
#import "IIMStruct.h"

NS_ASSUME_NONNULL_BEGIN

@interface SelectGroupController : UIViewController

/// 选择类型
@property(nonatomic,assign) postType postType;
/// 好友信息回调
@property (nonatomic,copy) PersonBlock personBlock;


@end

NS_ASSUME_NONNULL_END
