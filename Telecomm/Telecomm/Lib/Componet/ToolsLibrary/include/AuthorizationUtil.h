//
//  AuthorizationUtil.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/5/28.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kAlertTipCamera          @"没有相机权限"
#define kAlertTipPhotoLibrary    @"没有相册权限"
#define kAlertTipAudio           @"没有麦克风权限"
#define kAlertTipLocation        @"没有定位权限"
#define kAlertTipNotification    @"没有通知权限"
#define kAlertTipAddressBook     @"没有通讯录权限"


/// 需要判断权限的类型
typedef NS_ENUM(NSUInteger, AuthorizationType) {
    /// 相机
    AuthorizationTypeCamera,
    /// 相册
    AuthorizationTypePhotoLibrary,
    /// 麦克风
    AuthorizationTypeAudio,
    /// 定位
    AuthorizationTypeLocation,
    /// 推送
    AuthorizationTypeNotification,
    /// 通讯录
    AuthorizationTypeAddressBook,
};

/// 权限状态
typedef NS_ENUM(NSUInteger, AuthorizationStatus) {
    /// 权限为空
    AuthorizationStatusNil,
    /// 该功能不被支持
    AuthorizationStatusNotSupport,
    /// 未知，第一次等待用户授权
    AuthorizationStatusNotDetermined,
    /// 有授权
    AuthorizationStatusAuthorized,
    /// 无权限
    AuthorizationStatusDenied,
    /// 无权限（可能是家长控制权限）
    AuthorizationStatusRestricted,
};

@interface AuthorizationUtil : NSObject

#pragma mark - base方法
/// 获取权限类型
+ (AuthorizationStatus)authorizationStatusWithType:(AuthorizationType)type;
/// 是否有权限
+ (BOOL)isCanUseWithType:(AuthorizationType)type;
/// 请求权限：注意“推送”和“定位“咱不支持请求权限
+ (void)requestAuthorizationWithType:(AuthorizationType)type complete:(void(^)(BOOL granted))complete;
/// 显示无权限提示框
+ (void)showDeniedAlertWithType:(AuthorizationType)type;



#pragma mark - 集成方法
/// 自动判断权限类型，请求权限、权限并提示（注意“推送”和“定位“咱不支持请求权限）
+ (void)autoAuthorizationWithType:(AuthorizationType)type complete:(void(^)(BOOL granted))complete;
/// 视频(集成请求相机和麦克风权限)
+ (void)autoVideoAuthorizationWithComplete:(void(^)(BOOL granted))complete;




@end
