//
//  UITextField+Theme.h
//  ThemeKit
//
//  Created by 王胜利 on 2018/4/20.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIColor+Theme.h"
#import "NSAttributedString+Theme.h"

@interface UITextField (Theme)

@property (nonatomic,copy)ThemeColorPicker theme_textColor;
@property (nonatomic,copy)ThemeAttributeStringPicker theme_attributePlaceHolder;
@end
