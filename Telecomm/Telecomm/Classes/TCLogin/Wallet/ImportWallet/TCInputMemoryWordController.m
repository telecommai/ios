//
//  TCInputMemoryWordController.m
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/14.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import "TCInputMemoryWordController.h"
#import "TCUploadAvatarController.h"
#import "TCUploadFansController.h"
#import <ethers/WalletManager.h>
#import <ethers/Wallet.h>
#import "WalletUtil.h"
#import <ethers/SecureData.h>
#import "TCMemoryRecoverWalletView.h"
#import "TCPriviteKeyRecoverWalletView.h"
#import "SLPageEqualTitleView.h"
#import "SLPageNormalContentView.h"
#import "SLPageManager.h"
#import "YYRSACrypto.h"
#import "AppDelegate.h"
#import "TalkChainHeader.h"
#import "WalletHttpManager.h"
#import "WalletDBManager.h"
#import "AESUtil.h"
#import "WalletSaveChildWalletUtil.h"
#import "SLAlertController.h"
#import "JFLanguageManager.h"

@interface TCInputMemoryWordController ()<UITextFieldDelegate,UITextViewDelegate>

/// 分页标题数据源
@property (nonatomic, strong) NSArray *titles;
/// 标题组件
@property (nonatomic, strong) SLPageEqualTitleView *pageTitleView;
/// 内容
@property (nonatomic, strong) SLPageNormalContentView *pageContentView;
/// 助记词界面
@property (nonatomic, strong) TCMemoryRecoverWalletView *memoryView;
/// 私钥界面
@property (nonatomic, strong) TCPriviteKeyRecoverWalletView *priviteKeyView;

@end

@implementation TCInputMemoryWordController {
    Account *account;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = [JFLanguageManager stringWithKey:@"openPlanetRestoreBase" table:Table_OpenPlanet comment:@"openPlanetRestoreBase"];
    self.view.theme_backgroundColor = [UIColor theme_colorForKey:@"cellBackgroud"];
    [self setupForDismissKeyboard];

    [SLPageManager managerWithTitleView:self.pageTitleView contentView:self.pageContentView pageEntitys:[self getChildVc] defaultIdx:0];
}


- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}


- (BOOL)textFieldShouldReturn:(UITextField *)textField{
    NSUInteger idx = 0;
    for (int i = 0; i < self.memoryView.memoryWordView.subviews.count; i ++ ) {
        UITextField *currentTextField = self.memoryView.memoryWordView.subviews[i];
        if ([textField isEqual:currentTextField]) {
            idx = i;
        }
    }
    
    if (idx == self.memoryView.memoryWordView.subviews.count - 1) {
        /// 最后一个结束编辑
        [self.view endEditing:YES];
    }else{
        for (int i = 0; i < self.memoryView.memoryWordView.subviews.count; i ++ ) {
            UITextField *currentTextField = self.memoryView.memoryWordView.subviews[i];
            if (i == idx + 1) {
                [currentTextField becomeFirstResponder];
            }
        }
    }
    
    return YES;
}

#pragma mark - UITextViewDelegate
- (void)textViewDidChange:(UITextView *)textView{
    BOOL isTextFieldEmpty = (textView.text.length > 0);
    self.priviteKeyView.nextButton.enabled = isTextFieldEmpty;
    self.priviteKeyView.nextButton.alpha= isTextFieldEmpty?1:0.4;
}

- (void)memoryViewTextChanged{
    BOOL isTextFieldEmpty = YES;
    for (UITextField *textField in self.memoryView.memoryWordView.subviews) {
        if (textField.text.length == 0) {
            isTextFieldEmpty = YES;
            self.memoryView.nextButton.enabled = !isTextFieldEmpty;
            self.memoryView.nextButton.alpha= isTextFieldEmpty?0.4:1;
            return;
        }
        isTextFieldEmpty = NO;
    }
    self.memoryView.nextButton.enabled = !isTextFieldEmpty;
    self.memoryView.nextButton.alpha= isTextFieldEmpty?0.4:1;
}


-(BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string{
    NSString *tem = [[string componentsSeparatedByCharactersInSet:[NSCharacterSet whitespaceCharacterSet]]componentsJoinedByString:@""];
    if (![string isEqualToString:tem]) {
        return NO;
    }
    return YES;
}

#pragma mark - 助记词恢复事件
- (void)memoryRecoverAction{
    [self.view endEditing:YES];
    /// 助记词字符串
    NSMutableString *memoryWord = [NSMutableString string];
    for (UITextField *textField in self.memoryView.memoryWordView.subviews) {
        [memoryWord appendString:textField.text];
        [memoryWord appendString:@" "];
    }
    NSString *resultMemoryWord = [memoryWord substringToIndex:memoryWord.length - 1];
    
    if ([Account isValidMnemonicPhrase:resultMemoryWord]) {
        account = [Account accountWithMnemonicPhrase:resultMemoryWord];
        [self isAddWallet:account];
    }else {
        [self sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetRestoreBaseFailed" table:Table_OpenPlanet comment:@"恢复失败，请检查助记词"]];
    }
}

#pragma mark - 私钥恢复
- (void)priviteKeyRecoverAction{
    [self.view endEditing:YES];
    NSString *priviteKey = [WalletUtil walletHexPrivateKeyFormat:self.priviteKeyView.priviteKeyTextView.text];
    NSData *data = (NSData *)[SecureData secureDataWithHexString:priviteKey];
    account = [Account accountWithPrivateKey:data];
    if (account) {
        [self isAddWallet:account];
    }else{
        [self sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetRestoreBaseFailed2" table:Table_OpenPlanet comment:@"恢复失败,请检查秘钥"]];
    }
}


#pragma mark - 比对服务器钱包地址，是否添加钱包
- (void)isAddWallet:(Account *)account{
    if (self.type == WalletTypeLoginBackUp) {
        NSString *userWalletAddress = [EnvironmentVariable getPropertyForKey:@"loginWalletAddress" WithDefaultValue:@""];
        // 地址不包含0x添加0x在进行比较
        if (![userWalletAddress hasPrefix:@"0x"]) {
            userWalletAddress = [@"0x" stringByAppendingString:userWalletAddress];
        }
        
        if ([[userWalletAddress uppercaseString] isEqualToString:[[account.address checksumAddress]uppercaseString]]) {
            [self quertComPrivateKey:account];
        }else{
            [self sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetRestoreBaseFailed3" table:Table_OpenPlanet comment:@"恢复失败，只能恢复该账号绑定的基地"]];
        }
    }else{
        [self quertComPrivateKey:account];
    }
}

- (void)quertComPrivateKey:(Account *)account{

    [self showTCHUDWithTitle:[JFLanguageManager stringWithKey:@"openPlanetRestoringBaseAccount" table:Table_OpenPlanet comment:@"恢复基地数据中"]];
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeETH];
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeBTC];
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeEOS];
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeEOSTEST];

    WEAK(self)
    // 请求保存钱包私钥
    [WalletHttpManager querySecretComPrivateKeyWithSuccess:^(id result) {
        if (result && [[result valueForKey:@"result"] isEqualToString:@"success"]) {
            NSDictionary *dict = [result valueForKey:@"SecretKey"];
            if (!StringIsEmpty([dict valueForKey:@"privateKey"]) && !StringIsEmpty([dict valueForKey:@"publicKey"])) {
                NSString *comPrivateKey = [AESUtil decryptAES:[dict valueForKey:@"privateKey"] password:account.privateKeyString];
                if (comPrivateKey) {
                    // ENV存储通讯公钥和私钥
                    [WalletUtil saveComPublicKey:[dict valueForKey:@"publicKey"] secretComPrivateKey:[dict valueForKey:@"privateKey"]];
                    [weakself saveWalletWithAccount:account comPublicKey:[dict valueForKey:@"publicKey"]];
                }else{
                    [weakself createComPrivateKeyWithAccount:account];
                }
            }else{
                [weakself createComPrivateKeyWithAccount:account];
            }
        }else{
            [weakself createComPrivateKeyWithAccount:account];
        }
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];

        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"saveFailure" table:Table_Tools comment:@"保存失败"]];
    }];
}

#pragma mark - 创建通讯公钥私钥
- (void)createComPrivateKeyWithAccount:(Account *)account{
    WEAK(self)
    [WalletUtil createSaveWalletAndComPublicKey:account success:^(NSString *comPublicKey, NSString *comPrivateKey) {
        [weakself saveWalletWithAccount:account comPublicKey:comPublicKey];
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];

        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetSavePrivateKeyFailedTryAgain" table:Table_OpenPlanet comment:@"保存通讯私钥失败,请重试"]];
    }];
}


#pragma mark - 保存钱包
- (void)saveWalletWithAccount:(Account *)account comPublicKey:(NSString *)comPublicKey{

    // 钱包地址
    NSString *address = [account.address checksumAddress];
    // 钱包公钥
    NSString *publicKey = [account publicKey];

    WEAK(self)
    [TCLoginManager saveWalletWithWalletAddress:address publicKey:publicKey comPublicKey:comPublicKey isAddYinZuan:NO success:^(id result) {
        if ([[result valueForKey:@"result"] isEqualToString:@"success"]) {
            [weakself showTCHUDWithTitle:[JFLanguageManager stringWithKey:@"openPlanetSynchronizingWalletInformation" table:Table_OpenPlanet comment:@"正在同步钱包信息"]];
            [WalletHttpManager childWalletsWithMainAddress:address success:^(id responseObject) {

                if (responseObject && [[responseObject valueForKey:@"result"] isEqualToString:@"success"]) {
                    // 1.保存子钱包
                    NSArray *childWallet = [responseObject valueForKey:@"ChildrenWallet"];
                    [weakself handleWallet:childWallet];
                }else{
                    [weakself handleWallet:@[]];
                }
            } failure:^(NSString *error) {
                [weakself hiddenTCHUD];
                [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetSynchronizingWalletFailed" table:Table_OpenPlanet comment:@"同步钱包失败"]];
            }];
        }else{
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"saveFailure" table:Table_Tools comment:@"保存失败"]];
        }
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"saveFailure" table:Table_Tools comment:@"保存失败"]];
    }];
}



- (void)handleWallet:(NSArray *)childWallets{
    NSMutableArray *ethWallets = [NSMutableArray array];
    NSMutableArray *btcWallets = [NSMutableArray array];
    NSMutableArray *eosWallets = [NSMutableArray array];

    for (NSDictionary *dict in childWallets) {

        WalletModel *model = [WalletModel new];
        model.accountId = [[dict valueForKey:@"id"] integerValue];
        model.address   = SafeString([dict valueForKey:@"accountAddress"]);
        model.avatar    = SafeString([dict valueForKey:@"accountIcon"]);
        model.name      = SafeString([dict valueForKey:@"accountName"]);
        model.mainWalletAddress   = SafeString([dict valueForKey:@"mainAccountAddress"]);
        model.balance   = @"0";
        model.walletType = OpenWalletTypeActive;
        model.chainType = [BlockChainManager blockChainByChainName:SafeString([dict valueForKey:@"blockChainName"])].chainType;

        // 兼容publicKey出现十进制的情况
        NSString *publicKey = SafeString([dict valueForKey:@"accountPublicKey"]);

        model.secretPrivateKey = SafeString([dict valueForKey:@"accountPrivateKey"]);
        model.secretSeedPhrase = SafeString([dict valueForKey:@"seedPhrase"]);

        if (model.chainType == BlockChainTypeETH) {
            model.publicKey = [WalletUtil handleWalletPublicKey:publicKey];
            [ethWallets addObject:model];
        }else if (model.chainType == BlockChainTypeBTC){
            model.publicKey = publicKey;
            [btcWallets addObject:model];
        }else if (model.chainType == BlockChainTypeEOS || model.chainType == BlockChainTypeEOSTEST){
            model.publicKey = publicKey;
            model.eosIsActive = [[NSString stringWithFormat:@"%@",[dict valueForKey:@"eosIsActive"]] isEqualToString:@"1"] ?YES:NO;
            model.eosActivePublicKey = SafeString([dict valueForKey:@"eosActivePublicKey"]);
            model.eosActiveSecretPrivateKey = SafeString([dict valueForKey:@"eosActivePrivateKey"]);

            NSString *eosAccounts = SafeString([dict valueForKey:@"eosAccountNames"]);
            model.eosAccounts = [eosAccounts componentsSeparatedByString:@"_"];

            [btcWallets addObject:model];
        }
    }


    WEAK(self)
    // 1.添加主钱包
    Wallet* wallet = [WalletManager sharedWallet];
    [wallet addAccount:account password:self.password nickname:[EnvironmentVariable getWalletUserID] callback:^(Address *address) {
        [WalletManager refreshWallet];

        CloudKeychainSigner *mainSigner = [WalletUtil walletWithAddress:[account.address checksumAddress]];

        if (mainSigner) {
            [mainSigner unlockPassword:weakself.password callback:^(Signer *s, NSError *error) {
                if (!error) {
                    NSMutableArray *accounts = [NSMutableArray array];
                    NSString *privateKeyString =  [(CloudKeychainSigner *)s account].privateKeyString;
                    for (WalletModel *w in ethWallets) {
                        if(w.walletType == OpenWalletTypeSee){
                            // 观察者钱包过滤掉
                            [WalletDBManager addWallet:w];
                            continue;
                        }

                        /// 1.兼容安卓,子钱包中包含主钱包时，过滤操作
                        NSString *mainWalletAddress = [[WalletUtil mainWalletAddress] hexLowercaseStringFormat];
                        if (![[w.address hexLowercaseStringFormat] isEqualToString: mainWalletAddress]) {
                            // 3.使用主钱包privateKey解密子钱包
                            NSString *walletPrivateKey = [AESUtil decryptAES:w.secretPrivateKey password:privateKeyString];
                            if (!walletPrivateKey) {
                                [WalletManager setSharedWallet:nil];
                                [weakself hiddenTCHUD];
                                [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetFailedToDecryptWalletTryAgain" table:Table_OpenPlanet comment:@"解密子钱包失败，请重试"]];
                                return ;
                            }
                            walletPrivateKey = [WalletUtil walletHexPrivateKeyFormat:walletPrivateKey];
                            // 4.拿到子钱包Account
                            NSData *data = (NSData *)[SecureData secureDataWithHexString:walletPrivateKey];
                            Account* account = [Account accountWithPrivateKey:data];
                            if (account) {
                                [accounts addObject:account];
                            }
                            [WalletDBManager addWallet:w];
                        }
                    }

                    NSMutableArray *btcSeedPhrases = [NSMutableArray array];
                    for (WalletModel *w in btcWallets) {
                        // 3.使用主钱包privateKey解密子钱包
                        NSString *walletSeedPhrase = [AESUtil decryptAES:w.secretSeedPhrase password:privateKeyString];
                        if (!StringIsEmpty(walletSeedPhrase)) {
                            [btcSeedPhrases addObject: [BTCWalletManager btcWalletWithSeedPhrase:walletSeedPhrase]];
                        }
                        NSString *btcSecretSeedPhrase = [AESUtil encryptAES:walletSeedPhrase password:[account.address checksumAddress]];
                        w.btcSecretSeedPhrase = btcSecretSeedPhrase;
                        [WalletDBManager addWallet:w];
                    }



                    for (WalletModel *w in eosWallets) {
                        [WalletDBManager addWallet:w];
                    }


                    [WalletSaveChildWalletUtil addSubWalletToKeyChain:accounts password:weakself.password complete:^(id result) {
                        [WalletSaveChildWalletUtil addBTCSubWalletToKeyChain:btcSeedPhrases password:weakself.password complete:^(id result) {
                            if ([NSThread isMainThread]) {
                                [weakself walletAccountAdded];
                            }else{
                                dispatch_async(dispatch_get_main_queue(), ^{
                                    [weakself walletAccountAdded];
                                });
                            }
                        }];
                    }];
                }else{
                    [weakself hiddenTCHUD];
                    [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetFailureToUnlockWallet" table:Table_OpenPlanet comment:@"解锁主钱包失败"]];
                }
            }];
        }else{
            [weakself hiddenTCHUD];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetNoMainWalletWasObtained" table:Table_OpenPlanet comment:@"未获取到主钱包"]];
        }
    }];

    [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] password:self.password];
    [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] address:[account.address checksumAddress]];
}



#pragma mark - 钱包新增回调
-(void)walletAccountAdded {
    [WalletManager refreshWallet];
    [self hiddenTCHUD];
    switch (self.type) {
        case WalletTypeRegister:{
            [EnvironmentVariable setProperty:@(LoginStepNoAvatar) forKey:LOGIN_STEP];
        }
            break;
        case WalletTypeLogin:
        case WalletTypeLoginBackUp:{
            [EnvironmentVariable setProperty:@(LoginStepNoFans) forKey:LOGIN_STEP];
        }
            break;
        case WalletTypeAdd:
            break;
        default:
            break;
    }
    UIAlertController *alertVc = [UIAlertController alertControllerWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetRecoverySuccessful" table:Table_OpenPlanet comment:@"恢复成功"] preferredStyle:UIAlertControllerStyleAlert];
    [alertVc addAction:[UIAlertAction actionWithTitle:[JFLanguageManager commonStringWithConfirm] style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        [self goNextController];
    }]];
    [self presentViewController:alertVc animated:YES completion:nil];
}

- (void)goNextController{
    switch (self.type) {
        case WalletTypeRegister:{
            TCUploadAvatarController * setAvatarVc = [TCUploadAvatarController new];
            [self.navigationController pushViewController:setAvatarVc animated:YES];
        }
            break;
        case WalletTypeLogin:
        case WalletTypeLoginBackUp:{
            TCUploadFansController *importFansVc = [TCUploadFansController new];
            importFansVc.type = UploadFansTypeRegister;
            [self.navigationController pushViewController:importFansVc animated:YES];
        }
            break;
        case WalletTypeAdd:{
            [NOTIFICATIONCENTER postNotificationName:@"refreshWalletAccountList" object:nil];
            [self.navigationController dismissViewControllerAnimated:YES completion:nil];
        }
            break;
            
        default:
            break;
    }
}


- (NSArray *)getChildVc{
    SLPageEntity *entity1 = [SLPageEntity new];
    entity1.title = [JFLanguageManager stringWithKey:@"openPlanetMnemonic" table:Table_OpenPlanet comment:@"助记词"];
    entity1.childView = self.memoryView;
    
    SLPageEntity *entity2 = [SLPageEntity new];
    entity2.title = [JFLanguageManager stringWithKey:@"privateKeyLanguage" table:Table_Tools comment:@"私钥"];
    entity2.childView = self.priviteKeyView;
    
    self.titles = @[entity1,entity2];
    return self.titles;
}

#pragma mark - lazyload
- (SLPageEqualTitleView *)pageTitleView{
    if (!_pageTitleView) {
        _pageTitleView = [SLPageEqualTitleView new];
        _pageTitleView.theme_backgroundColor = [UIColor theme_colorForKey:@"viewContentColor"];
        _pageTitleView.theme_normalColor = [UIColor theme_colorForKey:@"pageTitleNormal"];
        _pageTitleView.theme_selectColor = [UIColor theme_colorForKey:@"pageTitleSelect"];

        [self.view addSubview:_pageTitleView];
        [_pageTitleView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.top.right.equalTo(self.view);
            make.height.equalTo(@(45));
        }];
    }
    return _pageTitleView;
}

- (SLPageNormalContentView *)pageContentView{
    if (!_pageContentView) {
        _pageContentView = [SLPageNormalContentView new];
        [self.view addSubview:_pageContentView];
        
        [_pageContentView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.equalTo(self.pageTitleView.mas_bottom).offset(5);
            make.left.right.bottom.equalTo(self.view);
        }];
    }
    return _pageContentView;
}


- (TCMemoryRecoverWalletView *)memoryView{
    if (!_memoryView) {
        _memoryView = [TCMemoryRecoverWalletView new];
        NSString *nextTitle = self.type == WalletTypeAdd?[JFLanguageManager stringWithKey:@"finish" table:Table_Tools comment:@"完成"]:[JFLanguageManager stringWithKey:@"next" table:Table_Tools comment:@"下一步"];
        [_memoryView.nextButton setTitle:nextTitle forState:UIControlStateNormal];
        [_memoryView.tipLabel setText:[JFLanguageManager stringWithKey:@"openPlanetRestoreBaseByMnemonic" table:Table_OpenPlanet comment:@"通过助记词恢复您的基地账户"] lineSpacing:2];
        [_memoryView.nextButton addTarget:self action:@selector(memoryRecoverAction) forControlEvents:UIControlEventTouchUpInside];
        for (UITextField *textField in _memoryView.memoryWordView.subviews) {
            textField.delegate = self;
            [textField addTarget:self action:@selector(memoryViewTextChanged) forControlEvents:UIControlEventEditingChanged];
        }
        [self memoryViewTextChanged];
    }
    return _memoryView;
}

- (TCPriviteKeyRecoverWalletView *)priviteKeyView{
    if (!_priviteKeyView) {
        _priviteKeyView = [TCPriviteKeyRecoverWalletView new];
        NSString *nextTitle = self.type == WalletTypeAdd?[JFLanguageManager stringWithKey:@"finish" table:Table_Tools comment:@"完成"]:[JFLanguageManager stringWithKey:@"next" table:Table_Tools comment:@"下一步"];
        [_priviteKeyView.nextButton setTitle:nextTitle forState:UIControlStateNormal];
        [_priviteKeyView.tipLabel setText:[JFLanguageManager stringWithKey:@"openPlanetUsePrivateKeyToRestoreBase" table:Table_OpenPlanet comment:@"通过私钥恢复您的基地账户"] lineSpacing:2];
        [_priviteKeyView.nextButton addTarget:self action:@selector(priviteKeyRecoverAction) forControlEvents:UIControlEventTouchUpInside];
        _priviteKeyView.priviteKeyTextView.delegate = self;
        [self textViewDidChange:_priviteKeyView.priviteKeyTextView];
    }
    return _priviteKeyView;
}


@end
