//
//  JFCluesStatement.h
//  ChatComps
//
//  Created by YRH on 2018/10/16.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

@interface JFChatListCluesStatement : NSObject

/// 消息列表有人@我时显示的字符串
+ (NSMutableAttributedString *)chatListAtMeCluesStatementWithText:(NSString *)text message:(IMStructMessage *)structMessage;

@end

