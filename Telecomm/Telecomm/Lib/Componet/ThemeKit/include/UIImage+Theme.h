//
//  UIImage+Theme.h
//  ThemeDemo
//
//  Created by 王胜利 on 18/4/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"

typedef UIImage *(^ThemeImagePicker)(void);


@interface UIImage (Theme)

/// 注意：name需传主题文件夹image路径往后的相对路径(例：login/login_log.png)

/// 从bundle中读取图片
+ (ThemeImagePicker)theme_bundleImageNamed:(NSString *)name;
+ (ThemeImagePicker)theme_bundleImageNamed:(NSString *)name resizableImageWithCapInsets:(UIEdgeInsets)capInsets;
+ (ThemeImagePicker)theme_bundleImageNamed:(NSString *)name resizableImageWithCapInsets:(UIEdgeInsets)capInsets resizingMode:(UIImageResizingMode)resizingMode;


/// 从皮肤配置沙盒中读取图片
+ (ThemeImagePicker)theme_sandBoxImageNamed:(NSString *)name;
+ (ThemeImagePicker)theme_sandBoxImageNamed:(NSString *)name resizableImageWithCapInsets:(UIEdgeInsets)capInsets;
+ (ThemeImagePicker)theme_sandBoxImageNamed:(NSString *)name resizableImageWithCapInsets:(UIEdgeInsets)capInsets resizingMode:(UIImageResizingMode)resizingMode;


@end
