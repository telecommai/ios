//
//  UIView+HUD.h
//  TalkChain
//
//  Created by 王胜利 on 2018/3/26.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"

@interface UIView (TCHUD)

/// 显示或修改提示框文字内容
- (void)showTCHUDWithTitle:(NSString *)title;
/// 隐藏TalkChain提示框
- (void)hiddenTCHUD;
/// 显示文字，自定义显示时间
- (void)showTipTCHUDWithTitle:(NSString *)title delayTime:(NSTimeInterval)delayTime;


@end
