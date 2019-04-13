//
//  LateralSpreadsViewController.h
//  sssssqqq
//
//  Created by 于仁汇 on 16/12/1.
//  Copyright © 2016年 于仁汇. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LateralSpreadsViewController : UIViewController

/// 侧滑出来的控制器
@property (nonatomic, strong) UIViewController *leftViewController;
/// 主控制器
@property (nonatomic, strong) UIViewController *mainViewController;

/// 展示侧边界面
- (void)showLeftController:(BOOL)animated;
/// 隐藏侧边界面
- (void)showRootController:(BOOL)animated;


@end
