//
//  JFAddGroupDataManager.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFAddGroupDataManager : NSObject
+(void)insertGroupNoticeToDatabaseWithUserId:(NSString *)userId groupId:(NSString *)groupId message:(NSString *)leaveMessage;
@end
