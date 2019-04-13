//
//  EShopPhotoBrowser.h
//  EShopPhotoBrowser
//
//  Created by wsl on 2017/6/29.
//  Copyright © 2017年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EShopPhotoBrowser : UIViewController

/// 当前页
@property (nonatomic, assign) NSInteger page;

/// 显示图片浏览器
+ (instancetype)showPhotoBrowserWithSuperVc:(UIViewController *)superVc imageUrls:(NSArray *)imageUrls selectPage:(NSInteger)page;

@end
