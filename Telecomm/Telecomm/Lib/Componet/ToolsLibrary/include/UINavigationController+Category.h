//
//  UINavigationController+Category.h
//  EShop
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark - UINavigationController扩展
@interface UINavigationController (NavBarBgAlpha)
/// 设置导航栏透明度
- (void)setNeedsNavigationBackground:(CGFloat)alpha;

@end
