//
//  UITabBarItem+Theme.h
//  ThemeKit
//
//  Created by Javor Feng on 2019/1/29.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImage+Theme.h"

NS_ASSUME_NONNULL_BEGIN

@interface UITabBarItem (Theme)

@property (nonatomic,copy)ThemeImagePicker theme_image;
@property (nonatomic,copy)ThemeImagePicker theme_selectedImage;

@end

NS_ASSUME_NONNULL_END
