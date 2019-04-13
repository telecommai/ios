//
//  JFSpeechRecognitionManager.h
//  ChatComps
//
//  Created by YRH on 2018/9/4.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IFlyMSC/IFlyMSC.h"

@protocol JFSpeechRecognitionManagerDelegate <NSObject>

/// 识别结果返回代理
- (void)speechRecognizerOnResults:(NSString *)results isLast:(BOOL)isLast;

/// 识别会话结束返回代理
- (void)speechRecognizerOnCompleted:(IFlySpeechError *)error;

/// 停止录音回调
- (void)speechRecognizerOnEndOfSpeech;

/// 开始录音回调
- (void)speechRecognizerOnBeginOfSpeech;

/// 音量回调函数
- (void)speechRecognizerOnVolumeChanged:(int)volume;

/// 会话取消回调
- (void)speechRecognizerOnCancel;

@end

@interface JFSpeechRecognitionManager : NSObject

@property (nonatomic, weak) id <JFSpeechRecognitionManagerDelegate> delegate;

+ (instancetype)speechRecognizer;

/// 录音文件存储相对路径，Documents/xxx/xx.pcm （与sdk工作路径设置有关）
- (void)createAudiolocalRelativeFilePath:(NSString *)audioPath;

/// 启动识别服务
- (BOOL)speechRecognizerStartListening;

/// 停止录音
- (void)speechRecognizerStopListening;

/// 取消本次录音
- (void)speechRecognizercancel;

/// 删除本次录音文件
- (BOOL)deleteAudiolocalFile;

/// 销毁识别对象
- (BOOL)destroy;

/// 是否正在识别
@property (nonatomic, readonly) BOOL speechRecognierIsListening;

@end
