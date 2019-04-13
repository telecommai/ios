//
//  ZoneSendVideoManager.h
//  Zone
//
//  Created by 高建飞 on 2018/5/16.
//  Copyright © 2018年 pansoft. All rights reserved.
//  发送引力波，选择视频管理类
//

#import <Foundation/Foundation.h>
#import "SmallVideoShootingController.h"
#import "WriteLocalDatasManager.h"
#import "Zone.h"
#import "ZoneSendVideoView.h"


typedef void(^RecordVideoBlock)(WriteLocalDetailsModle *model);

@interface ZoneSendVideoManager : NSObject

@property (nonatomic, readonly) SmallVideoShootingController *smallVideoView;
@property (nonatomic, copy) RecordVideoBlock recordVideoBlock;
@property (nonatomic, copy) StringBlock uploadSuccessBlock; // 上传云盘完成回调
@property (nonatomic, copy) VoidBlock uploadFailBlock; // 上传云盘失败回调
@property (nonatomic, strong) ZoneSendVideoView *videoView;

// 相册中选取小视频
- (void) presentTZImagePickerControllerWithSuperController:(UIViewController *)superController;
/// 上传视频到云盘
- (void)zipVideoWithLocalDetailsModel:(WriteLocalDetailsModle *)model;

@end
