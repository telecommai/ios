//
//  TCSureMemoryWordController.m
//  OpenPlanet
//
//  Created by 王胜利 on 2018/4/26.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import "TCSureMemoryWordController.h"
#import "TCSureMemoryView.h"
#import "TCUploadAvatarController.h"
#import "TCUploadFansController.h"
#import "WalletUtil.h"
#import <ethers/Account.h>
#import <ethers/CloudKeychainSigner.h>
#import <ethers/Wallet.h>
#import <ethers/WalletManager.h>
#import "YYRSACrypto.h"
#import "UIViewController+TCHUD.h"
#import "AppDelegate.h"
#import "WalletHttpManager.h"
#import "WalletDBManager.h"
#import "AESUtil.h"
#import "SLAlertController.h"
#import "BTCWalletManager.h"
#import "EosPrivateKey.h"
#import "EOSManager.h"
#import "JFLanguageManager.h"

@interface TCSureMemoryWordController ()

@property (nonatomic, strong) TCSureMemoryView *rootView;
@property (nonatomic, strong) NSMutableArray *noSelectMemoryWords;
@property (nonatomic, strong) NSMutableArray *selectedMemoryWords;

@end

@implementation TCSureMemoryWordController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = [JFLanguageManager stringWithKey:@"openPlanetConfirmYourBaseMnemonic" table:Table_OpenPlanet comment:@"确认您的基地助记词"];
    self.view.theme_backgroundColor = [UIColor theme_colorForKey:@"viewBackgroud"];
    [self rootView];

    self.noSelectMemoryWords = [NSMutableArray arrayWithArray:self.memoryWord];
    [self refreshMemoryWordView];
}

/// MARK: 返回
- (void)backAction{
    [self.navigationController popViewControllerAnimated:YES];
}

/// MARK: 下一步‘
- (void)nextAction{
    
    // 移除旧的本地钱包
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeETH];
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeEOSTEST];
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeEOS];
    [WalletDBManager removeAllWalletsWithBlockChainType:BlockChainTypeBTC];

    NSString *oldMemoryWord = [self.memoryWord componentsJoinedByString:@" "];
    NSString *newMemoryWord = [self.selectedMemoryWords componentsJoinedByString:@" "];
    if ([newMemoryWord isEqualToString:oldMemoryWord]) {
        [self showTCHUDWithTitle:[JFLanguageManager stringWithKey:@"openPlanetBackingUpTheBase" table:Table_OpenPlanet comment:@"正在备份基地"]];
        // 1、创建通讯公钥、私钥
        [self createComPublicKeyAndPrivateKey];
    }else{
        [self sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetBackupFailedPleaseCheckYourMnemonic" table:Table_OpenPlanet comment:@"备份失败，请检查您的助记词"]];
    }
}

/// MARK: 1.创建通讯公钥私钥,并将通讯公钥主钱包保存到服务器
- (void)createComPublicKeyAndPrivateKey{
    WEAK(self)
    // 1.1创建保存通讯公钥
    [WalletUtil createSaveWalletAndComPublicKey:self.account success:^(NSString *comPublicKey, NSString *comPrivateKey) {
        // 钱包地址
        NSString *address = [weakself.account.address checksumAddress];
        // 钱包公钥
        NSString *publicKey = [weakself.account publicKey];

        // 1.2保存通讯私钥和主钱包地址到服务器
        [TCLoginManager saveWalletWithWalletAddress:address publicKey:publicKey comPublicKey:comPublicKey isAddYinZuan:YES success:^(id result) {
            if ([[result valueForKey:@"result"] isEqualToString:@"success"]) {

                // 2、保存主钱包到本地
                [weakself addMainWalletToLocal];
            }else{
                [weakself hiddenTCHUD];
                [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetSavingBaseAccountFailedTryAgain" table:Table_OpenPlanet comment:@"保存基地账户失败，请重试"]];
            }
        } fail:^(NSString *errorDescription) {
            [weakself hiddenTCHUD];
            [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetSavingBaseAccountFailedTryAgain" table:Table_OpenPlanet comment:@"保存基地账户失败，请重试"]];
        }];
    } fail:^(NSString *errorDescription) {
        [weakself hiddenTCHUD];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetSavePrivateKeyFailedTryAgain" table:Table_OpenPlanet comment:@"保存通讯私钥失败,请重试"]];
    }];
}


/// MARK: 2.添加主钱包到本地
- (void)addMainWalletToLocal{
    WEAK(self)
    Wallet *wallet = [WalletManager sharedWallet];
    [wallet addAccount:self.account password:self.password nickname:[EnvironmentVariable getWalletUserID] callback:^(Address *address) {
        [WalletManager refreshWallet];
        [EnvironmentVariable setProperty:[address checksumAddress] forKey:@"ethAddress"];
        [weakself createDefaultBtcWallet];
    }];
    [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] password:self.password];
    [EnvironmentVariable setWalletUserID:[EnvironmentVariable getWalletUserID] address:[self.account.address checksumAddress]];
}



/// MARK: 3.创建默认BTC钱包
- (void)createDefaultBtcWallet{

    WEAK(self)
    // 3.1.解锁主钱包
    [[WalletUtil mainWallet] unlockPassword:self.password callback:^(Signer *signer, NSError *error) {
        if (error) {
//            [weakself hiddenTCHUD];
//            [weakself sl_showAlertWithTitle:@"提示" message:@"保存通讯私钥失败,请重试"];
            [weakself createComplete];
            return ;
        }


        NSString *mainWalletPrivateKey =  [(CloudKeychainSigner *)signer account].privateKeyString;

        WalletModel *model = [WalletModel new];
        model.avatar = nil;
        model.name = @"BTC-Wallet";
        model.chainType = BlockChainTypeBTC;
        model.walletType = OpenWalletTypeNormal; // 普通钱包
        model.mainWalletAddress = [WalletUtil mainWalletAddress];
        model.keystore = @"";


        NSString *seedPhrase = [weakself.memoryWord componentsJoinedByString:@" "];

        [BTCWalletManager walletWithSeedPhrase:seedPhrase complete:^(BOOL isSuccess, BTCWallet *wallet) {

            model.address = wallet.wallet.receiveAddress;
            model.publicKey = wallet.publicKey;
            model.secretPrivateKey = [AESUtil encryptAES:wallet.privateKey password:mainWalletPrivateKey];
            model.secretSeedPhrase = [AESUtil encryptAES:wallet.seedPhrase password:mainWalletPrivateKey];

            [self createDefaultEosWalletWithBTCModel:model btcWallet:wallet mainWalletPrivateKey:mainWalletPrivateKey];

        }];

    }];
}

/// MARK: 4.创建默认EOS钱包(未激活)
- (void)createDefaultEosWalletWithBTCModel:(WalletModel *)btcModel btcWallet:(BTCWallet *)btcWallet mainWalletPrivateKey:(NSString *)mainWalletPrivateKey{
    EosPrivateKey *ownerKey = [[EosPrivateKey alloc] initEosPrivateKey];
    EosPrivateKey *activeKey = [[EosPrivateKey alloc] initEosPrivateKey];


    WalletModel *eosModel = [WalletModel new];
    eosModel.avatar = nil;
    eosModel.name = @"EOS-Wallet";
    eosModel.chainType = EOS_TEST?BlockChainTypeEOSTEST:BlockChainTypeEOS;
    eosModel.walletType = OpenWalletTypeNormal; // 普通钱包
    eosModel.mainWalletAddress = [WalletUtil mainWalletAddress];
    eosModel.keystore = @"";

    NSString *timeString = [NSString stringWithFormat:@"%ld",(long)[[NSDate date]timeIntervalSince1970] * 1000];

    eosModel.address = timeString;
    eosModel.publicKey = ownerKey.eosPublicKey;
    eosModel.secretPrivateKey = [AESUtil encryptAES:ownerKey.eosPrivateKey password:mainWalletPrivateKey];
    eosModel.eosActivePublicKey = activeKey.eosPublicKey;
    eosModel.eosActiveSecretPrivateKey = [AESUtil encryptAES:activeKey.eosPrivateKey password:mainWalletPrivateKey];
    eosModel.secretSeedPhrase = @"";
    eosModel.keystore = @"";
    eosModel.eosIsActive = NO;
    eosModel.eosAccounts = @[];

    [self saveDefaultChildWalletToServerWithBtcModel:btcModel btcWallet:btcWallet eosModel:eosModel];
}


/// MARK: 5.保存创建的默认子钱包到服务器
- (void)saveDefaultChildWalletToServerWithBtcModel:(WalletModel *)btcModel btcWallet:(BTCWallet *)btcWallet eosModel:(WalletModel *)eosModel{
    WEAK(self)
    // 1.添加子钱包到服务器
    [WalletHttpManager addSubWalletsWithWalletModels:@[btcModel,eosModel] success:^(id result) {
//        [weakself hiddenTCHUD];

        if (!result || ![[result valueForKey:@"result"] isEqualToString:@"success"]) {
            //                    [weakself sl_showAlertWithTitle:@"提示" message:@"添加失败"];
            [weakself createComplete];
            return ;
        }


        NSArray *btcWallets = [WalletDBManager queryAllWallets:BlockChainTypeBTC];
        if (btcWallets.count == 0) {
            btcModel.isCurrentWallet = YES;
        }
        // 2.添加BTC子钱包到本地数据库
        [WalletDBManager addWallet:btcModel];


        NSArray *eosWallets = [WalletDBManager queryAllWallets:EOS_TEST?BlockChainTypeEOSTEST:BlockChainTypeEOS];
        if (eosWallets.count == 0) {
            eosModel.isCurrentWallet = YES;
        }
        // 2.添加EOS子钱包到本地数据库
        [WalletDBManager addWallet:eosModel];


        // 3.添加钱包到keyChain(钥匙串)
        BOOL isSuccess = [BTCWalletManager saveBtcWalletToKeyChain:btcWallet password:weakself.password];
        if (!isSuccess) {
            //                    [weakself sl_showAlertWithTitle:@"提示" message:@"添加失败"];
            [weakself createComplete];
            return;
        }

        [weakself createComplete];

    } failure:^(NSString *error) {
        [weakself hiddenTCHUD];
        [weakself sl_showAlertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"addFailed" table:Table_Tools comment:@"添加失败"]];
    }];

}

/// MARK: 5.操作完成
- (void)createComplete{
    [self hiddenTCHUD];
    [EnvironmentVariable setProperty:@(LoginStepNoAvatar) forKey:LOGIN_STEP];
    [SLAlertController sl_alertWithTitle:[JFLanguageManager commonStringWithAlert] message:[JFLanguageManager stringWithKey:@"openPlanetBaseAccountAddedSuccessfully" table:Table_OpenPlanet comment:@"基地账户添加成功"]].addDefaultButton(self.type == WalletTypeAdd?[JFLanguageManager stringWithKey:@"finish" table:Table_Tools comment:@"完成"]:[JFLanguageManager stringWithKey:@"next" table:Table_Tools comment:@"下一步"], ^(UIAlertAction *action, UIAlertController *alert) {
        [self goNextController];
    }).show(self);
}

/// MARK: 6.去下一个界面
- (void)goNextController{
    switch (self.type) {
        case WalletTypeRegister:{
            TCUploadAvatarController *vc = [TCUploadAvatarController new];
            [self.navigationController pushViewController:vc animated:YES];
        }
            break;
        case WalletTypeLogin:
        case WalletTypeLoginBackUp:{
            TCUploadFansController *vc = [TCUploadFansController new];
            vc.type = UploadFansTypeRegister;
            [self.navigationController pushViewController:vc animated:YES];
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

- (void)noSelectWordTapAciton:(NSString *)word index:(NSUInteger)index{
    [self.noSelectMemoryWords removeObjectAtIndex:index];
    [self.selectedMemoryWords addObject:word];
    [self refreshMemoryWordView];
}

- (void)selectedWordTapAciton:(NSString *)word index:(NSUInteger)index{
    [self.selectedMemoryWords removeObjectAtIndex:index];
    [self.noSelectMemoryWords addObject:word];
    [self refreshMemoryWordView];
}

- (void)refreshMemoryWordView{
    self.noSelectMemoryWords = [self.noSelectMemoryWords sortedArrayUsingComparator:^NSComparisonResult(NSString *str1, NSString *str2) {
        int seed = arc4random_uniform(2);
        if (seed) {
            return [str1 compare:str2];
        } else {
            return [str2 compare:str1];
        }
    }].mutableCopy;

    self.rootView.noSelectMemoryWords = self.noSelectMemoryWords;
    self.rootView.selectedMemoryWords = self.selectedMemoryWords;

    if (self.selectedMemoryWords.count == 12) {
        self.rootView.nextButton.enabled = YES;
        self.rootView.nextButton.alpha = 1;
    }else{
        self.rootView.nextButton.enabled = NO;
        self.rootView.nextButton.alpha = 0.4;
    }
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - lazyload
- (TCSureMemoryView *)rootView{
    if (!_rootView) {
        _rootView = [TCSureMemoryView new];
        [_rootView.nextButton setTitle:[JFLanguageManager commonStringWithConfirm] forState:UIControlStateNormal];
        _rootView.subTitleLabel.text = [JFLanguageManager stringWithKey:@"openPlanetConfirmYourBaseMnemonic" table:Table_OpenPlanet comment:@"确认您的基地助记词"];
        [_rootView.tipLabel setText:[JFLanguageManager stringWithKey:@"openPlanetClickOnTheMnemonicInOrderToConfirmYourMnemonicIsCorrect" table:Table_OpenPlanet comment:@"请按顺序点击助记词，以确认您的助记词正确"] lineSpacing:2];
        [_rootView.nextButton addTarget:self action:@selector(nextAction) forControlEvents:UIControlEventTouchUpInside];
        [self.view addSubview:_rootView];
        [_rootView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.top.right.equalTo(self.view);
            if (@available(iOS 11.0, *)) {
                make.bottom.equalTo(self.view.mas_safeAreaLayoutGuideBottom);
            } else {
                make.bottom.equalTo(self.view);
            }
        }];


        WEAK(self);
        _rootView.noSelectMemoryWordTapAction = ^(NSString *word, NSUInteger index) {
            [weakself noSelectWordTapAciton:word index:index];
        };
        _rootView.selectedMemoryWordTapAction = ^(NSString *word, NSUInteger index) {
            [weakself selectedWordTapAciton:word index:index];
        };

    }
    return _rootView;
}

- (NSMutableArray *)noSelectMemoryWords{
    if (!_noSelectMemoryWords) {
        _noSelectMemoryWords = [NSMutableArray array];
    }
    return _noSelectMemoryWords;
}

- (NSMutableArray *)selectedMemoryWords{
    if (!_selectedMemoryWords) {
        _selectedMemoryWords = [NSMutableArray array];
    }
    return _selectedMemoryWords;
}

@end
