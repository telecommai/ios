//
//  SLAlertController.h
//  SLAlertController
//
//  Created by 王胜利 on 2018/7/5.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SLAlertController;

typedef SLAlertController *(^AlertButton)(NSString *title,void(^handle)(UIAlertAction *action,UIAlertController *alert));
typedef SLAlertController *(^AlertTextField)(void(^handle)(UITextField *textField,UIAlertController *alert));
typedef void(^ShowAlert)(UIViewController *controller);


@interface SLAlertController : UIAlertController

/// 显示系统Alert(iOS 8 +)
+ (SLAlertController *)sl_alertWithTitle:(NSString *)title message:(NSString *)message NS_AVAILABLE_IOS(8_0);
/// 显示系统ActionSheet(iOS8 +)
+ (SLAlertController *)sl_actionSheetWithTitle:(NSString *)title message:(NSString *)message NS_AVAILABLE_IOS(8_0);

/// 添加Cancel按钮
@property (nonatomic,copy,readonly) AlertButton addCancelButton;
/// 添加Destructive按钮
@property (nonatomic,copy,readonly) AlertButton addDestructiveButton;
/// 添加Default按钮
@property (nonatomic,copy,readonly) AlertButton addDefaultButton;
/// 添加TextField输入框
@property (nonatomic,copy,readonly) AlertTextField addTextField;
/// 显示Alert
@property (nonatomic,copy,readonly) ShowAlert show;

@end

@interface UIViewController (SLAlert)

/// 显示一句话提示
- (void)sl_showAlertWithTitle:(NSString *)title message:(NSString *)message; NS_AVAILABLE_IOS(8_0);
- (void)sl_showAlertWithTitle:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle; NS_AVAILABLE_IOS(8_0);

@end


