//
//  TCPhoneController.m
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/10.
//  Copyright © 2018年 wsl. All rights reserved.
//  1.输入手机号或邮箱
//

#import "TCLoginPhoneEmailController.h"
#import "ThemeKit.h"
#import "TCLoginBaseView.h"
#import "TCInputPhoneTextField.h"
#import "TCLoginManager.h"
#import "TCInputPasswordController.h"
#import "TCChosePlanetController.h"
#import "UIViewController+TCHUD.h"
#import "SLAlertController.h"
#import "JFLanguageManager.h"


@interface TCLoginPhoneEmailController ()

@property (nonatomic, strong) TCLoginBaseView *rootView;
@property (nonatomic, strong) UITextField *accountTextField;
/// 登录类型： 0：手机号 1:邮箱
@property (nonatomic, assign) NSInteger accountType;

@end

@implementation TCLoginPhoneEmailController

- (void)viewDidLoad {
    [super viewDidLoad];

    [self setupForDismissKeyboard];

    [self rootView];
    // 如果有旧账户,自动显示用户名®®
    NSString *account = [EnvironmentVariable getWalletUserID];
    if (!StringIsEmpty(account)) {
        self.accountTextField.text = account;
        [self textChanged];
    }else{
        [self.accountTextField becomeFirstResponder];
    }
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    if (self.accountTextField.text.length == 0) {
        [self.accountTextField becomeFirstResponder];
    }
}

- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    [self.view endEditing:YES];
}

// MARK: - 文本框内容变化时
- (void)textChanged{
    /// 判断手机号是否为空
    BOOL isRight = NO;
    //首先判断是不是手机号或者邮箱
    if ([self.accountTextField.text isValidPhoneNum] || [self.accountTextField.text isValidateEmail]){
        isRight = YES;
    }
    
    self.rootView.nextButton.enabled = isRight;
    self.rootView.nextButton.alpha= isRight?1:0.4;
}

// MARK: - 下一步 Action
- (void)nextButtonAction:(UIButton *)sender{
    [self.view endEditing:YES];
    WEAK(self)

    [self showTCHUDWithTitle:[JFLanguageManager stringWithKey:@"waitALittleLater" table:Table_Tools comment:@"请稍候..."]];

    NSString *account = self.accountTextField.text;
    if ([account isValidPhoneNum]){
        self.accountType = 0;
    }else if([account isValidateEmail]) {
        self.accountType = 1;
    }

    [TCLoginManager checkAccountIsExist:account success:^(id result) {
        [weakself hiddenTCHUD];
        if ([[result valueForKey:@"result"] isEqualToString:@"success"]) {
            if ([[result valueForKey:@"userStatus"] isEqualToString:@"1"]) {
                // 老用户密码登录
                TCInputPasswordController *vc = [TCInputPasswordController new];
                vc.accountType = weakself.accountType;
                vc.account = weakself.accountTextField.text;
                [weakself.navigationController pushViewController:vc animated:YES];
            }else if([[result valueForKey:@"userStatus"] isEqualToString:@"-1"]){
                // 新用户
                TCChosePlanetController *vc = [TCChosePlanetController new];
                vc.accountType = weakself.accountType;
                vc.account = weakself.accountTextField.text;
                [weakself.navigationController pushViewController:vc animated:YES];
            }
        }else{
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"validationFailed" table:Table_Tools comment:@"验签失败"]];
        }
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager commonStringWithRequestFailed]];
    }];
}

#pragma mark - lazyload
- (TCLoginBaseView *)rootView{
    if (!_rootView) {
        _rootView = [TCLoginBaseView new];
        /// 设置控件默认值
        _rootView.topBgImageView.theme_image = [UIImage theme_bundleImageNamed:@"login/login_phone_bg.png"];
        _rootView.tipImageView.theme_image = [UIImage theme_bundleImageNamed:@"login/login_phone.png"];
        _rootView.titleLabel.text = [NSString stringWithFormat:@"%@%@",[JFLanguageManager stringWithKey:@"openPlanetWelcomeTo" table:Table_OpenPlanet comment:@"欢迎使用"],APPName];
        _rootView.tipLabel.text = [JFLanguageManager stringWithKey:@"openPlanetLoginTip" table:Table_OpenPlanet comment:@"为方便给您提供更优质的服务，请输入您的手机或者邮箱"];
        [_rootView.nextButton setTitle:[JFLanguageManager stringWithKey:@"next" table:Table_Tools comment:@"下一步"] forState:UIControlStateNormal];
        [_rootView.nextButton addTarget:self action:@selector(nextButtonAction:) forControlEvents:UIControlEventTouchUpInside];
        [self.view addSubview:_rootView];
        [_rootView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self.view);
        }];

        [self.rootView.customView addSubview:self.accountTextField];
        [self.accountTextField mas_remakeConstraints:^(MASConstraintMaker *make) {
            make.left.top.right.bottom.equalTo(_rootView.customView);
            make.height.equalTo(@45);
        }];

        [self.view layoutIfNeeded];
    }
    return _rootView;
}

- (UITextField *)accountTextField{
    if (!_accountTextField) {
        _accountTextField = [UITextField new];
        _accountTextField.borderStyle = UITextBorderStyleNone;
        _accountTextField.keyboardType = UIKeyboardTypeEmailAddress;
        _accountTextField.font = FONT(15);
        _accountTextField.clearButtonMode = UITextFieldViewModeWhileEditing;
        _accountTextField.theme_textColor = [UIColor theme_colorForKey:@"textFieldTextColor" from:@"login"];
        _accountTextField.theme_attributePlaceHolder = [NSAttributedString theme_attributeStringWithString:[JFLanguageManager stringWithKey:@"openPlanetPleaseEnterEmail" table:Table_OpenPlanet comment:@"请输入账号"] attributeColor:[UIColor theme_colorForKey:@"textFieldPlaceHolderColor" from:@"login"]];
        [_accountTextField addTarget:self action:@selector(textChanged) forControlEvents:UIControlEventEditingChanged];

        UIView *bottomLine = [UIView new];
        bottomLine.theme_backgroundColor = [UIColor theme_colorForKey:@"separatorColor" from:@"login"];
        [_accountTextField addSubview:bottomLine];
        [bottomLine mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(_accountTextField).inset(-3);
            make.bottom.equalTo(_accountTextField);
            make.height.equalTo(@1);
        }];
    }
    return _accountTextField;
}



@end
