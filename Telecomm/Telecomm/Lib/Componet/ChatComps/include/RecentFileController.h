//
//  RecentFileController.h
//  ChatComps
//
//  Created by 王胜利 on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFRecentFileManager.h"


/**
 获取最近文件的类型

 - RecentFileGetTypeSend: 直接发送(默认)
 - RecentFileGetTypeBackInfo: 返回文件信息
 */
typedef NS_ENUM(NSUInteger, RecentFileGetType) {
    RecentFileGetTypeSend,
    RecentFileGetTypeBackInfo,
};

@interface RecentFileController : UIViewController

- (instancetype)initWithSelectedFiles:(NSArray <RecentFileModel *>*)selectFiles complete:(void(^)(NSArray <RecentFileModel *>*))complete;

@end
