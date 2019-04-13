//
//  NotificationUtil.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/6/1.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NotificationUtil : NSObject

/// 注册推送
+ (void)registerNotificationWithApplication:(UIApplication *)application notificationDelagte:(id)delegate;

@end
