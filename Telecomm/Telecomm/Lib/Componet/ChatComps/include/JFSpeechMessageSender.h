//
//  JFSpeechMessageSender.h
//  ChatComps
//
//  Created by StarLord on 2018/9/10.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

/// 发送消息
#import <Foundation/Foundation.h>

@interface JFSpeechMessageSender : NSObject

/// 发送消息
+ (void)speechRecognizeSendMessageWithRecognitionText:(NSString *)text time:(NSInteger)time audioRelativePath:(NSString *)audioRelativePath;

@end
