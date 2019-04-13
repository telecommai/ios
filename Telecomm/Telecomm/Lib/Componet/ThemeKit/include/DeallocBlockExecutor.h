//
//  MEDeallocBlockExecutor.h
//  METhemeKit
//
//  Created by Yasin on 16/3/7.
//  Copyright © 2018年 wsl. All rights reserved.
//
/**
 *  MEDeallocBlockExecutor初始化一个回调，在MEDeallocBlockExecutor释放的时候会进行回调
    用于NSObject注销通知
 *
 */

#import <Foundation/Foundation.h>
typedef void(^DeallocBlock)(void);
@interface DeallocBlockExecutor : NSObject

- (instancetype)initWith:(DeallocBlock)deallocBlock;

@end
