//
//  VideoPlayerController.h
//  ToolsLibrary
//
//  Created by 赵洪壮 on 2018/10/15.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  短视频播放器(先下载再播放)

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VideoPlayerController : UIViewController

/// 网络播放地址
@property (nonatomic, copy) NSString *urlString;
/// 本地播放路径
@property (nonatomic, copy) NSString *localPath;

@end

NS_ASSUME_NONNULL_END
