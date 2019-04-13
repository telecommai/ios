//
//  JFForwardManager.h
//  ChatComps
//
//  Created by YRH on 2018/10/8.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFForwardMessageManager : NSObject

/// 转发消息
+ (void)forwardMessageWithMessage:(IMStructMessage *)currentMessage;

@end

NS_ASSUME_NONNULL_END
