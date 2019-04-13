//
//  JWaveFormView.h
//  ChatComps
//
//  Created by Sunjimin on 2018/9/11.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

typedef void(^WaveImage)(UIImage *waveImage, UIImage *tintedImage);
@interface JWaveFormView : UIView

@property (nonatomic, strong)           NSURL *audioURL;                    /// 音频的路径
@property (nonatomic, assign, readonly) unsigned long int totalSamples;     /// 总长度
@property (nonatomic, assign)           unsigned long int progressSamples;  /// 当前播放进度
@property (nonatomic)                   BOOL doesAllowScrubbing;
@property (nonatomic, strong) UIImageView       *image;                 /// 音频图
@property (nonatomic, copy) WaveImage waveImage; /// 绘制的声波图

@end
