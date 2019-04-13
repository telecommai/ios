//
//  JFInterceptVideoCover.h
//  ChatComps
//
//  Created by YRH on 2018/8/30.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface JFInterceptVideoCover : NSObject

+ (void)interceptSmallVideoCoverWithMessage:(IMStructMessage *)message coverCompletionHandle:(void(^)(NSData *data, UIImage *image, NSString *localPath))coverCompletionHandle;

@end
