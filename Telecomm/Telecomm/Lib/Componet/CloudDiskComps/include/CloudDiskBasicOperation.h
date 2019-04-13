//
//  CloudDiskBasicOperation.h
//  CloudDiskComps
//
//  Created by 于仁汇 on 17/3/30.
//  Copyright © 2017年 YRH. All rights reserved.
//  云盘操作调用的接口

#import <Foundation/Foundation.h>

typedef void (^successCompletionHandle)(NSDictionary *resultDic);
typedef void (^failureCompletionHandle)(NSString *error);
typedef void (^progressCompletionHandle)(NSProgress *progress);

@interface CloudDiskBasicOperation : NSObject

/// 创建云盘操作类
+ (instancetype)sharedCloudDiskBasicOperation;

/**
 创建用户（此接口要改动，将来要改）

 @param userName 用户名
 @param passWord 密码
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskCreateUserWithUserName:(NSString *)userName password:(NSString *)passWord success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 创建目录

 @param fileName 目录名称
 @param parentId 父目录ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskCreateDirectoryWithFileName:(NSString *)fileName parentId:(NSString *)parentId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 删除目录

 @param fileId 文件ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskDeleteDirectoryWithFileId:(NSString *)fileId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 根据目录Id获取下级文件

 @param fileId 文件ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskGetNextLevelPanFileByFileId:(NSString *)fileId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 根据ID获取文件

 @param fileId 文件ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskGetPanFileByFileId:(NSString *)fileId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 移动文件(只能是文件，不能是文件夹)

 @param fileId 文件ID
 @param toDirId 目录ID
 @param userId 用户ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskMoveFileWithFileid:(NSString *)fileId toDirId:(NSString *)toDirId userId:(NSString *)userId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 直接上传文件

 @param fileData 文件二进制流
 @param fileName 文件名称，标明文件格式
 @param createUser 文件拥有者
 @param parentId 文件所在的目录
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 @return 返回当前上传 任务字典 @{@"uploadTask" : uploadTask, @"url", urlStr}
 */
- (NSMutableDictionary *)cloudDiskUploadFileWithFileDataL:(NSData *)fileData fileName:(NSString *)fileName createUser:(NSString *)createUser parentId:(NSString *)parentId progress:(progressCompletionHandle)progress success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 上传文件
 
 @param fileData 文件二进制流
 @param fileName 文件名称，标明文件格式
 @param createUser 文件拥有者
 @param parentId 文件所在的目录
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 @return 返回当前上传 任务字典 @{@"uploadTask" : uploadTask, @"url", urlStr}
 */
- (NSMutableDictionary *)cloudDiskUploadFileWithFileData:(NSData *)fileData fileName:(NSString *)fileName createUser:(NSString *)createUser parentId:(NSString *)parentId progress:(progressCompletionHandle)progress success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 删除文件

 @param fileId 文件ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskDeleteFileWithFileId:(NSString *)fileId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 根据文件名称查询文件 (模糊查询，且只查询指定目录下的文件，不递归查询)

 @param fileName 文件名称
 @param ownerId 文件拥有者ID
 @param parentId 目录ID
 @param success 返回成功的block
 @param failure 返回失败的block
 */
- (void)cloudDiskSelectFileByFileName:(NSString *)fileName ownerId:(NSString *)ownerId parentId:(NSString *)parentId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 根据文件名称查询拥有者为组织机构的所有文件 (模糊查询，查询查询拥有者为组织机构的所有文件，这个接口用于企业共享目录下的文件查询)

 @param fileName 文件名称
 @param success 返回成功的block
 @param failure 返回失败的block
 */
- (void)cloudDiskSelectOrganizationOwnerAllFilesByFileName:(NSString *)fileName success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 根据文件名称查询归属某用户的文件 (模糊查询，查询归属某用户的所有文件)

 @param fileName 文件名称
 @param ownerId 文件拥有者ID
 @param success 返回成功的block
 @param failure 返回失败的block
 */
- (void)cloudDiskSelectUserAllFilesByFileName:(NSString *)fileName ownerId:(NSString *)ownerId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 下载文件

 @param fileId 文件ID
 @param downloadProgress 下载进度的block
 @param success 返回成功的block
 @param failure 返回失败的block
 @return 返回当前下载的 任务字典 @{@"session" : manager, @"downloadTask" : downloadTask, @"url" : urlStr}, 方便管理下载任务
 */
- (NSMutableDictionary *)cloudDiskDownloadFileWithFileId:(NSString *)fileId progress:(progressCompletionHandle)downloadProgress success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 更新文件名称

 @param fileId 文件ID
 @param fileName 文件名称
 @param success 返回成功的block
 @param failure 返回失败的block
 */
- (void)cloudDiskUpdateFileNameWithFileId:(NSString *)fileId fileName:(NSString *)fileName success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 预览文件 (当前只支持pdf、doc、docx的预览，且需要云盘应用部署在windows平台)

 @param fileId 文件ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskPreviewFileWithFileId:(NSString *)fileId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 根据ID获取用户信息

 @param userId 用户ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskGetUserInfoByUserId:(NSString *)userId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 创建组织机构

 @param orgName 组织机构名称
 @param parentId 父组织机构ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskCreateOrgWithOrgName:(NSString *)orgName parentId:(NSString *)parentId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 获取组织机构信息

 @param orgId 组织机构ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskGetOrgByOrgId:(NSString *)orgId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 修改组织机构名称

 @param orgName 组织机构名称
 @param orgId 组织机构ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskUpdateOrgName:(NSString *)orgName orgId:(NSString *)orgId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 修改组织机构容量

 @param totalSize 组织机构容量
 @param orgId 组织机构ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskUpdateOrgTotalSize:(NSString *)totalSize orgId:(NSString *)orgId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 将用户加入组织

 @param orgId 组织机构ID
 @param userId 用户ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskInsertUserIntoOrgWithOrgId:(NSString *)orgId userId:(NSString *)userId success:(successCompletionHandle) success failure:(failureCompletionHandle)failure;

/**
 根据组织机构ID获取下级组织机构

 @param orgId 组织机构ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskGetNextLevelOrgByOrgId:(NSString *)orgId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 将用户剔出组织

 @param orgId 组织机构ID
 @param userId 用户ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskDeleteUserFromOrgWithOrgId:(NSString *)orgId userId:(NSString *)userId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;

/**
 查询用户归属的组织

 @param userId 用户ID
 @param success 返回请求成功的block
 @param failure 返回请求失败的block
 */
- (void)cloudDiskSelectUserBelongOrgByUserId:(NSString *)userId success:(successCompletionHandle)success failure:(failureCompletionHandle)failure;



@end
