//
//  JFChatTipsContentUtil.h
//  ChatComps
//
//  Created by YRH on 2018/10/13.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFChatTipsContentUtil : NSObject

/// 通知类型,例如加群，建群的消息，显示的文字内容
+ (NSString *)messageTypeChatTipsContentWithMessage:(IMStructMessage *)structMessage;

@end

NS_ASSUME_NONNULL_END
