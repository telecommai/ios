//
//  TCRegisterController.m
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/9.
//  Copyright © 2018年 wsl. All rights reserved.
//  4.注册安全账户

#import "TCRegisterController.h"
#import "TalkChainHeader.h"
#import "TCRegisterView.h"
#import "TCPrivateController.h"
#import "TCWalletTipController.h"
#import "UIViewController+TCHUD.h"
#import "SLAlertController.h"
#import "JFLanguageManager.h"
#import "EFXHNavigationController.h"

@interface TCRegisterController ()<UITextFieldDelegate>

@property (nonatomic, strong) TCRegisterView *rootView;

@end

@implementation TCRegisterController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = [JFLanguageManager stringWithKey:@"openPlanetCreateSecureAccount" table:Table_OpenPlanet comment:@"创建安全账户"];
    self.view.theme_backgroundColor = [UIColor theme_colorForKey:@"viewBackgroud"];
    [self setupForDismissKeyboard];
    [self rootView];
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    if (self.rootView.nameTextField.text.length == 0) {
        [self.rootView.nameTextField becomeFirstResponder];
    }
}


- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    [self.view endEditing:YES];
}

#pragma mark - UITextFieldDelegate
- (BOOL)textFieldShouldReturn:(UITextField *)textField{
    if ([textField isEqual:self.rootView.nameTextField]) {
        [self.rootView.passwordTextField becomeFirstResponder];
    }else if([textField isEqual:self.rootView.passwordTextField]) {
        [self.rootView.rePasswordTextField becomeFirstResponder];
    }else{
        [textField resignFirstResponder];
    }
    return YES;
}

#pragma mark - 下一步(注册时间)
- (void)nextButtonAction{
    [self showTCHUDWithTitle:nil];
    ///  注册用户
    [self isNewUser];
}


#pragma mark - 是否是新用户
- (void)isNewUser{
    [self.view endEditing:YES];
    WEAK(self)
    [TCLoginManager checkAccountIsExist:self.account success:^(id result) {
        if ([[result valueForKey:@"result"] isEqualToString:@"success"]) {
            if ([[result valueForKey:@"userStatus"] isEqualToString:@"1"]) {
                /// 老用户去创建钱包
                [weakself loginAndGetUserInfo];
            }else{
                /// 新用户去注册用户
                [weakself registerUser];
            }
        }else{
            [weakself hiddenTCHUD];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager commonStringWithRequestFailed]];
        }
    } fail:^(NSString *errorDescription) {
        Log(@"验证手机号是否是老用户 -- %@", errorDescription);
        [weakself hiddenTCHUD];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager commonStringWithRequestFailed]];
    }];
}

#pragma mark - 注册用户
- (void)registerUser{
    WEAK(self)
    [TCLoginManager registerNewUserWithPhone:self.account nickName:self.rootView.nameTextField.text password:self.rootView.passwordTextField.text inviteCode:self.inviteCode planetEnName:self.planetEnName success:^(id result) {
        if ([[result valueForKey:@"result"] isEqualToString:@"success"]) {
            /// 登录获取用户信息
            [weakself loginAndGetUserInfo];
        }else{
            [weakself hiddenTCHUD];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetRegisteredUserFailed" table:Table_OpenPlanet comment:@"注册用户失败"]];
        }
    } fail:^(NSString *errorDescription) {
        Log(@"注册失败 -- %@", errorDescription);
        [weakself hiddenTCHUD];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager commonStringWithRequestFailed]];
    }];
}

#pragma mark - 登录并获取用户信息
- (void)loginAndGetUserInfo{
    WEAK(self)
    [TCLoginManager loginWithAccount:self.account password:self.rootView.passwordTextField.text success:^(id result) {
        /// 去创建钱包
        [weakself goCreateWalletOrBackUpWallet];
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager commonStringWithRequestFailed]];
    }];
}

#pragma mark - 去创建钱包
- (void)goCreateWalletOrBackUpWallet{
    [self hiddenTCHUD];
    TCWalletTipController *nextVc = [TCWalletTipController new];
    nextVc.password = self.rootView.passwordTextField.text;
    nextVc.type = WalletTypeRegister;
    [self.navigationController pushViewController:nextVc animated:YES];
}


#pragma mark - 文本框内容变化时
- (void)textChange:(id)sender{
    BOOL isNextButtonEnabled = (self.rootView.passwordTextField.text.length >= 8 && [self.rootView.passwordTextField.text isEqualToString:self.rootView.rePasswordTextField.text] && self.rootView.isAgreePrivateView.isAgree);
    self.rootView.nextButton.enabled = isNextButtonEnabled;
    self.rootView.nextButton.alpha= isNextButtonEnabled?1:0.4;
}


#pragma mark - 查看协议
- (void)seeAgreementAction{
    TCPrivateController *privateVc = [TCPrivateController new];
    EFXHNavigationController *nvc = [[EFXHNavigationController alloc] initWithRootViewController:privateVc];
    nvc.navigationBar.theme_barStyle = [NSString theme_stringForKey:@"barStyle" from:@"navigationBar"];
    nvc.navigationBar.theme_tintColor = [UIColor theme_navigationBarColorForKey:@"tintColor"];
    nvc.navigationBar.theme_barTintColor = [UIColor theme_navigationBarColorForKey:@"barTintColor"];
    nvc.navigationBar.translucent = NO;
    [self presentViewController:nvc animated:YES completion:nil];
}

#pragma mark - lazyload
- (TCRegisterView *)rootView{
    if (!_rootView) {
        _rootView = [TCRegisterView new];
        _rootView.tipLabel.text = [JFLanguageManager stringWithKey:@"openPlanetSetPasswordDescribe" table:Table_OpenPlanet comment:@"密码用于登录、保护私钥和交易授权，强度非常重要。系统不存储密码，也无法帮您找回，请务必牢记！"];
        [_rootView.nextButton setTitle:[JFLanguageManager stringWithKey:@"next" table:Table_Tools comment:@"下一步"]  forState:UIControlStateNormal];
        _rootView.nameTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"openPlanetUserNickname" table:Table_OpenPlanet comment:@"用户昵称"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        _rootView.passwordTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"passwordMustBeGreaterThan8Characters" table:Table_Tools comment:@"密码(必须大于8位字符)"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        _rootView.rePasswordTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"confirmPassword" table:Table_Tools comment:@"确认密码"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];

        _rootView.nameTextField.delegate = self;
        _rootView.passwordTextField.delegate = self;
        _rootView.rePasswordTextField.delegate = self;
        [_rootView.passwordTextField addTarget:self action:@selector(textChange:) forControlEvents:UIControlEventEditingChanged];
        [_rootView.rePasswordTextField addTarget:self action:@selector(textChange:) forControlEvents:UIControlEventEditingChanged];
        [self textChange: nil];
        [_rootView.nextButton addTarget:self action:@selector(nextButtonAction) forControlEvents:UIControlEventTouchUpInside];

        WEAK(self)
        _rootView.isAgreePrivateView.agreementButtonActionBlock = ^{
            [weakself seeAgreementAction];
        };
        _rootView.isAgreePrivateView.agreeAgreementButtonActionBlock = ^{
            [weakself textChange:nil];
        };

        [self.view addSubview:_rootView];
        [_rootView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.top.right.equalTo(self.view);
            if (@available(iOS 11.0, *)) {
                make.bottom.equalTo(self.view.mas_safeAreaLayoutGuideBottom);
            } else {
                make.bottom.equalTo(self.view);
            }
        }];
    }
    return _rootView;
}

@end
