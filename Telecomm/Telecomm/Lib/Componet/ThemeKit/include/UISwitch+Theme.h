//
//  UISwitch+Theme.h
//  ThemeKit
//
//  Created by 亦晴 on 2018/4/23.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"
#import "NSString+Theme.h"

@interface UISwitch (Theme)
@property (nonatomic, copy) ThemeColorPicker theme_tintColor;
@property (nonatomic, copy) ThemeColorPicker theme_onTintColor;
@property (nonatomic, copy) ThemeColorPicker theme_thumbTintColor;
@end
