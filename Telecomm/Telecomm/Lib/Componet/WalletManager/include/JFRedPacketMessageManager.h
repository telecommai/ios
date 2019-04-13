//
//  JFRedPacketMessageManager.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/9.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFRedPacketMessageManager : NSObject

+ (void)sendTransferMessageWithToUserId:(int)toUserId postType:(NSInteger)postType  messageDictionary:(NSDictionary *)messageDictionary;


@end
