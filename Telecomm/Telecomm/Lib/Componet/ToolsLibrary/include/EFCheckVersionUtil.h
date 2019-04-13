//
//  EFCheckVersionUtil.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/4/25.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EFChatHttpManager.h"
#import "ViewControllerManager.h"

@interface EFCheckVersionUtil : NSObject<UIAlertViewDelegate>
/**
 检测版本信息
 */
+(void)versionCheckAlert:(BOOL)alert;
@end
