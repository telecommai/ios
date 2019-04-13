//
//  JFACSBlueToothDeviceDBManager.h
//  ACSBlueToothComps
//
//  Created by 董艳武 on 2019/3/4.
//  Copyright © 2019 董艳武. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PanDBManager.h"
#import "Constant.h"
#import "JFBlueToothDeviceModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFACSBlueToothDeviceDBManager : NSObject

/**
 保存读卡器设备信息
 
 @param uuid 读卡器的uuid
 @param macId 读卡器的macId
 @param name 读卡器的名称
 @param iconUrl 读卡器的图表地址
 @param type 读卡器类型
 @return 是否插入成功
 */
+(BOOL)insertDeviceInfoWithUuid:(NSString *)uuid
                          macId:(NSString *)macId
                           name:(NSString *)name
                        iconUrl:(NSString *)iconUrl
                           type:(NSString *)type;


/**
 获取已连接的蓝牙设备列表

 @return 蓝牙设备模型列表
 */
+(NSArray<JFBlueToothDeviceModel *> *)getSavedBlueToothDeviceList;


/**
 根据传入的uuid删除储存的蓝牙设备

 @param uuid 要删除的设备的uuid
 @return 是否删除成功
 */
+(BOOL)deleteSvedBlueToothDeviceWithUuid:(NSString *)uuid;

@end

NS_ASSUME_NONNULL_END
