//
//  JFZoneMessageManager.h
//  ChatComps
//
//  Created by 谢虎 on 2018/7/2.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFMessageManager.h"
#import "IMStructMessage.h"

@interface JFZoneMessageManager : NSObject

+(void) zoneMessageManagerWithMessage:(IMStructMessage *)message;

+(void) zoneMessageClear;
+(void) newShortPostClear;

@end
