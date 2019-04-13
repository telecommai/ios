//
//  PlaySmallVideoView.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/12/26.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class PlaySmallVideoView;
@protocol PlaySmallVideoViewDelegate <NSObject>

- (void)dismessPlaySmallVideoView:(PlaySmallVideoView *)view;

@end

@interface PlaySmallVideoView : UIView

@property (nonatomic, strong) UIView *backView;
@property (nonatomic, strong) AVPlayerLayer *playerLayer;
/// json里面有两个路径 都传进来
/// 网络的
@property (nonatomic, copy) NSString *urlPath;
/// 本地的
@property (nonatomic, copy) NSString *localPath;

@property (nonatomic, weak) id<PlaySmallVideoViewDelegate> delegate;

/// 播放本地路径的视频(localPath: 完整的路径)
- (void) playVideoWithLocalPath:(NSString *) localPath;
/// 传入所需的路径
- (void)playVideoUrlPath:(NSString *)urlPath localPath:(NSString *)localPath;
@end

