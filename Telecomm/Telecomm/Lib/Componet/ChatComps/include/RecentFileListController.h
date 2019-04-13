//
//  RecentFileListController.h
//  ChatComps
//
//  Created by 王胜利 on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFRecentFileManager.h"

@interface RecentFileListController : UITableViewController

/// 文件类型
@property (nonatomic,assign) RecentFileType fileType;
@property (nonatomic,assign) BOOL isNeedAlreadyDownloadFile;

/// 列表点击事件回调
@property (nonatomic,copy) void (^fileChangeBlock)(RecentFileType type);

- (void)refreshData;

@end
