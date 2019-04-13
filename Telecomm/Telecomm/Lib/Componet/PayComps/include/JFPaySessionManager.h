//
//  JFPayNetWorkManager.h
//  EShopComps
//
//  Created by YRH on 2018/9/17.
//  Copyright © 2018年 谢虎. All rights reserved.
//

/**
 * 支付的时候用到的接口服务
 **/

#import <Foundation/Foundation.h>

@interface JFPaySessionManager : NSObject

/**
 * 获取支付信息
 * @param urlStr 请求地址
 * @param success 成功的block
 * @param fail 失败的block
 **/
+ (void)requestPayInfoWithUrlString:(NSString *)urlStr success:(void(^)(NSDictionary *resultDic))success fail:(void(^)(NSString *error))fail;

/**
 * 检查支付结果
 * @param paySuccess 支付成功
 * @param payFail 支付失败
 * @param failBack 请求失败的block
 **/
+ (void)checkPayResultWithUrlString:(NSString *)urlStr paySuccess:(void(^)(NSDictionary *resultDic))paySuccess payFail:(void(^)(NSDictionary *resultDic))payFail requestFail:(void(^)(NSString *error))failBack;

@end
