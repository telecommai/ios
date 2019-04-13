//
//  JFRecentFileManager.h
//  ChatComps
//
//  Created by StarLord、王胜利 on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMStructMessage.h"


/**
 消息(最近文件type)

 - RecentFileTypeAll: 所有(获取所有文件使用，数据库不存储此类型)
 - RecentFileTypeDocument: 文档
 - RecentFileTypePicture: 图片
 - RecentFileTypeVideo: 视频
 - RecentFileTypeMusic: 音乐
 - RecentFileTypeOther: 其他
 */
typedef NS_ENUM(NSUInteger, RecentFileType) {
    RecentFileTypeAll            = 0,
    RecentFileTypeDocument       = 1,
    RecentFileTypePicture        = 2,
    RecentFileTypeVideo          = 3,
    RecentFileTypeMusic          = 4,
    RecentFileTypeOther          = 1000,
};
NSString *RecentFileTypeString(RecentFileType type);



typedef NS_ENUM(NSUInteger, RecentFileDownloadState) {
    /// 未下载
    RecentFileUnDownload            = 0,
    /// 已下载
    RecentFileIsDownload            = 1,
    /// 下载中
    RecentFileDownloading           = 2,
    /// 下载失败
    RecentFileDownloadFailed        = 3
};




//const NSString *RecentFileTypeNameMapping[] = {
//    [RecentFileTypeAll] = @"All",
//    [RecentFileTypeDocument] = @"Document",
//    [RecentFileTypePicture] = @"Picture",
//    [RecentFileTypeVideo] = @"Video",
//    [RecentFileTypeMusic] = @"Music",
//    [RecentFileTypeOther] = @"Other",
//};

@interface RecentFileModel : NSObject

/// 文件类型（enum 本地）
@property (nonatomic, assign) RecentFileType recentFileType;
/// 文件的真实类型
@property (nonatomic, copy) NSString *fileType;
/// 文件id
@property (nonatomic, copy) NSString *fileId;
/// 文件名字
@property (nonatomic, copy) NSString *fileName;
/// 文件大小
@property (nonatomic, copy) NSString *fileSize;
/// 文件本地路径
@property (nonatomic, copy) NSString *fileLocalPath;
/// 文件url
@property (nonatomic, copy) NSString *url;
/// 下载状态
@property (nonatomic, assign) RecentFileDownloadState downloadState;
/// 消息id（唯一）
@property (nonatomic, copy) NSString *messageIdString;
/// 文件来源人的id
@property (nonatomic, assign) NSInteger fromUserId;
/// 接受时间
@property (nonatomic, copy) NSString *receiveTime;

/// 消息
@property (nonatomic, strong) IMStructMessage *message;

@property (nonatomic, copy) NSString *fromOrTo;

///  以下字段不存储数据库，临时使用
/// 文件列表是否选中
@property (nonatomic, assign) BOOL isSelect;
/// 格式化的时间
@property (nonatomic, copy) NSString *formatTime;

- (NSString *)recentFileDownloadStateJFLanguageString;


@end

@interface JFRecentFileManager : NSObject

/// 消息转filemodel
+ (RecentFileModel *)objectWithMessage:(IMStructMessage *)message;

/// 获取某一种类型的所有文件
+ (NSArray <RecentFileModel *>*)queryFilesWithFileType:(RecentFileType)fileType;
/// 根据messageIdString查询单个文件
+ (RecentFileModel *)queryFileWithMessageIdString:(NSString *)messageIdString;
/// 添加一个文件
+ (void)addFileWithFileModel:(RecentFileModel *)fileModel;
/// 根据messageIdString删除文件
+ (void)removeFileWithMessageIdString:(NSString *)essageIdString;
/// 更新文件下载状态
+ (void)updateFileDownloadStateWithFileModel:(RecentFileModel *)fileModel;
/// 更新下载的文件本地路径
+ (void)updateFileLocalPathWithFileModel:(RecentFileModel *)fileModel;


/// MARK: 文件选中操作
/// 选中或取消选中某文件
+ (void)isSelectFileWithFileModel:(RecentFileModel *)fileModel;
/// 取消所有选中文件
+ (void)unSelectAllFile;
/// 获取所有选中的文件
+ (NSArray <RecentFileModel *>*)queryAllSelectFiles;


@end



