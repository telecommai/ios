//
//  PaySignature.h
//  PayComps
//
//  Created by YRH on 2018/9/15.
//  Copyright © 2018年 YRH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PayCompsHeader.h"

typedef void(^AliPayRespCompletionHandle)(BOOL paySuccess, NSDictionary *resultDic, NSString *authCode, NSString *msg);
typedef void(^WXPayRespCompletionHandle)(BOOL paySuccess, NSString *strTitle, NSString *msg);
typedef void(^DidBecomeActivePayCompletionHandle)(void);

@interface JFPayUtil : NSObject

/**
 * 初始化
 **/
+ (instancetype)sharedUtil;

/**
 * 注册支付
 **/
- (void)paySignature;

#pragma mark - 回调
/**
 * 支付宝支付结果回调
 **/
@property (nonatomic, copy) AliPayRespCompletionHandle aliPayRespCallback;
/**
 * 微信支付结果回调
 **/
@property (nonatomic, copy) WXPayRespCompletionHandle wxPayRespCallback;
/**
 * 程序从后台返回的代理
 **/
@property (nonatomic, copy) DidBecomeActivePayCompletionHandle didBecomeActivePayCallback;

#pragma mark - 支付宝支付
/**
 * 调起支付宝支付
 **/
- (void)aliPayWithOrder:(NSString *)orderString fromScheme:(NSString *)appScheme callback:(void(^)(NSDictionary *resultDic))callback;

/**
 * 支付宝跳转回来
 **/
- (void)alipayProcessOrderWithPaymentResult:(NSURL *)url;

/**
 * 解析支付宝返回结果 @"success" 是否支付成功, @"msg" 信息
 **/
- (NSMutableDictionary *)msgWithAlipayResult:(NSDictionary *)result;

#pragma mark - 微信支付
/**
 * 调起微信支付
 **/
- (void)wxPayWithAppid:(NSString *)appid partnerId:(NSString *)partnerId prepayid:(NSString *)prepayid package:(NSString *)package noncestr:(NSString *)noncestr timestamp:(NSString *)timestamp sign:(NSString *)sign;

/**
 * 微信跳转回来
 **/
- (BOOL)wxHandleOpenURL:(NSURL *)url;

#pragma mark - 程序回到前台
/**
 * 程序回到前台后的操作
 **/
- (void)applicationDidBecomeActivePayOperation;

@end
