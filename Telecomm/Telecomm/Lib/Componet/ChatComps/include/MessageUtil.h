//
//  MessagaUtil.h
//  ChatComps
//
//  Created by Javor Feng on 2018/3/30.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface MessageUtil : NSObject

+(NSString *)messageState:(IMStructMessage *)message;

/// 查看message是否有@我
+ (BOOL)isAtMeMessage:(IMStructMessage *)structMessage;

@end
