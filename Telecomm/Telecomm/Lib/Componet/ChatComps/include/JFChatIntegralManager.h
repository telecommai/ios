//
//  JFChatIntegralManager.h
//  ChatComps
//
//  Created by Javor Feng on 2018/4/13.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface JFChatIntegralManager : NSObject

+(void)integralForMessage:(IMStructMessage *)message withMessage:(IMStructMessage *)stateMessage;

@end
