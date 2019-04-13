//
//  HcdGuideViewManager.h
//  HcdGuideViewDemo
//
//  Created by 苏友龙 引导页 on 16/7/12.
//  Copyright © 2016年 Polesapp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EFGuideView : UIView

/// 显示引导页
+ (void)showGuideViewWithImages:(NSArray *)images
                 buttonTitle:(NSString *)title
               buttonTitleColor:(UIColor *)titleColor
                  buttonBGColor:(UIColor *)bgColor
              buttonBorderColor:(UIColor *)borderColor
                     skipAction:(void(^)(void))skipAction;

@end
