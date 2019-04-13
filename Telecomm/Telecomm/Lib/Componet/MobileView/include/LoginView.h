//
//  LoginView.h
//  YTAutoLayout
//
//  Created by fly on 14/12/12.
//  Copyright (c) 2014年 fly. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LoginView;
@protocol LoginViewDelegate <NSObject>
@optional
-(void)doLogin:(LoginView *) loginView;

@end


@interface LoginView : UIView

@property(nonatomic ,weak) UITextField* textName;

@property(nonatomic ,weak) UITextField* textPwd;

@property(nonatomic ,weak) UISwitch* savePwd;

@property(nonatomic ,weak) UISwitch* autoLogin;

@property(nonatomic,assign) id<LoginViewDelegate> delegate;

@end

