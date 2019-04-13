//
//  WCSessionManager.h
//  WalletManager
//
//  Created by 王胜利 on 2019/3/21.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WatchConnectivity/WatchConnectivity.h>


// iOS 和 WatchOS 交互 格式
//        @{
//          @"result":@"1",    // 1:成功 0:失败
//          @"msg":@"拒绝存储"  // 描述
//          }


NS_ASSUME_NONNULL_BEGIN

@interface WCSessionManager : NSObject

@property (nonatomic,strong) WCSession *session;

+ (BOOL)isSupported;
+ (instancetype)manager;


@end

NS_ASSUME_NONNULL_END
