//
//  UIViewController+TipView.h
//  EShop
//
//  Created by 王胜利 on 2018/2/28.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PromptTipView.h"

@class PromptTipView;

@interface UIViewController (TipView)

/**
 提示视图

 @param image 提示图片
 @param string 提示文本
 */
- (PromptTipView *)promptViewWithPromptImage:(UIImage *)image
                     promptString:(NSString *)string;


/**
 错误提醒视图(带重试按钮)

 @param image 提示图片
 @param string 提示文本
 @param block 重试按钮回调事件
 */
- (PromptTipView *)promptViewWithPromptImage:(UIImage *)image
                     promptString:(NSString *)string
                 retryButtonBlock:(VoidBlock)block;


/**
 通用网络错误提醒

 @param block 重试按钮回调事件
 */
- (PromptTipView *)netErrorPromptViewWithRetryBlock:(VoidBlock)block;

/// 通用无数据提醒
- (PromptTipView *)noDataPromptView;


- (void)removePrompView;

@end
