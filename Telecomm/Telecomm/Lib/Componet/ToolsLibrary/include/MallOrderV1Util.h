//
//  MallOrderV1Util.h
//  ToolsLibrary
//
//  Created by 董艳武 on 2018/10/24.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MallOrderV1Util : NSObject

/// 时间戳
@property(class,nonatomic,copy,readonly)                NSString    *timeStamp;

/// nonce
@property(class,nonatomic,copy,readonly)                NSString    *nonce;

/// app_id
@property(class,nonatomic,copy,readonly)                NSString    *appId;

/// app_key
@property(class,nonatomic,copy,readonly)                NSString    *appKey;

/// app_secret
@property(class,nonatomic,copy,readonly)                NSString    *appSecret;

/// sha1
@property(class,nonatomic,copy,readonly)                NSString    *sha1;

/// 大写的sh1
@property(class,nonatomic,copy,readonly)                NSString    *signature;

/// 参数字符串
@property(class,nonatomic,copy,readonly)                NSString    *paramStr;

/// 参数字典
@property(class,nonatomic,strong,readonly)              NSMutableDictionary    *v1Params;


@end

NS_ASSUME_NONNULL_END
