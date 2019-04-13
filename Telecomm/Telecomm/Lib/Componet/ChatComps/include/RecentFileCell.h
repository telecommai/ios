//
//  RecentFileCell.h
//  ChatComps
//
//  Created by 王胜利 on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFRecentFileManager.h"

@interface RecentFileCell : UITableViewCell

- (void)cellWithFileModel:(RecentFileModel *)fileModel;

@property (nonatomic,copy)void(^longPressBlock)(RecentFileModel *model);

@end
