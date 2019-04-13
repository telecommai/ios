//
//  EShopNoMercePlaceholderFigureView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/5.
//  Copyright © 2018年 wsl. All rights reserved.
//  列表数据为空或者请求失败时候的提示View

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "Masonry.h"

//typedef void(^NumberBlock)(NSInteger number);
//typedef void(^StringBlock)(NSString* sender);
//typedef void(^SuccessBlock)(id result);
//typedef void(^FailBlock)(NSString* errorDescription);

@interface PromptTipView : UIView


/**
 提示视图

 @param image 提示图片
 @param string 提示文本
 */
- (void)promptViewWithPromptImage:(UIImage *)image
               promptString:(NSString *)string;


/**
 错误提醒视图(带重试按钮)

 @param image 提示图片
 @param string 提示文本
 @param block 重试按钮回调事件
 */
- (void)promptViewWithPromptImage:(UIImage *)image
                     promptString:(NSString *)string
                 retryButtonBlock:(VoidBlock)block;



/**
 通用网络错误提醒

 @param block 重试按钮回调事件
 */
- (void)netErrorPromptViewWithRetryBlock:(VoidBlock)block;
- (void)noDataPromptView;
@end
