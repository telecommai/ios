//
//  WeChatPayOperation.h
//  ESPpayComps
//
//  Created by YRH on 2017/11/27.
//  Copyright © 2017年 YRH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WXApi.h"
#import "WXApiObject.h"

@interface WeChatPayOperation : NSObject

#pragma mark - 向微信终端程序注册第三方应用
/**
 向微信终端程序注册第三方应用

 @param appId 在注册微信平台APP的时候，给一个唯一识别标识符（APPID）
 @param noWXApp YES为没有安装微信App
 @param unSupportApi YES为微信App版本不支持该功能
 */
+ (void)weChatPayRegisterApp:(NSString *)appId noWXApp:(void(^)(BOOL unInstalledWXApp))noWXApp unSupportApi:(void(^)(BOOL unSupportApi))unSupportApi;
+ (void)weChatPayRegisterApp:(NSString *)appId enableMTA:(BOOL)enableMTA;

+ (void)WXPayWithAppid:(NSString *)appid partnerId:(NSString *)partnerId prepayid:(NSString *)prepayid package:(NSString *)package noncestr:(NSString *)noncestr timestamp:(NSString *)timestamp sign:(NSString *)sign;

@end
