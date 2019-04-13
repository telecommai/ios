//
//  UIViewController+Extension.h
//  ESPMobileHD
//
//  Created by wangzhanfeng on 14-1-7.
//  Copyright (c) 2014年 wang zhanFeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Extension)
-(void)showAlertViewWithTitle:(NSString *)title
                      message:(NSString *)message
                          tag:(int)tag
                     delegate:(id<UIAlertViewDelegate>)delegate ;

-(void)showAlertViewWithTitle:(NSString *)title
                      message:(NSString *)message
                          tag:(int)tag
                     delegate:(id<UIAlertViewDelegate>)delegate
             firstButtonTitle:(NSString *)firstButton
                 secondButton:(NSString *)secondButton;

-(void)makeBorderCornerToView:(UIView *)view
                   withRadius:(CGFloat)radius
                  borderWidth:(CGFloat)borderWidth
                  borderColor:(UIColor *)borderColor;

-(NSString *)resourceWithName:(NSString *)resName;

-(void)showHudView:(NSString *)text forView:(UIView *)targetView;
-(void)hiddenHudForView:(UIView *)targetView;
-(void)changeHudText:(NSString *)newText forView:(UIView *)targetView;
-(void)showHudView:(NSString *)text;
-(void)hiddenHudView;
-(void)changeHudText:(NSString *)newText;
- (NSInteger)hideAllHUDs;


/**
 UIAlertController 弹窗
 @param title 弹窗的标题
 @param message 弹窗的内容
 @param cancelTitle 取消按钮的标题
 */
-(void)alertWithTitle:(NSString *)title
              message:(NSString *)message
               cancel:(NSString *)cancelTitle;





/**
 带有输入框的弹窗
 @param title 标题
 @param message 内容
 @param confirmTitle 确定
 @param cancelTitle 取消
 @param placeholder 占位文字
 @param confirmAction 确定的回调
 */
- (void)alertWithTitle:(NSString *)title
               message:(NSString *)message
          confirmTitle:(NSString *)confirmTitle
           cancelTitle:(NSString *)cancelTitle
           placeholder:(NSString *)placeholder
          confimAction:(void (^)(NSString *text))confirmAction;

/**
 带有输入框的弹窗
 @param title 标题
 @param message 内容
 @param confirmTitle 确定
 @param cancelTitle 取消
 @param confirmAction 确定的回调
 */
- (void)alertWithTitle:(NSString *)title
               message:(NSString *)message
          confirmTitle:(NSString *)confirmTitle
           cancelTitle:(NSString *)cancelTitle
          confimAction:(void (^)(void))confirmAction;

/// 提示组件
- (void)showTipHUDView:(NSString *)str;


/**
 三个按钮的弹窗

 @param title 弹窗的标题
 @param actionOneTitle 第一个按钮的标题
 @param actionOne 第一个按钮的点击事件
 @param actionTwoTitle 第二个按钮的标题
 @param actionTwo 第二个按钮的点击事件
 @param actionThreeTitle 第三个按钮的标题
 @param actionThree 第三个按钮的点击事件
 */
- (void)alertWithTitle:(NSString *)title
        actionOneTitle:(NSString *)actionOneTitle
             actionOne:(void(^)(void)) actionOne
        actionTwoTitle:(NSString *)actionTwoTitle
             actionTwo:(void(^)(void)) actionTwo
      actionThreeTitle:(NSString *)actionThreeTitle
           actionThree:(void(^)(void)) actionThree;


/**
 只有消息的弹窗
 @param message 内容
 @param confirmTitle 确定
 @param cancelTitle 取消
 @param confirmAction 确定的回调
 */
- (void)alertWithmessage:(NSString *)message
            confirmTitle:(NSString *)confirmTitle
             cancelTitle:(NSString *)cancelTitle
            confimAction:(void (^)(void))confirmAction;
@end
