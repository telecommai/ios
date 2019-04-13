//
//  NSData+Theme.h
//  ThemeKit
//
//  Created by 王胜利 on 2018/5/2.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSData *(^ThemeDataPicker)(void);


@interface NSData (Theme)

+ (ThemeDataPicker)theme_dataForPath:(NSString *)path;

@end
