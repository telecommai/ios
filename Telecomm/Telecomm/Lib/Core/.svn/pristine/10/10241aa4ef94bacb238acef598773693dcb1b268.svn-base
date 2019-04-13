//
//  MyTabBarController.h
//  YTAutoLayout
//
//  Created by fly on 14/12/16.
//  Copyright (c) 2014年 fly. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MainTabBarControllerDelegate <NSObject>

@optional
- (void)mainTabBarController:(UITabBarController *)tabBarController shouldSelectViewController:(UIViewController *)viewController;
- (void)mainTabBarController:(UITabBarController *)tabBarController didSelectViewController:(UIViewController *)viewController;

@end

@interface MainTabBarController : UITabBarController
@property (nonatomic, strong) UIScreenEdgePanGestureRecognizer *panGestureRec;

@property (nonatomic, weak) id<MainTabBarControllerDelegate> mainTabBarDelegate;

@property (nonatomic, strong) UIView *leftView;
//显示左边菜单
- (void)showLeftView:(BOOL)animated;
- (void)closeSideBar:(BOOL)animated;
- (void)selectTabIndex:(NSInteger)index;
@end
 
