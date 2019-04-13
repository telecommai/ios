//
//  JFSecretFileCell.h
//  ESPChatComps
//
//  Created by 吴鹏 on 2018/5/5.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFRecentFileManager.h"

@protocol JFSecretFileDelegate<NSObject>

/**
 删除密件
 */
- (void)deleteFile:(NSInteger)index;

@end

@interface JFSecretFileCell : UITableViewCell

@property (nonatomic, weak) id <JFSecretFileDelegate> delegate;
@property (nonatomic, assign) NSInteger index;
///设置显示文件信息
- (void)setFileInfo:(NSDictionary *)dataDic;

- (void)setFileModel:(RecentFileModel *)fileModel;

@end
