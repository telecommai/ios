//
//  TransferStateUtil.h
//  ChatComps
//
//  Created by StarLord on 2018/8/7.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface TransferStateUtil : NSObject

/// 交易转入 / 交易转出
+ (NSString *)transferStateWithMessage:(IMStructMessage *)message;

@end
