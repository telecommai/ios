//
//  JFMessageMenuManager.h
//  ChatComps
//
//  Created by YRH on 2018/10/22.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

/// 消息menu控制类

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

@interface JFMessageMenuManager : NSObject

- (NSArray <UIMenuItem *>*)menuArrayWithMessage:(IMStructMessage *)currentMessage;
- (BOOL)messageMenuCanPerformAction:(SEL)action withSender:(id)sender;

@end

