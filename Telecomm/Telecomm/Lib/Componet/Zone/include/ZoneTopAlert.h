//
//  ZoneTopAlert.h
//  Zone
//
//  Created by 王胜利 on 2018/5/14.
//  Copyright © 2018年 pansoft. All rights reserved.
//  空间顶部提示View
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ZoneTopAlertType) {
    ZoneTopAlertTypeSuccess,
    ZoneTopAlertTypeWarning,
    ZoneTopAlertTypeError,
};

@interface ZoneTopAlert : UIViewController

+ (void)alertWithType:(ZoneTopAlertType)type alertString:(NSString *)string;

@end
