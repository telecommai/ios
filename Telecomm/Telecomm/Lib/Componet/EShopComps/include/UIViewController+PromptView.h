//
//  UIViewController+PromptView.h
//  EShop
//
//  Created by 王胜利 on 2018/2/28.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (PromptView)

/**
 提示视图

 @param image 提示图片
 @param string 提示文本
 */
- (EShopPromptTipView *)eshopPromptViewWithPromptImage:(UIImage *)image
                     promptString:(NSString *)string;


/**
 错误提醒视图(带重试按钮)

 @param image 提示图片
 @param string 提示文本
 @param block 重试按钮回调事件
 */
- (EShopPromptTipView *)eshopPromptViewWithPromptImage:(UIImage *)image
                     promptString:(NSString *)string
                 retryButtonBlock:(VoidBlock)block;



/**
 通用网络错误提醒

 @param block 重试按钮回调事件
 */
- (EShopPromptTipView *)eshopNetErrorPromptViewWithRetryBlock:(VoidBlock)block;


- (void)removePrompView;

@end
