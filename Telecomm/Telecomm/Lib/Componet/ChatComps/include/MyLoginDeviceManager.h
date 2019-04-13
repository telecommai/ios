//
//  MyLoginDeviceManager.h
//  ChatComps
//
//  Created by 高建飞 on 2018/7/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constant.h"

@interface MyDeviceModel : NSObject

/// deviceId
@property (nonatomic, copy) NSString *deviceId;
/// clientId
@property (nonatomic, copy) NSString *clientId;
/// 设备名
@property (nonatomic, copy) NSString *deviceName;
/// PC或phone
@property (nonatomic, copy) NSString *deviceClass;
/// 设备厂商
@property (nonatomic, copy) NSString *deviceCompany;
/// 登录时间
@property (nonatomic, copy) NSString *loginTime;
/// 设备机型(iOS/Android/PC)
@property (nonatomic, copy) NSString *deviceType;
/// 下线/本机
@property (nonatomic, copy) NSString *rightText;

@property (nonatomic, copy) NSString *leftImage;

@end

typedef void(^Success)(NSMutableArray *datas);

@interface MyLoginDeviceManager : NSObject

/// 请求设备列表
+ (void)requestMyDeviceListSuccess:(SuccessBlock) success fail:(FailBlock) fail;
/// 对设备列表按时间排序
+ (NSMutableArray *)sortMyDevices:(NSMutableArray *)datas key:(NSString *)key;
/// 下线
+ (void)logoutOtherClientWithClientId:(NSString *)clientId deviceId:(NSString *)deviceId success:(DictionaryBlock)success fail:(FailBlock) fail;

@end
