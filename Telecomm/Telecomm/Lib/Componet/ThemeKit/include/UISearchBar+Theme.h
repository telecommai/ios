//
//  UISearchBar+Theme.h
//  ThemeKit
//
//  Created by YRH on 2018/4/23.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"

@interface UISearchBar (Theme)

@property (nonatomic, copy) ThemeColorPicker theme_tintColor;
@property (nonatomic, copy) ThemeColorPicker theme_barTintColor;

@end
