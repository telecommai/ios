//
//  IPToolManager.h
//  ToolsLibrary
//
//  Created by YRH on 2018/9/5.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IPToolManager : NSObject

+ (instancetype)sharedManager;

/**
 *  获取具体的ip地址
 */
- (NSString *)currentIpAddress;


/**
 *  获取ip地址的详细信息 Name:   MAC:   IP: 
 */
- (NSMutableDictionary *)currentIPAdressDetailInfo;

@end
