//
//  NSAttributedString+Theme.h
//  ThemeKit
//
//  Created by 王胜利 on 2018/4/23.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIColor+Theme.h"

typedef NSAttributedString *(^ThemeAttributeStringPicker)(void);

@interface NSAttributedString (Theme)

+ (ThemeAttributeStringPicker)theme_attributeStringWithString:(NSString *)string attributeColor:(ThemeColorPicker)colorPicker;


@end
