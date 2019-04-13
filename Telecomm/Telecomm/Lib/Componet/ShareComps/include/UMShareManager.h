//
//  EFShareControllerViewController.h
//  ShareComps
//
//  Created by 虎 谢 on 2017/11/14.
//  Copyright © 2017年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"


@interface UMShareManager : UIViewController

/**
 注册友盟分享

 @param isOpen 是否打开日志
 */
+(void)registerUMShareWithOpenLog:(BOOL)isOpen appName:(NSString *)appName;

/**
 调用分享的参数

 @param imageString 展示图片的地址
 @param title item的标题
 @param describe 描述
 @param targetUrl 点击跳转的地址
 @param success 成功回调
 @param failure 失败回调
 */
-(void)shareWithImageString:(NSString *)imageString
                      title:(NSString *)title
                   describe:(NSString *)describe
                  targetUrl:(NSString *)targetUrl
               friendAction:(VoidBlock )friendAction
                    success:(void (^)(id responseObject))success
                    failure:(void (^)(NSString *error))failure;


/**
 调用群组
 
 @param groupInfo 群主信息
 @param imageString 展示图片的地址
 @param title item的标题
 @param describe 描述
 @param targetUrl 点击跳转的地址
 @param friendAction 分享给朋友的回调
 @param success 成功回调
 @param failure 失败回调
 */
-(void)shareWithGroupWithGroupInfo:(NSDictionary *)groupInfo
                       imageString:(NSString *)imageString
                             title:(NSString *)title
                          describe:(NSString *)describe
                         targetUrl:(NSString *)targetUrl
                      friendAction:(VoidBlock )friendAction
                           success:(void (^)(id responseObject))success
                           failure:(void (^)(NSString *error))failure;

/**
 分享图片

 @param image 图片
 @param title 标题
 @param describe 描述
 @param vc 需要分享的控制器
 @param success 分享成功
 @param failure 分享失败
 */
-(void)shareWithImage:(UIImage *)image
                title:(NSString *)title
             describe:(NSString *)describe
                   vc:(UIViewController *)vc
              success:(void (^)(id responseObject))success
              failure:(void (^)(NSString *error))failure;


/**
 截屏分享图片
 
 @param image 图片
 @param title 标题
 @param describe 描述
 @param type  分享类型  1 为红包海报分享  其他为截屏分享
 @param vc 需要分享的控制器
 @param success 分享成功
 @param failure 分享失败
 */
-(void)ScreenshotShareWithImage:(UIImage *)image
                title:(NSString *)title
             describe:(NSString *)describe
                 type:(NSInteger)type
         friendAction:(IdBlock )friendAction
                   vc:(UIViewController *)vc
              success:(void (^)(id responseObject))success
              failure:(void (^)(NSString *error))failure;


@end
