//
//  Zone.h
//  Zone
//
//  Created by 王胜利 on 2018/5/3.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#ifndef Zone_h
#define Zone_h

#define kSendShortPostNotificationKey @"kSendShortPostNotificationKey"

#define kVideoMaxSize 20.00
#define kUserId [EnvironmentVariable getIMUserID]
#define kPassword [EnvironmentVariable getIMPassword]


#define ZoneThemeColor RGB(19, 85, 154)
#define ZoneBundle @"Zone.bundle"

typedef void(^postShortIdBlock)(NSString *postShortId, NSInteger coinCount);

#ifdef __OBJC__
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif

#import "Constant.h"
#import "ZoneModel.h"
#import "ZoneNetworkManager.h"
#import "ZoneManager.h"
#import "ZoneUtil.h"
#import "CategoryHeader.h"
#import "ThemeKit.h"
#import "UIViewController+Extension.h"
#import "UIView+TCHUD.h"
#import "UIViewController+TCHUD.h"
#import "ZoneTopAlert.h"
#import "UIImage+Category.h"
#import "EnvironmentVariable.h"
#import "SLAlertController.h"
#import "ViewControllerManager.h"


#import "Masonry.h"
#import "AFNetworking.h"
#import "UIImageView+WebCache.h"
#import "UIButton+WebCache.h"
#import "MJRefresh.h"
#import "MJExtension.h"
#import "MBProgressHUD.h"



#endif /* Zone_h */
