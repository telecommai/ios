//
//  TCPasswordController.m
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/14.
//  Copyright © 2018年 wsl. All rights reserved.
//  重置密码

#import "TCResetPasswordController.h"
#import "TalkChainHeader.h"
#import "TCRegisterController.h"
#import "TCSMSTextField.h"
#import "TCWalletTextField.h"
#import <ethers/WalletManager.h>
#import <ethers/Wallet.h>
#import <ethers/CloudKeychainSigner.h>
#import "AppDelegate.h"
#import "SLAlertController.h"
#import "JFLanguageManager.h"

@interface TCResetPasswordController ()<UITextFieldDelegate>

@property (nonatomic, strong) TCWalletTextField *inputPhoneTextField;
@property (nonatomic, strong) TCWalletTextField *SMSTextField;
@property (nonatomic, strong) TCWalletTextField *passwordTextField;
@property (nonatomic, strong) TCWalletTextField *rePasswordTextField;
@property (nonatomic, strong) UIButton *smsButton;
@property (nonatomic, strong) UIButton *nextButton;
/// 验证码倒计时
@property (nonatomic, strong) dispatch_source_t timer;

@end

@implementation TCResetPasswordController


- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = [JFLanguageManager stringWithKey:@"openPlanetResetPassword" table:Table_OpenPlanet comment:@"重置密码"];
    self.view.theme_backgroundColor = [UIColor theme_colorForKey:@"viewBackgroud"];
    [self setupForDismissKeyboard];
    [self nextButton];
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    [self.view endEditing:YES];
}

#pragma mark - 文本框内容变化时
- (void)textChanged{
    BOOL isNextButtonEnabled = (self.passwordTextField.text.length >= 8 && [self.passwordTextField.text isEqualToString:self.rePasswordTextField.text]) && self.SMSTextField.text.length > 0;
    self.nextButton.enabled = isNextButtonEnabled;
    self.nextButton.alpha= isNextButtonEnabled?1:0.4;
}

#pragma mark - 下一步按钮事件
- (void)nextButtonAction:(UIButton *)sender{
    [self.view endEditing:YES];
    if (self.accountType == 0) {
        //SMS登录
        [self smsLogin];
    }else if(self.accountType == 1){
        // email验证码登录
        [self emailLogin];
    }
}

-(void)emailLogin {
    WEAK(self)
    [self showTCHUDWithTitle:[JFLanguageManager stringWithKey:@"openPlanetResetPasswordBeing" table:Table_OpenPlanet comment:@"正在重置密码"]];
    [TCLoginManager emailLoginWithEmail:self.phone emaliCode:self.SMSTextField.text success:^(id result) {
        [TCLoginManager resetPassword:self.rePasswordTextField.text success:^(id result) {
            [weakself hiddenTCHUD];
            [[WalletManager sharedWallet].accounts enumerateObjectsUsingBlock:^(Signer * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                CloudKeychainSigner *signer = (CloudKeychainSigner *)obj;
                [signer remove];
            }];
            [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] address:@""];
            [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] password:@""];
            UIAlertController *alertController = [UIAlertController alertControllerWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetResetPasswordResetSuccessful" table:Table_OpenPlanet comment:@"重置密码成功，请重新登录"] preferredStyle:UIAlertControllerStyleAlert];
            [alertController addAction:[UIAlertAction actionWithTitle:[JFLanguageManager commonStringWithConfirm]  style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                if (self.from == ResetPasswordFromLogin) {
                    [weakself backAction];
                }else{
                    [(AppDelegate *)APPDELEGATE logout];
                }
            }]];
            [weakself presentViewController:alertController animated:YES completion:nil];
            
        } fail:^(NSString *errorDescription) {
            [weakself hiddenTCHUD];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetResetFailedTryAgain" table:Table_OpenPlanet comment:@"重置失败，请重试"]];
        }];
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];
        [weakself closeTimer];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"verificationCodeError" table:Table_Tools comment:@"重置密码失败，短信验证码错误"]];
    }];
}

//SMS登录
-(void)smsLogin {
    WEAK(self)
    [self showTCHUDWithTitle:[JFLanguageManager stringWithKey:@"openPlanetResetPasswordBeing" table:Table_OpenPlanet comment:@"正在重置密码"]];
    [TCLoginManager SMSLoginWithPhone:self.phone smsCode:self.SMSTextField.text success:^(id result) {
        [TCLoginManager resetPassword:self.rePasswordTextField.text success:^(id result) {
            [weakself hiddenTCHUD];
            
            [[WalletManager sharedWallet].accounts enumerateObjectsUsingBlock:^(Signer * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                CloudKeychainSigner *signer = (CloudKeychainSigner *)obj;
                [signer remove];
            }];
            
            [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] address:@""];
            [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] password:@""];
            UIAlertController *alertController = [UIAlertController alertControllerWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetResetPasswordResetSuccessful" table:Table_OpenPlanet comment:@"重置密码成功，请重新登录"] preferredStyle:UIAlertControllerStyleAlert];
            [alertController addAction:[UIAlertAction actionWithTitle:[JFLanguageManager commonStringWithConfirm]  style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                if (self.from == ResetPasswordFromLogin) {
                    [weakself backAction];
                }else{
                    [(AppDelegate *)APPDELEGATE logout];
                }
            }]];
            [weakself presentViewController:alertController animated:YES completion:nil];
            
        } fail:^(NSString *errorDescription) {
            [weakself hiddenTCHUD];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetResetFailedTryAgain" table:Table_OpenPlanet comment:@"重置失败，请重试"]];
        }];
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];
        [weakself closeTimer];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"verificationCodeError" table:Table_Tools comment:@"重置密码失败，短信验证码错误"]];
    }];
}

#pragma mark - UITextFieldDelegate
- (BOOL)textFieldShouldReturn:(UITextField *)textField{
    if([textField isEqual:self.passwordTextField]) {
        [self.rePasswordTextField becomeFirstResponder];
    }else{
        [textField resignFirstResponder];
        BOOL isNextButtonEnabled = (self.passwordTextField.text.length >= 8 && [self.passwordTextField.text isEqualToString:self.rePasswordTextField.text]);
        if (isNextButtonEnabled) {
            [self nextButtonAction:self.nextButton];
        }
        
    }
    return YES;
}

#pragma mark - 返回
- (void)backAction{
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)SMSButtonAction{
    [self.SMSTextField becomeFirstResponder];
    /// 开启定时器
    [self startTimer];
    /// 请求发送验证码
    [self authenticationInformation];
}

//发送验证码
-(void)authenticationInformation {
    if (self.accountType == 0) {
        [self sendPhoneSMS];
    }else if(self.accountType == 1) {
        [self sendEmailSMS];
    }
}

#pragma mark - 邮箱发送验证码
- (void)sendEmailSMS {
    WEAK(self)
    [TCLoginManager emailSMSWithEmail:self.phone success:^(id result) {
        if ([[result valueForKey:@"result"] isEqualToString:@"success"]) {
            
        }else{
            [weakself closeTimer];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"failedToSendVerificationCodePleaseTryAgain" table:Table_Tools comment:@"发送验证码失败,请重试"]];
        }
    } fail:^(NSString *errorDescription) {
        Log(@"获取验证码失败 -- %@", errorDescription);
        [weakself closeTimer];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"failedToSendVerificationCodePleaseTryAgain" table:Table_Tools comment:@"发送验证码失败,请重试"]];
    }];
}

#pragma mark - 手机发送验证码
- (void)sendPhoneSMS{
    WEAK(self)
    [TCLoginManager phoneSMSWithPhone:self.phone success:^(id result) {
        if ([[result valueForKey:@"result"] isEqualToString:@"success"]) {
            
        }else{
            [weakself closeTimer];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"failedToSendVerificationCodePleaseTryAgain" table:Table_Tools comment:@"发送验证码失败,请重试"]];
        }
    } fail:^(NSString *errorDescription) {
        Log(@"获取验证码失败 -- %@", errorDescription);
        [weakself closeTimer];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"failedToSendVerificationCodePleaseTryAgain" table:Table_Tools comment:@"发送验证码失败,请重试"]];
    }];
}

#pragma mark - 启动定时器
- (void)startTimer{
    /// 修改提示文本
    [self changeTipTitle];
    /// 倒计时总时长
    __block NSInteger time = 59;
    /// 1.获取默认线程
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    /// 2.创建类型为定时器类型的Dispatch Source,并将定时器设置在线程中
    dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, queue);
    /// 3.设置定时器每秒执行一次
    dispatch_source_set_timer(timer,dispatch_walltime(NULL, 0),1.0*NSEC_PER_SEC, 0);
    WEAK(self)
    /// 4.设置定时器需要执行的动作
    dispatch_source_set_event_handler(timer, ^{
        if(time <= 0){
            /// 倒计时结束，关闭
            [self closeTimer];
        }else{
            int seconds = time % 60;
            dispatch_async(dispatch_get_main_queue(), ^{
                /// 设置按钮显示读秒效果
                NSString *resendString = [JFLanguageManager stringWithKey:@"resend" table:Table_Tools comment:@"重新发送"];
                [weakself.smsButton setTitle:[NSString stringWithFormat:@"%@(%.2d)", resendString,seconds] forState:UIControlStateNormal];
                [weakself.smsButton setTitleColor:cGrayColor forState:UIControlStateNormal];
                weakself.smsButton.userInteractionEnabled = NO;
            });
            time--;
        }
    });
    /// 5.启动定时器
    dispatch_resume(timer);
    self.timer = timer;
}

#pragma mark - 关闭定时器
- (void)closeTimer{
    if (self.timer) {
        dispatch_source_cancel(self.timer);
        WEAK(self)
        dispatch_async(dispatch_get_main_queue(), ^{
            /// 设置按钮的样式
            [weakself.smsButton setTitle:[JFLanguageManager stringWithKey:@"resend" table:Table_Tools comment:@"重新发送"] forState:UIControlStateNormal];
            [weakself.smsButton theme_setTitleColor:[UIColor theme_colorForKey:@"tipColor"] forState:UIControlStateNormal];
            weakself.smsButton.userInteractionEnabled = YES;
        });
    }
    self.timer = nil;
}

#pragma mark - 修改提示文本(是否发送验证码)
- (void)changeTipTitle{
    //    NSString *tipText = [NSString stringWithFormat:@"已向 %@ %@ 发送了短信验证码",self.areaCode,self.phone];
    //    self.rootView.tipLabel.text = tipText;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - lazyload
- (TCWalletTextField *)inputPhoneTextField{
    if (!_inputPhoneTextField) {
        _inputPhoneTextField = [TCWalletTextField new];
        _inputPhoneTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"openPlanetPleaseEnterPhoneNumber" table:Table_OpenPlanet comment:@"请输入手机号"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        _inputPhoneTextField.text = self.phone;
        _inputPhoneTextField.textColor = cLightGrayColor;
        _inputPhoneTextField.enabled = NO;
        _inputPhoneTextField.font = FONT(15);
        [self.view addSubview:_inputPhoneTextField];
        [_inputPhoneTextField mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.left.right.inset(20);
            make.height.equalTo(@45);
        }];
    }
    return _inputPhoneTextField;
}

- (TCWalletTextField *)SMSTextField{
    if (!_SMSTextField) {
        _SMSTextField = [TCWalletTextField new];
        _SMSTextField.delegate = self;
        _SMSTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"pleaseEnterVerificationCode" table:Table_Tools comment:@"请输入验证码"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        _SMSTextField.returnKeyType = UIReturnKeyNext;
        _SMSTextField.font = FONT(15);
        _SMSTextField.keyboardType = UIKeyboardTypeDefault;
        _SMSTextField.rightViewMode = UITextFieldViewModeNever;
        [_SMSTextField addTarget:self action:@selector(textChanged) forControlEvents:UIControlEventEditingChanged];
        [self.view addSubview:_SMSTextField];
        [_SMSTextField mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(self.inputPhoneTextField);
            make.top.equalTo(self.inputPhoneTextField.mas_bottom).offset(10);
            make.height.equalTo(@45);
        }];
        
        /// 设置下一步按钮默认状态
        [self textChanged];
        
        
        UIView *rightView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 130, 45)];
        _smsButton = [UIButton buttonWithType:UIButtonTypeCustom];
        _smsButton.titleLabel.font = FONT(14);
        [_smsButton theme_setTitleColor:[UIColor theme_colorForKey:@"tipColor" from:@"login"] forState:UIControlStateNormal];
        [_smsButton setTitle:[JFLanguageManager stringWithKey:@"getVerificationCode" table:Table_Tools comment:@"获取验证码"] forState:UIControlStateNormal];
        [_smsButton addTarget:self action:@selector(SMSButtonAction) forControlEvents:UIControlEventTouchUpInside];
        [rightView addSubview:_smsButton];
        [_smsButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.right.top.bottom.equalTo(rightView);
        }];
        
        UIView *line = [UIView new];
        line.theme_backgroundColor = [UIColor theme_colorForKey:@"separatorColor" from:@"login"];
        [rightView addSubview:line];
        [line mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.bottom.left.inset(10);
            make.width.equalTo(@1);
            make.left.equalTo(_smsButton.mas_left).offset(-5);
        }];
        
        _SMSTextField.rightView = rightView;
        _SMSTextField.rightViewMode = UITextFieldViewModeAlways;
    }
    return _SMSTextField;
}

- (TCWalletTextField *)passwordTextField{
    if (!_passwordTextField) {
        _passwordTextField = [TCWalletTextField new];
        _passwordTextField.font = FONT(15);
        _passwordTextField.secureTextEntry = YES;
        _passwordTextField.delegate =  self;
        _passwordTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"newPasswordMustBe8OrMore" table:Table_Tools comment:@"新密码(必须8位以上)"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        [_passwordTextField addTarget:self action:@selector(textChanged) forControlEvents:UIControlEventEditingChanged];
        [self.view addSubview:_passwordTextField];
        [_passwordTextField mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(self.SMSTextField);
            make.top.equalTo(self.SMSTextField.mas_bottom).offset(10);
            make.height.equalTo(@45);
        }];
    }
    return _passwordTextField;
}

- (TCWalletTextField *)rePasswordTextField{
    if (!_rePasswordTextField) {
        _rePasswordTextField = [TCWalletTextField new];
        _rePasswordTextField.font = FONT(15);
        _rePasswordTextField.secureTextEntry = YES;
        _rePasswordTextField.delegate =  self;
        _rePasswordTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"confirmPassword" table:Table_Tools comment:@"确认密码"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        [_rePasswordTextField addTarget:self action:@selector(textChanged) forControlEvents:UIControlEventEditingChanged];
        [self.view addSubview:_rePasswordTextField];
        [_rePasswordTextField mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.height.equalTo(self.passwordTextField);
            make.top.equalTo(self.passwordTextField.mas_bottom).offset(10);
        }];
    }
    return _rePasswordTextField;
}


- (UIButton *)nextButton{
    if (!_nextButton) {
        _nextButton = [UIButton buttonWithType:UIButtonTypeSystem];
        _nextButton.layer.cornerRadius = 22.5;
        _nextButton.theme_backgroundColor = [UIColor theme_colorForKey:@"nextButtonBgColor" from:@"login"];
        _nextButton.theme_tintColor = [UIColor theme_colorForKey:@"nextButtonTintColor" from:@"login"];
        [_nextButton setTitle:[JFLanguageManager stringWithKey:@"openPlanetResetPassword" table:Table_OpenPlanet comment:@"重置密码"] forState:UIControlStateNormal];
        [_nextButton addTarget:self action:@selector(nextButtonAction:) forControlEvents:UIControlEventTouchUpInside];
        [self.view addSubview:_nextButton];
        [_nextButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(self.rePasswordTextField);
            make.top.equalTo(self.rePasswordTextField.mas_bottom).offset(30);
            make.height.equalTo(@45);
            make.centerX.equalTo(self.view);
        }];
    }
    return _nextButton;
}


@end
