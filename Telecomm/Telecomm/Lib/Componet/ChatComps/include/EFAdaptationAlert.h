//
//  EFAdaptationAlert.h
//  ESPChatComps
//
//  Created by Sunjimin on 16/12/6.
//  Copyright © 2016年 Pansoft. All rights reserved.
//
//  下载资源文件提示

#import <UIKit/UIKit.h>

#import "ZipArchive.h"

NS_ASSUME_NONNULL_BEGIN

@class EFAdaptationAlert;

@protocol EFAdaptationAlertDelegate <NSObject>

@optional

/// 点击下载的代理
- (void)didClickButtonAtIndex:(NSInteger)index AlertView:(EFAdaptationAlert *)alertView;// button的tag值
/// 点击取消的代理
- (void)didClickCancelButton:(EFAdaptationAlert *)alertView;
/// 下载完成
-(void)whenAdaptationAlertdidDownload;

/// 成功
- (void)passResult:(BOOL)isSuccess;
/// 失败
- (void)failDownloadResult:(id)statusCode;

@end

@interface EFAdaptationAlert : UIView

@property (nonatomic, weak, nullable)id<EFAdaptationAlertDelegate> delegate;

/// 自定义下载按钮事件
@property (nonatomic, assign) BOOL isCustomDownloadButtonEvent;
/// 自定义取消按钮事件
@property (nonatomic, assign) BOOL isCustomCancelButtonEvent;

/// 下载进度条
@property (nonatomic, strong) UIProgressView *progressV;
/// 下载百分比
@property (nonatomic, strong) UILabel *progressLable;
/// 显示提示信息的label
@property (nonatomic, strong) UILabel *promptLabel;
// session
@property (nonatomic, strong) NSURLSession * session;

- (void)changeBtnTitle:(NSString *)title isHidden:(BOOL)isHidden;

- (instancetype)initWithFrame:(CGRect)frame
                        title:(NSString *)title
                     messages:(NSString *)messages
             showProgressView:(BOOL)showProgress
                     delegate:(id)delegate
                          url:(NSString *)urlStr
                   toFilePath:(NSString *)filePath
            cancelButtonTitle:(NSString *)cancelButtonTitle
            otherButtonTitles:(NSString *)otherButtonTitle;
NS_ASSUME_NONNULL_END
@end
