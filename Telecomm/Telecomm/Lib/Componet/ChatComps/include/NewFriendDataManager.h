//
//  NewFriendDataManager.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/3.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constant.h"

@interface NewFriendDataManager : NSObject

//+ (void)agressApplyFriendWithUserId:(NSString *)userId success:(StringBlock)success fail:(StringBlock)fail;
+(void)sendNewFriendMessageWithUserId:(NSInteger)userId;
@end
