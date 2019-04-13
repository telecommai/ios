//
//  FullScreenAnimationUtil.h
//  TalkChain
//
//  Created by 王胜利 on 2018/4/17.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "JFChatAnimationModel.h"

@interface FullScreenAnimationUtil : NSObject

/// 赋值全屏动画并启动(覆盖执行如果上次动画还在执行，自动结束上次动画)
+ (void)startFullScreenAnimationWithModel:(JFChatAnimationModel *)model;
+ (void)startFullScreenAnimationWithModel:(JFChatAnimationModel *)model complete:(void(^)(void))completeBlock;
+ (void)startFullScreenAnimationWithImages:(NSArray <UIImage *>*)images duration:(NSTimeInterval)duration repeatCount:(NSUInteger)count;
+ (void)startFullScreenAnimationWithImages:(NSArray <UIImage *>*)images duration:(NSTimeInterval)duration repeatCount:(NSUInteger)count complete:(void(^)(void))completeBlock;
/// 停止当前全屏动画
+ (void)stopFullScreenAnimation;
/// 当前是否在动画中
+ (BOOL)isFullScreenAnimating;

@end
