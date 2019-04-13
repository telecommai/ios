//
//  SpeechRecognitionBox.h
//  ChatComps
//
//  Created by YRH on 2018/9/3.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IFlyMSC/IFlyMSC.h"

#define kBlank 20
#define kBoxWidth [UIScreen mainScreen].bounds.size.width - 20
#define kOperationButtonHeight 40
#define kMinInterval 0.5f

typedef NS_ENUM(NSUInteger, RecordingPhase) {
    /// 正在录音
    RecordingPhaseOngoing,
    /// 录音结束
    RecordingPhaseEnded
};

typedef void(^OperationCompletionHandle)(UIButton *sender);
typedef void(^UpdateTextViewHeight)(CGFloat newHeight);
typedef void(^SpeechRecognizerStartListeningError)(void);

@protocol JFSpeechRecognitionBoxDelegate <NSObject>

@optional
/// 录音结束
- (void)endOfSpeechWithText:(NSString *)text speechTimeLength:(NSInteger)timeLength;
/// 录音识别结束
- (void)boxSpeechRecognizerOnResults:(NSString *)results isLast:(BOOL)isLast;
/// 取消录音
- (void)onCancelSpeech;
/// 实时返回录制时间
- (void)listeningSpeechTimeLength:(NSInteger)timeLength;
/// 语音识别出现错误
- (void)boxSpeechRecognizerOnCompleted:(IFlySpeechError *)error;

@end

@class JFSpeechOperationBtnModel;
@interface JFSpeechRecognitionBox : UIView

@property (nonatomic, weak) id<JFSpeechRecognitionBoxDelegate> delegate; 
/// 按钮操作 block
@property (nonatomic, copy) OperationCompletionHandle operationCompletionHandle;
/// 语音听写开启监听失败
@property (nonatomic, copy) SpeechRecognizerStartListeningError startListeningError;
/// 操作按钮数组
@property (nonatomic, strong) NSMutableArray <JFSpeechOperationBtnModel *>*operationButtonArray;
/// 当前录制时间
@property (nonatomic, assign, readonly) NSInteger timerLength;

/// 更新textView高度
@property (nonatomic, copy) UpdateTextViewHeight updateTextViewHeight;

/// 是否正在识别
@property (nonatomic, readonly) BOOL boxIsListening;

/// 开始录音识别, 返回录音文件的相对路径
- (NSString *)speechRecognitionStartWithRelativePath;
/// 录音识别结束
- (void)speechRecognitionEnd;
/// 取消录音识别
- (void)speechRecognitionCancel;
/// 删除录音文件
- (void)deleteAudioFile;
/// 销毁识别对象
- (BOOL)boxDestroySpeechRecognizer;

@end

@interface JFSpeechOperationBtnModel : NSObject

/// 操作按钮标题
@property (nonatomic, copy) NSString *text;
/// 操作按钮事件
@property (nonatomic, assign) SEL sel;

+ (JFSpeechOperationBtnModel *)createOperationBtnModelWithText:(NSString *)text sel:(SEL)sel;

@end

@interface UIButton (ExtraAttributes)

@property (nonatomic, weak) id extraObj;

@end
