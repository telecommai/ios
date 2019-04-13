//
//  TCPrivateController.m
//  OSPTalkChain
//
//  Created by 王胜利 on 2018/3/9.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import "TCPrivateController.h"
#import "TalkChainHeader.h"
#import "JFLanguageManager.h"
#import <WebKit/WebKit.h>
#import "SLAlertController.h"
#import "Masonry.h"
#import "UIView+TCHUD.h"

@interface TCPrivateController ()<WKNavigationDelegate,WKUIDelegate>

@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, strong) UIButton        *failButton;


@end

@implementation TCPrivateController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.theme_backgroundColor = [UIColor theme_colorForKey:@"viewBackgroud"];
    self.title = [JFLanguageManager stringWithKey:@"openPlanetServiceAndPrivacyPolicy" table:Table_OpenPlanet comment:@"服务与隐私条款"];
    NSString *backTitle = [JFLanguageManager stringWithKey:@"close" table:Table_Tools comment:@"关闭"];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:backTitle style:UIBarButtonItemStyleDone target:self action:@selector(dismissAction)];

//    NSString *otherLanguage = [JFLanguageManager stringWithKey:@"toolsLanguage" table:Table_Tools comment:@"语言"];
//    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:otherLanguage style:UIBarButtonItemStyleDone target:self action:@selector(otherLanguage)];

    [self loadPrivate];
}



- (void)dismissAction{
    [self dismissViewControllerAnimated:YES completion:nil];
}
//
//- (void)otherLanguage{
//    NSString *otherLanguage = [JFLanguageManager stringWithKey:@"toolsLanguage" table:Table_Tools comment:@"语言"];
//    NSString *cancel = [JFLanguageManager stringWithKey:@"cancel" table:Table_Tools comment:@"关闭"];
//
//    [SLAlertController sl_actionSheetWithTitle:nil message:otherLanguage]
//    .addDefaultButton(@"English", ^(UIAlertAction *action, UIAlertController *alert) {
//        [self enPrivate];
//    }).addDefaultButton(@"中文", ^(UIAlertAction *action, UIAlertController *alert) {
//        [self cnPrivate];
//    }).addCancelButton(cancel, nil).show(self);
//}


- (void)loadPrivate{
    self.failButton.hidden = YES;
    self.webView.hidden = NO;
    if([[JFLanguageManager getCurrentLanguage] isEqualToString:@"zh-Hans"]){
        [self cnPrivate];
    }else{
        [self enPrivate];
    }

    [self showTCHUDWithTitle:@""];
}

- (void)cnPrivate{
    [self.webView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"https://mobile.solarsource.cn/ospstore/TurboPay/Privacy-zh-Hans.html"]]];
}

- (void)enPrivate{
    [self.webView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"https://mobile.solarsource.cn/ospstore/TurboPay/Privacy-en.html"]]];
}


// 页面加载完成之后调用
- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation{
    [self hiddenTCHUD];
}
- (void)webView:(WKWebView *)webView didFailNavigation:(WKNavigation *)navigation withError:(NSError *)error{
    [self hiddenTCHUD];
    self.webView.hidden = YES;
    self.failButton.hidden = NO;
}
- (void)webView:(WKWebView *)webView didFailProvisionalNavigation:(WKNavigation *)navigation withError:(NSError *)error{
    [self hiddenTCHUD];
    self.webView.hidden = YES;
    self.failButton.hidden = NO;
}

/// MARK: lazyload
- (WKWebView *)webView{
    if (!_webView) {
        _webView = [[WKWebView alloc]init];
        _webView.UIDelegate = self;
        _webView.navigationDelegate = self;
        [self.view addSubview:_webView];
        [_webView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self.view);
        }];
    }
    return _webView;
}

-(UIButton *)failButton {
    if (!_failButton) {
        _failButton = [UIButton buttonWithType:UIButtonTypeCustom];
        NSString *languageStr = [JFLanguageManager stringWithKey:@"stockReload" table:Table_StockMarket comment:@"重新加载"];
        [_failButton setTitle:languageStr forState:UIControlStateNormal];
        _failButton.backgroundColor = EF_RED_COLOR;
        _failButton.layer.cornerRadius = 5.0;
        _failButton.layer.borderWidth = 0;
        [self.view addSubview:_failButton];
        [_failButton addTarget:self action:@selector(loadPrivate) forControlEvents:UIControlEventTouchUpInside];
        [_failButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.size.mas_equalTo(CGSizeMake(120, 40));
            make.center.equalTo(self.view);
        }];
    }
    return _failButton;
}

@end
