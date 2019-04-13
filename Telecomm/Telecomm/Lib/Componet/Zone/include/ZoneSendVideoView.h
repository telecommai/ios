//
//  ZoneSendVideoView.h
//  Zone
//
//  Created by 王胜利 on 2018/5/18.
//  Copyright © 2018年 pansoft. All rights reserved.
//  发送引力波(视频)，选择完成后缩略图
//

#import <UIKit/UIKit.h>
#import "Zone.h"
#import "JFMessageItemProgressView.h"

@interface ZoneSendVideoView : UIView

/// 删除网页
@property (nonatomic, copy) VoidBlock deleteVideoBlock;
@property (nonatomic, strong) JFMessageItemProgressView *progressView;

/// 本地视频展示
- (void)contentViewWithLocalPath:(NSString *)path WithCoverImage:(UIImage *)image;
/// 更新进度
- (void)updateShadeViewPercentWithProgress:(NSString *)progress;

@end
