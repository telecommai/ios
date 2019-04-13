//
//  SmallVideoCaptureVideo.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/7/7.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

/**
 *  录制视频
 */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef void(^Block)(NSString *);
typedef void(^ErrorBlock)(NSString *error);

@interface SmallVideoCaptureVideo : UIView
/// 压缩后的路径 DocumentDirectory之后的路径
@property (nonatomic, copy) NSString *smallVideoPath;
/// 只保留 DocumentDirectory之后的路径
@property (nonatomic, copy) NSString *smallVideoLocalPath;
/// 完整的本地录制地址
@property (nonatomic, copy) NSString *filePath;

@property (nonatomic, copy) Block block;

@property (nonatomic, copy) ErrorBlock errorBlock;

/**
 *  停止录制
 */
- (void)stopCapture;
/**
 *  开始录制
 */
- (void)startCapture;
/**
 *  压缩文件
 */
- (void)compressVideo;

@end

