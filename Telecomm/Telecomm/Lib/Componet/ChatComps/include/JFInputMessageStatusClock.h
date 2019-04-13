//
//  JFInputMessageClock.h
//  ChatComps
//
//  Created by YRH on 2018/10/26.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

// "对方正在输入..."消息计时器

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

typedef void(^ClockCompletionHandle)(void);
@interface JFInputMessageStatusClock : NSObject

/// 对"对方正在输入..."消息进行计时，当计时结束的时候返回回调
+ (void)inputMessageClockWithMessage:(IMStructMessage *)structMessage completion:(ClockCompletionHandle)completion;

/// 销毁
+ (void)inputMessageStatusClockdealloc;

/// 检测是否处理"对方正在输入..."消息
+ (BOOL)checkCanDisposeInputStatusMessage:(IMStructMessage *)structMessage;

@end

