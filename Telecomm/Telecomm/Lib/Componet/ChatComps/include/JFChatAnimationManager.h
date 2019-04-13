//
//  AnimationManager.h
//  ChatComps
//
//  Created by Javor on 2018/4/2.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"
#import "JFChatAnimationModel.h"

@interface JFChatAnimationManager : NSObject

+(JFChatAnimationModel *)animationWithMessage:(IMStructMessage *)message;
+(void)sendAnimationMessage:(JFChatAnimationModel *)model;

@end
