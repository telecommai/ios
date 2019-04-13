//
//  JFKeyBoardSendMessage.h
//  ChatComps
//
//  Created by YRH on 2018/10/18.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

// 发送文字消息
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFKeyBoardSendMessage : NSObject

/// 键盘发送文字消息
+ (void)keyBoardSendMessageWithAttributedString:(NSAttributedString *)attributedString;

/// 发送正在输入的消息
+ (void)keyBoardSendInputingMessage;
/// 发送结束输入的消息
+ (void)keyBoardSendDidEndInputMessage;

@end

NS_ASSUME_NONNULL_END
