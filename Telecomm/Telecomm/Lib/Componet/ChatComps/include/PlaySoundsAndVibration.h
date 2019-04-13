//
//  PlaySoundsAndVibration.h
//  PlaySoundsAndVibration
//
//  Created by 于仁汇 on 16/8/12.
//  Copyright © 2016年 YRH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

/**
 *  播放系统音乐、震动类
 */

@interface PlaySoundsAndVibration : NSObject {
    SystemSoundID soundID;
}

/**
 *  为播放震动效果初始化
 *
 *  @return self
 */
- (id)initForPlayingVibrate;

/**
 *  为播放系统音效初始化(无需提供音频文件)
 *
 *  @param resourceName 系统音效名称
 *  @param type         系统音效类型
 *
 *  @return self
 */
- (id)initForPlayingSystemSoundEffectWith:(NSString *)resourceName ofType:(NSString *)type;

/**
 *  为播放特定的音频文件初始化（需提供音频文件）
 *
 *  @param filename 音频文件名（加在工程中
 *
 *  @return self
 */
- (id)initForPlayingSoundEffectWith:(NSString *)filename;

/**
 *  播放音效
 */
- (void)play;

/**
 *  播放震动
 */
- (void)playVibrate;

/**
 *  播放声音
 */
- (void)playSound;

@end
