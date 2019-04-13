//
//  pcmPlayer.h
//  MSCDemo
//
//  Created by wangdan on 14-11-4.
//
//

#import <Foundation/Foundation.h>
#import<AVFoundation/AVFoundation.h>

@protocol PcmPlayerDelegate <NSObject>

/**
 * 播放完成
 **/
- (void)pcmPlayerDidFinishPlaying:(AVAudioPlayer *)player successfully:(BOOL)flag;

/**
 * 错误
 **/
- (void)pcmPlayerError:(NSString *)error;

/**
 * 音量
 **/
- (void)pcmPlayerVolume:(CGFloat)volume;

@end

@interface PcmPlayer : NSObject<AVAudioPlayerDelegate>

/**
 * initialize player and set the loacl path of audio file
 *
 * path   the loacl path of audio file
 * sample sample rate of audio，only for 8000 and 16000
 **/
-(id)initWithFilePath:(NSString *)path sampleRate:(long)sample;

/**
 * initialize player and set audio data
 *
 * data   audio data
 * sample sample rate of audio，only for 8000 and 16000
 **/
-(id)initWithData:(NSData *)data sampleRate:(long)sample;


-(id)initAudioPlayerWithFilePath:(NSString *)path sampleRate:(long)sample;
-(id)initAudioPlayerWithData:(NSData *)data sampleRate:(long)sample;

/**
 start playing
 ****/
- (void)play;

/**
 stop playing
 **/
- (void)stop;

/**
 whether or not it's playing
 ****/
@property (nonatomic,assign) BOOL isPlaying;

@property (nonatomic, weak) id<PcmPlayerDelegate> delegate;

@end
