//
//  CALayer+Theme.h
//  ThemeKit
//
//  Created by 王胜利 on 2018/4/21.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "UIColor+Theme.h"

@interface CALayer (Theme)
@property (nonatomic,copy)ThemeCGColorPicker theme_shadowColor;
@property (nonatomic,copy)ThemeCGColorPicker theme_borderColor;
@end
