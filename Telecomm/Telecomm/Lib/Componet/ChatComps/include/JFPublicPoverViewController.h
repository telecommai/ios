//
//  JFPublicPoverViewController.h
//  ChatComps
//
//  Created by YRH on 2018/5/23.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

/*
 应用号样式键盘 气泡menu
 */

#import <UIKit/UIKit.h>

@interface JFPublicPoverViewController : UIViewController

/// 数据源
@property (nonatomic, strong) NSMutableArray *dataArray;

/// 显示pover
- (void)showPublicPoverViewControllerWithSourceView:(UIView *)sourceView animated:(BOOL)animated;

@end
