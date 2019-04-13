//
//  AliPayOperation.h
//  ESPpayComps
//
//  Created by YRH on 2017/11/28.
//  Copyright © 2017年 YRH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AlipaySDK/AlipaySDK.h>

@interface AliPayOperation : NSObject

/**
 调起支付宝支付

 @param orderString orderstring 这个是一个订单的字符串，由后台拼接生成的，还需要签名的。
 @param appScheme APPScheme是app在info.plist注册的scheme。
 @param callback 支付结果（网页的）
 */
+ (void)alipayWithOrder:(NSString *)orderString fromScheme:(NSString *)appScheme callback:(void(^)(NSDictionary *resultDic))callback;

@end
