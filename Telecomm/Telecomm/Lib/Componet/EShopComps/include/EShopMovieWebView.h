//
//  GKWebView.h
//  GuoKanComps
//
//  Created by 王胜利 on 2017/11/21.
//  Copyright © 2017年 王胜利. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

typedef void(^JSMessageBlock)(WKScriptMessage *message);
typedef void(^ActionBlock)(WKWebView *webView);

@interface EShopMovieWebView : UIView

@property (nonatomic, strong)ActionBlock didStart;
@property (nonatomic, strong)ActionBlock didFinish;
@property (nonatomic, strong)ActionBlock didCommit;
@property (nonatomic, strong)ActionBlock failLoad;


/**
 加载网络地址URL

 @param URLStr 网页地址
 */
- (void)loadURLStr:(NSString *)URLStr;


/**
 加载本地网页

 @param fileUrlStr 页面地址
 @param readAccessURLStr 网页css等资源文件夹
 */
- (void)loadFileUrlStr:(NSString *)fileUrlStr readAccessURLStr:(NSString *)readAccessURLStr;


/**
 注册监听和回调

 @param msgs 需要注册的事件
 @param message 监听回调
 */
- (void)registerScriptMsgs:(NSArray <NSString *>*)msgs receiveScriptMsg:(JSMessageBlock)message;

- (void)sendToJs:(NSString *)js;

@end
