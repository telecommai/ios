//
//  IFlyInitializeService.h
//  ChatComps
//
//  Created by YRH on 2018/9/7.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

// 科大讯飞初始化启动服务

#import <Foundation/Foundation.h>
#import "IFlyMSC/IFlyMSC.h"
#import "Definition.h"

@interface JFiFlyService : NSObject

/// 科大讯飞初始化启动服务
+ (void)iFlyInitializeStartService;
/// sdk工作路径
+ (NSString *)iFlySDKWorkPath;

@end
