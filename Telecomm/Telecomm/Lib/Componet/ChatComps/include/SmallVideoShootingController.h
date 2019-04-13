//
//  SmallVideoShootingView.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/7/6.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SmallVideoCaptureVideo.h"

@protocol SmallVideoShootingViewDegelate <NSObject>

/**
 *  开始录制
 */
- (void)smallVideoBeginRecordVideo;

/**
 *  发送视频
 */
- (void)smallVideoSendVideoWithSandboxPath:(NSString *)videoPath time:(NSString *)time filePath:(NSString *)filePath;

/**
 创建失败
 */
- (void)smallVideoCreateError:(NSString *)error;

/**
 模态消失之后的代理
 */
- (void)dismissCompletion;

@end

@interface SmallVideoShootingController : UIViewController

/// 录像预览层
@property (nonatomic, strong) SmallVideoCaptureVideo *preView;
/// 进度条
@property (nonatomic, strong) UIView *lineView;
/// 录制视频的路径
@property (nonatomic, copy) NSString *videoPath;
/// 代理
@property (nonatomic, weak) id<SmallVideoShootingViewDegelate> delegate;

@end

