//
//  NSObject+Runtime.h
//  WalletManager
//
//  Created by 赵洪壮 on 2019/2/22.
//  Copyright © 2019 pansoft. All rights reserved.
//  Runtime 归档序列化

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Runtime)

- (void)encoder:(NSCoder *)aCoder;
- (void)decoder:(NSCoder *)aDecoder;

@end

NS_ASSUME_NONNULL_END
