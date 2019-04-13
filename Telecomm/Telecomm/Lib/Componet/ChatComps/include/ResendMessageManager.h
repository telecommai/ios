//
//  ResendMessageManager.h
//  ChatComps
//
//  Created by Javor Feng on 2018/8/22.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface ResendMessageManager : NSObject

+(void)resendMessage:(IMStructMessage *)message;

@end
