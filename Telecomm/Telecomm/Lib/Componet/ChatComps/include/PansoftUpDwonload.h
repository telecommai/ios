//
//  PansoftUpDwonload.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2017/4/19.
//  Copyright © 2017年 Pansoft. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "IMStructMessage.h"
#import "CloudDiskBasicOperation.h"
#import <UIKit/UIKit.h>

@protocol PansoftUpDownloadDelegate <NSObject>

- (void)psupLoadPercent:(CGFloat)percent IMStructMessage:(IMStructMessage *)structMessage;

//返回progress
- (void)psupLoadProgress:(NSProgress *)progress IMStructMessage:(IMStructMessage *)structMessage;

@end

@interface PansoftUpDwonload : NSObject

@property (nonatomic, strong) CloudDiskBasicOperation *cloudUpDownLoad;
@property (nonatomic, weak) id<PansoftUpDownloadDelegate> delegate;

/**
 *  上传文件
 *  通过block返回 上传完成后的URL  (目前传data 与 消息， 后续根据实际需求进行更改，下载的方法也是)
 *  @param filePath          数据源路径
 *  @param structMessage 消息
 */

- (void)uploadDatasToPansoftFileUploadfileDatas:(NSData *)data fileName:(NSString *)fileName IMStructMessage:(IMStructMessage *)structMessage block:(void(^)(NSString *url ,NSError *error))sender;
/**
 *  下载文件
 *  通过block返回 下载后的文件（路径）
 *  @param structMessage 消息
 */

- (void)downloadDatasFromPansoftWithiIMStructMessage:(IMStructMessage *)structMessage block:(void(^)(NSString *filePath))sender;
/**
 *  下载文件
 *
 *  @param structMessage
 *  @param sender
 */
- (void)downloadDatasFromPansoftWithUrl:(NSString *)url downloadFile:(NSString *)name block:(void(^)(NSString *filePath))sender;


- (void)downloadDataFromPansoftWithUrl:(NSString *)url downloadFile:(NSString *)name block:(void(^)(NSString *filePath ,NSError *errorMes))sender;


- (void)downloadDatasFromPansoftWithFileID:(NSString *)fileID  block:(void(^)(NSString *filePath))sender;

/**
 指定文件路径下载文件
 
 @param url 文件下载地址
 @param filePath 文件存放地址(上级地址，不包含文件)
 @param fileName 文件名
 @param sender 返回文件存放路径
 */
- (void)downloadFileWithUrl:(NSString *)url filePath:(NSString *)filePath fileName:(NSString *)fileName block:(void(^)(NSString *filePath ,NSError *errorMes))sender;


- (void)PansoftNetManagersuspend;

- (void)PansoftNetManagerresume;

@end
