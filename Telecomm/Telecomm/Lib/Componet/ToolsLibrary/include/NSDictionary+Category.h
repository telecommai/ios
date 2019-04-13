//
//  PK-ios
//
//  Created by peikua on 15/9/15.
//  Copyright (c) 2015年 peikua. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Category)

//用于数据解析，返回对象为字符串或值类型，数组和字典不要用此方法
- (id)safeObjectForKey:(NSString *)key;
- (id)objectForKey:(NSString *)key defaultValue:(id)defaultValue;
//设置键值对 针对对象为空处理
- (void)safeSetObject:(id)object forKey:(id)key;
- (id)objectForKeyCustom:(id)aKey;

- (id)safeKeyForValue:(id)value;

/// Json转成字符串
- (NSString *)toString;
@end


