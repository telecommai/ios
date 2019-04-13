//
//  RequestManager.h
//  OpenPlanet
//
//  Created by StarLord on 2018/8/7.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TalkChainHeader.h"

@interface RequestManager : NSObject

/// post请求
+ (void)POST:(NSString *)urlString params:(NSDictionary *)params haveToken:(BOOL)haveToken progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail;

/// get请求
+ (void)GET:(NSString *)urlString params:(NSDictionary *)params haveToken:(BOOL)haveToken progress:(FloatBlock)progress success:(SuccessBlock)success fail:(FailBlock)fail;

@end
