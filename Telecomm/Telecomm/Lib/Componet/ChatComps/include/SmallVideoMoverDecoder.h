//
//  SmallVideoMoverDecoder.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/7/7.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

/// 播放视频
@protocol SmallVideoMoverDecoderDelegate <NSObject>

- (void)mMoveDecoder:(id)moveDecoder onNewVideoFrameReady:(CMSampleBufferRef)cmsampleBufferRef;
- (void)mMoveDecoderOnDecoderFinished:(id)finishe;

@end

@interface SmallVideoMoverDecoder : NSObject

/**
 *  文件路径
 */
@property (nonatomic, strong) NSURL *filePath;

/**
 *  delegate
 */
@property (nonatomic, weak) id<SmallVideoMoverDecoderDelegate> delegate;

/**
 *  解析视频
 *
 *  @param videoPath 视频路径
 */
- (void)transformViedoPathToSampBufferRef:(NSString *)videoPath;

@end
