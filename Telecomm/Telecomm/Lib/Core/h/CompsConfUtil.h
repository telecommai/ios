//
//  CompsConfUtil.h
//  IOSESPBase
//
//  Created by wangzhanfeng on 14-2-17.
//  Copyright (c) 2014年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IComponent.h"

@interface CompsConfUtil : NSObject

+(void)setParam:(NSString *)paramKey withValue:(id)value toComp:(id<IComponent>)comp;

@end
