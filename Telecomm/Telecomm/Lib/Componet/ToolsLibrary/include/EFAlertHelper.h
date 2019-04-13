//
//  EFAlertHelper.h
//  ESPChatComps
//
//  Created by 亦晴 on 2018/4/23.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface EFAlertHelper : NSObject
/**
 * 一个Action
 */
+ (void)alertWithTitle:(NSString *)title
               message:(NSString *)message
            actionName:(NSString *)actionName
        viewController:(UIViewController *)viewController
                action:(void(^)())oneAction;

/**
 * 两个Action
 */
+ (void)alertWithTitle:(NSString *)title
               message:(NSString *)message
             rightName:(NSString *)rightName
              leftName:(NSString *)leftName
        viewController:(UIViewController *)viewController
           rightAction:(void (^)())rightAction
            leftAction:(void (^)())leftAction;

/**
 * 三个Action
 */
+ (void)alertWithTitle:(NSString *)title
               message:(NSString *)message
             rightName:(NSString *)rightName
           centerTitle:(NSString *)centerName
              leftName:(NSString *)leftName
        viewController:(UIViewController *)viewController
           rightAction:(void (^)())rightAction
          centerAction:(void (^)())centerAction
            leftAction:(void (^)())leftAction;

/**
 * sheet，有提醒
 */
+ (void)sheetAlertWithTitle:(NSString *)title
                    message:(NSString *)message
                        one:(NSString *)one
                        two:(NSString *)two
             viewController:(UIViewController *)viewController
                  oneAction:(void(^)())oneAction
                  twoAction:(void(^)())twoAction;

/**
 * sheet，无提醒
 */
+ (void)sheetAlertWithOne:(NSString *)one
                      two:(NSString *)two
           viewController:(UIViewController *)viewController
                oneAction:(void(^)())oneAction
                twoAction:(void(^)())twoAction;

/**
 * 有输入框
 */
+ (void)addTextFieldWithTitle:(NSString *)title
                      message:(NSString *)message
                    rightName:(NSString *)rightName
                     leftName:(NSString *)leftName
                  placeholder:(NSString *)placeholder
               viewController:(UIViewController *)viewController
                  rightAction:(void (^)(NSString *text))rightAction
                   leftAction:(void (^)(NSString *text))leftAction;
/**
 * 有输入框 密文输入
 */
+ (void)addSecureTextFieldWithTitle:(NSString *)title
                            message:(NSString *)message
                          rightName:(NSString *)rightName
                           leftName:(NSString *)leftName
                        placeholder:(NSString *)placeholder
                     viewController:(UIViewController *)viewController
                        rightAction:(void (^)(NSString *text))rightAction
                         leftAction:(void (^)(NSString *text))leftAction;

@end
