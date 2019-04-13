//
//  SpreadsViewController.h
//  sq
//
//  Created by 于仁汇 on 16/12/1.
//  Copyright © 2016年 于仁汇. All rights reserved.
//

/*
    控制侧滑界面与主界面的控制器类
 */

#import <UIKit/UIKit.h>
#import "EFUIViewController.h"

@interface SideslipViewController : EFUIViewController

/// 侧滑出来的控制器
@property (nonatomic, strong) UIViewController *leftViewController;
/// 主控制器
@property (nonatomic, strong) UIViewController *mainViewController;

// 边缘滑动手势
@property (nonatomic, strong) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;

/// 展示侧边界面
- (void)showLeftController:(BOOL)animated;
/// 快速显示主界面（无动画回调）
- (void)directlyShowRootController;
/// 隐藏侧边界面
- (void)showRootController:(BOOL)animated;

- (void)startRespondGestureRecognizer;
- (void)cancelGestureRecognizer;


@end
