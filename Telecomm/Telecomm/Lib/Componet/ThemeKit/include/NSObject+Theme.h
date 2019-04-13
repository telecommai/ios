//
//  NSObject+Theme.h
//  ThemeDemo
//
//  Created by 王胜利 on 18/4/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef id _Nullable (^ThemePicker)(void);

@interface NSObject (Theme)

@property (nonatomic, strong, nonnull,readonly) NSMutableDictionary<NSString *, ThemePicker> *pickers;

- (void)removePickerForSEL:(nullable SEL)selector;


@end
