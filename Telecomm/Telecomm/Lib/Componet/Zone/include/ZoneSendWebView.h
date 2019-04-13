//
//  ZoneSendWebView.h
//  Zone
//
//  Created by 吴鹏 on 2018/5/17.
//  Copyright © 2018年 pansoft. All rights reserved.
//  发送引力波(网址)
//

#import <UIKit/UIKit.h>
#import "Zone.h"
#import <WebKit/WebKit.h>

@interface ZoneSendWebView : UIView<UITextFieldDelegate>
///网页url输入框
@property (nonatomic, strong) UITextField *urlTextField;
///加载网页webView
@property (nonatomic, strong) WKWebView *webView;
/// 删除网页
@property (nonatomic, copy) VoidBlock deleteWebBlock;

@end
