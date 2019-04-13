//
//  JFPayServeManager.h
//  PayComps
//
//  Created by YRH on 2018/9/26.
//  Copyright © 2018 YRH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFPaySessionManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFPayServeManager : NSObject

/**
 * 单个订单微信、支付宝支付 (获取订单信息并调起微信、支付宝支付）
 * appbh app编号
 * paytype: 'wx' 'ali'
 * orderId 订单编号
 * payInfoSuccess 获取单号信息成功回调
 * payInfoFailed 获取单号信息失败回调
 **/
+ (void)oneSingleOrderPayWithAppbh:(NSString *)appbh payType:(NSString *)paytype orderId:(NSString *)orderId getPayInfoSuccess:(void(^)(id resultDic))payInfoSuccess getPayInfoFailed:(void(^)(NSString *errorStr))payInfoFailed aliPayCallback:(void(^)(NSDictionary *resultDic))aliPayCallback;;

/**
 * 开始支付（获取订单信息并调起支付服务）
 * userId 用户手机号
 * paytype: 'wx' 'ali'
 * orderIds 订单编号数组的json字符串
 * payInfoSuccess 获取单号信息成功回调
 * payInfoFailed 获取单号信息失败回调
 * aliPayCallback 如果是ali支付，sdk有一个用于网页支付的支付结果回调
 **/
+ (void)startPayServerWithUserId:(NSString *)userId paytype:(NSString *)paytype orderIds:(NSString *)orderIds getPayInfoSuccess:(void(^)(id resultDic))payInfoSuccess getPayInfoFailed:(void(^)(NSString *errorStr))payInfoFailed aliPayCallback:(void(^)(NSDictionary *resultDic))aliPayCallback;

/**
 * 调起服务查询支付结果
 * paytype: 'wx' 'ali'
 * orderIds 单号数组的json字符串
 * outTradeno 支付中心订单号 没有可以传空字符
 * paySuccess 支付成功回调
 * payFailed 支付失败回调
 * requestFailed 请求失败回调
 **/
+ (void)checkPayResultServerWithPayType:(NSString *)payType orderIds:(NSString *)orderIds outTradeNo:(NSString *)outTradeNo paySuccess:(void(^)(NSDictionary *resultObj))paySuccess payFailed:(void(^)(NSDictionary *resultObj))payFailed requestFailed:(void(^)(NSString *error))requestFailed;

/**
 * 积分卡充值
 * paytype: 'wx' 'ali'
 * coinNumber:金额
 * coinId:积分卡id
 * payInfoSuccess 获取单号信息成功回调
 * payInfoFailed 获取单号信息失败回调
 * aliPayCallback 如果是ali支付，sdk有一个用于网页支付的支付结果回调
 **/
+ (void)creditCardRechargeServeWithPayType:(NSString *)payType coinNumber:(NSString *)coinNumber coinId:(NSString *)coinId getPayInfoSuccess:(void(^)(id resultDic))payInfoSuccess getPayInfoFailed:(void(^)(NSString *errorStr))payInfoFailed aliPayCallback:(void(^)(NSDictionary *resultDic))aliPayCallback;

@end

NS_ASSUME_NONNULL_END
