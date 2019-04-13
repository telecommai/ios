//
//  TCChangePasswordController.m
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/21.
//  Copyright © 2018年 wsl. All rights reserved.
//  修改密码
//

#import "TCChangePasswordController.h"
#import "TalkChainHeader.h"
#import "TCRegisterController.h"
#import "TCSMSTextField.h"
#import "TCWalletTextField.h"
#import <ethers/WalletManager.h>
#import <ethers/Wallet.h>
#import <ethers/CloudKeychainSigner.h>
#import "AppDelegate.h"
#import "WalletUtil.h"
#import "WalletDBManager.h"
#import "AESUtil.h"
#import <ethers/SecureData.h>
#import "WalletSaveChildWalletUtil.h"
#import "WalletModel.h"
#import "WalletChangePasswordUtil.h"
#import "EnvironmentUtil.h"
#import "SLAlertController.h"
#import "MessageDbManager.h"
#import "JFLanguageManager.h"

@interface TCChangePasswordController ()<UITextFieldDelegate>

@property (nonatomic, strong) TCWalletTextField *oldPasswordTextField;
@property (nonatomic, strong) TCWalletTextField *passwordTextField;
@property (nonatomic, strong) TCWalletTextField *rePasswordTextField;
@property (nonatomic, strong) UIButton *nextButton;

@end

@implementation TCChangePasswordController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = [JFLanguageManager stringWithKey:@"changePassword" table:Table_Tools comment:@"修改密码"];
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
    [self.oldPasswordTextField becomeFirstResponder];
}

- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    [self.view endEditing:YES];
}

#pragma mark - 文本框内容变化时
- (void)textChanged{
    BOOL isNextButtonEnabled = (self.passwordTextField.text.length >= 8 && [self.passwordTextField.text isEqualToString:self.rePasswordTextField.text]) && self.oldPasswordTextField.text.length > 0;
    self.nextButton.enabled = isNextButtonEnabled;
    self.nextButton.alpha= isNextButtonEnabled?1:0.4;
}

#pragma mark - 下一步按钮事件
- (void)nextButtonAction:(UIButton *)sender{
    [self.view endEditing:YES];


    NSString *oriPassword = [StringUtil encodeWithMD5:self.oldPasswordTextField.text];
    NSString *storedPassword = [EnvironmentVariable getWalletPasswordWithUserID:[EnvironmentVariable getWalletUserID]];
    if([oriPassword isEqualToString:storedPassword]) {
        if ([self.oldPasswordTextField.text isEqualToString:self.passwordTextField.text]) {
            // 新密码跟旧密码相同
            [self sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"newPasswordCannotSameToTheOldPassword" table:Table_Tools comment:@"新密码不能和近期用过的密码相同"]];
        } else {
            WEAK(self)
            [self showTCHUDWithTitle:[JFLanguageManager stringWithKey:@"changingPassword" table:Table_Tools comment:@"正在修改密码"]];
            // 1. 调修改密码的接口
            [TCLoginManager resetPassword:self.rePasswordTextField.text success:^(id result) {
                
                if ([[result valueForKey:@"result"] isEqualToString:@"success"] && [result valueForKey:@"user"]) {
                    MessageDbManager *messageDBManager = [[MessageDbManager alloc] init];
                    NSMutableDictionary *userDic = [[messageDBManager selectUserInfor:[[EnvironmentVariable getIMUserID] integerValue]] mutableCopy];
                    NSMutableDictionary *dict = [NSMutableDictionary dictionaryWithDictionary:[result valueForKey:@"user"]];
                    [dict setValue:[EnvironmentVariable getPropertyForKey:@"walletPassowrdMD5" WithDefaultValue:nil] forKey:@"walletPassword"];
                    [dict setValue:userDic[@"avatar"] forKey:@"avatar"];
                    [dict setValue:userDic[@"nickName"] forKey:@"nickName"];
                    [dict setValue:userDic[@"sex"] forKey:@"sex"];
//                    [dict addEntriesFromDictionary:userDic];
                    
                    [EnvironmentUtil saveUserInfoWithDict:dict];
                    
                    //                [weakself showTCHUDWithTitle:@"];
                    // 2.重新导入钱包
                    [WalletChangePasswordUtil reAddWalletWithOldPassoword:self.oldPasswordTextField.text newPassword:self.rePasswordTextField.text complete:^(id result) {
                        [weakself hiddenTCHUD];
                        CloudKeychainSigner *mainSigner = [WalletUtil mainWallet];
                        [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] address:[mainSigner.address checksumAddress]];
                        [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] password:self.rePasswordTextField.text];
                        UIAlertController *alertController = [UIAlertController alertControllerWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"passwordHasBeenUpdated" table:Table_Tools comment:@"修改密码成功"] preferredStyle:UIAlertControllerStyleAlert];
                        [alertController addAction:[UIAlertAction actionWithTitle:[JFLanguageManager commonStringWithConfirm] style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                            [weakself backAction];
                        }]];
                        [weakself presentViewController:alertController animated:YES completion:nil];
                    }];
                    
                }else{
                    [weakself hiddenTCHUD];
                    [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"failedToChangePasswordPleaseTryAgain" table:Table_Tools comment:@"修改密码失败，请重试"]];
                }
            } fail:^(NSString *errorDescription) {
                [weakself hiddenTCHUD];
                [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"failedToChangePasswordPleaseTryAgain" table:Table_Tools comment:@"修改密码失败，请重试"]];
            }];
        }
    }else{
        [self sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"oldPasswordIsWrong" table:Table_Tools comment:@"原密码错误"]];
    }



}

#pragma mark - UITextFieldDelegate
- (BOOL)textFieldShouldReturn:(UITextField *)textField{
    if([textField isEqual:self.oldPasswordTextField]){
        [self.passwordTextField becomeFirstResponder];
    }else if([textField isEqual:self.passwordTextField]) {
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

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - lazyload
- (TCWalletTextField *)oldPasswordTextField{
    if (!_oldPasswordTextField) {
        _oldPasswordTextField = [TCWalletTextField new];
        _oldPasswordTextField.delegate = self;
        _oldPasswordTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"oldPassword" table:Table_Tools comment:@"原密码"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        _oldPasswordTextField.returnKeyType = UIReturnKeyNext;
        _oldPasswordTextField.font = FONT(15);
        _oldPasswordTextField.secureTextEntry = YES;
        _oldPasswordTextField.keyboardType = UIKeyboardTypeDefault;
        _oldPasswordTextField.rightViewMode = UITextFieldViewModeNever;
        [_oldPasswordTextField addTarget:self action:@selector(textChanged) forControlEvents:UIControlEventEditingChanged];
        [self.view addSubview:_oldPasswordTextField];
        [_oldPasswordTextField mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.left.right.inset(20);
            make.height.equalTo(@45);
        }];

        /// 设置下一步按钮默认状态
        [self textChanged];
    }
    return _oldPasswordTextField;
}

- (TCWalletTextField *)passwordTextField{
    if (!_passwordTextField) {
        _passwordTextField = [TCWalletTextField new];
        _passwordTextField.font = FONT(15);
        _passwordTextField.secureTextEntry = YES;
        _passwordTextField.delegate =  self;
        _passwordTextField.returnKeyType = UIReturnKeyNext;
        _passwordTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"newPasswordMustBe8OrMore" table:Table_Tools comment:@"新密码(必须8位以上)"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        [_passwordTextField addTarget:self action:@selector(textChanged) forControlEvents:UIControlEventEditingChanged];
        [self.view addSubview:_passwordTextField];
        [_passwordTextField mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(self.oldPasswordTextField);
            make.top.equalTo(self.oldPasswordTextField.mas_bottom).offset(10);
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
        _rePasswordTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"enterTheNewPasswordAgain" table:Table_Tools comment:@"再次输入新密码"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
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
        [_nextButton setTitle:[JFLanguageManager stringWithKey:@"changePassword" table:Table_Tools comment:@"修改密码"] forState:UIControlStateNormal];
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
