//
//  ResendNeedUploadMessage.h
//  ChatComps
//
//  Created by StarLord on 2018/8/22.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface ResendNeedUploadMessage : NSObject

+ (void)resendNeedUploadMessage:(IMStructMessage *)message;

@end
