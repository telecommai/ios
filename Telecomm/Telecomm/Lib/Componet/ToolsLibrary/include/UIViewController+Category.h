//
//  UIViewController+Category.h
//  EShop
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Keyboard)

/// 设置点击空白处自动关闭键盘
-(void)setupForDismissKeyboard;

/// 显示提醒
- (void)showHint:(NSString *)hint;
/// 显示提醒(竖直方向位置偏移)
- (void)showHint:(NSString *)hint yOffset:(float)yOffset;


/// 显示系统Alert提示(不带选项、1s自动消失)
- (void)showAutoDismissSystemAlertWithTitle:(NSString *)title message:(NSString *)message;
/// 显示系统Alert提示(不带选项、根据设置的秒数自动消失)
- (void)showAutoDismissSystemAlertWithTitle:(NSString *)title message:(NSString *)message dismissTime:(CGFloat)dismissTime;


#warning 过时方法(位置不对，待整理)
-(void)registerViewForKeyboardNotifications;
-(void)resignViewForKeyboardNotifications;
-(void)keyboardWithShow:(CGFloat)time key_height:(CGRect)keyRect;
-(void)keyboardWithHide:(CGFloat)time;




@end




