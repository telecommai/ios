//
//  UITableView+Theme.h
//  ThemeKit
//
//  Created by 王胜利 on 2018/4/20.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"

@interface UITableView (Theme)

@property (nonatomic,copy)ThemeColorPicker theme_separatorColor;

@property (nonatomic,copy)ThemeColorPicker theme_sectionIndexBackgroundColor;
@property (nonatomic,copy)ThemeColorPicker theme_sectionIndexColor;
@end
