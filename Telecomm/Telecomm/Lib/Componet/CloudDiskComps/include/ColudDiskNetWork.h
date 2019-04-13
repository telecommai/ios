//
//  ColudDiskNetWork.h
//  CloudDiskComps
//
//  Created by 于仁汇 on 17/3/30.
//  Copyright © 2017年 YRH. All rights reserved.
//  所有云盘相关的 url

#ifndef ColudDiskNetWork_h
#define ColudDiskNetWork_h

#define kDowloadUrl(fileID) [NSString stringWithFormat:@"%@/files/%@/download", kUrl,fileID]

// OptionSetting.plist
/// 地址
#define kUrl [NSDictionary dictionaryWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"OptionSetting.plist" ofType:nil]][@"CloudDiskURL"]

#define KUserID [NSDictionary dictionaryWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"OptionSetting.plist" ofType:nil]][@"CloudDiskUserID"]

#define kParentID [NSDictionary dictionaryWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"OptionSetting.plist" ofType:nil]][@"CloudDiskParentID"]

/// POST 创建用户 (要改)
#define kCloudDiskCreateUser @"/users/add"

/// POST 创建目录
#define kCloudDiskCreateDirectory @"/files/dir/add"

/// POST 删除目录 /files/dir/{fileid}/delete
#define kCloudDiskDeleteDirectory @"/files/dir/%@/delete"

/// GET 根据目录ID获取下级文件 /files/dir/{fileid}/nextlevel/query
#define kCloudDiskGetNextLevelPanFileByFileid @"/files/dir/%@/nextlevel/query"

/// GET 根据ID获取文件 /files/dir/{fileid}/query
#define kCloudDiskGetPanFileByFileid @"/files/dir/%@/query"

/// POST 移动文件 /files/file/move
#define kCloudDiskMoveFile @"/files/file/move"

/// POST 上传文件 /files/file/upload
#define kCloudDiskUploadFile @"/files/file/upload"

///POST  直接上传(不校验)
#define kCloudDiskDirectUploadFile  @"/files/file/directupload"

/// POST 删除文件 /files/file/{fileid}/delete
#define kCloudDiskDeleteFile @"/files/file/%@/delete"

/// GET 根据文件名称查询文件 /files/filename/query?filename=%@&ownerid=%@&parentid=%@ (模糊查询，且只查询指定目录下的文件，不递归查询)
#define kCloudDiskSelectFileByFileName @"/files/filename/query?filename=%@&ownerid=%@&parentid=%@"

/// GET 根据文件名称查询拥有者为组织机构的所有文件 /files/orgfilename/query?filename=%@ (模糊查询，查询查询拥有者为组织机构的所有文件，这个接口用于企业共享目录下的文件查询)
#define kCloudDiskSelectOrgOwnerAllFilesByFileName @"/files/orgfilename/query?filename=%@"

/// GET 根据文件名称查询归属某用户的文件 /files/userfilename/query?filename=%@&ownerid=%@ (模糊查询，查询归属某用户的所有文件)
#define kCloudDiskSelectUserAllFilesByFileName @"/files/userfilename/query?filename=%@&ownerid=%@"

/// POST 下载文件 /files/{fileid}/download
#define kCloudDiskDownloadFile @"/files/%@/download"

/// POST 更新文件名称 /files/{fileid}/filename/update
#define kCloudDiskUpdateFileName @"/files/%@/filename/update"

/// POST 预览文件 /files/{fileid}/preview (当前只支持pdf、doc、docx的预览，且需要云盘应用部署在windows平台)
#define kCloudDiskPreviewFile @"/files/%@/preview"

/// GET 根据ID获取用户信息 /users/query/{userid}
#define kCloudDiskGetUserInfoByUserId @"/users/query/%@"

/// POST 创建组织机构 /orgnizations/add
#define kCloudDiskCreateOrg @"/orgnizations/add"

/// GET 获取组织机构信息 /orgnizations/query/{orgid}
#define kCloudDiskGetOrgByOrgId @"/orgnizations/query/%@"

/// POST 修改组织机构名称 /orgnizations/update/{orgid}/orgname
#define kCloudDiskUpdateOrgName @"/orgnizations/update/%@/orgname"

/// POST 修改组织机构容量 /orgnizations/update/{orgid}/totalsize
#define kCloudDiskUpdateOrgTotalSize @"/orgnizations/update/%@/totalsize"

/// POST 将用户加入组织 /orgnizations/user/add
#define kCloudDiskInsertUserIntoOrg @"/orgnizations/user/add"

/// GET 根据组织机构ID获取下级组织机构 /orgnizations/{orgid}/nextlevel/query
#define kCloudDiskGetNextLevelOrgByOrgId @"/orgnizations/{orgid}/nextlevel/query?orgid=%@"

/// POST 将用户剔出组织 /orgnizations/{orgid}/user/{userid}/delete
#define kCloudDiskDeleteUserFromOrg @"/orgnizations/%@/user/%@/delete"

/// GET 查询用户归属的组织 /orgnizations/{userid}/allorg/query
#define kCloudDiskSelectUserBelongOrgByUserId @"/orgnizations/%@/allorg/query"

#endif /* ColudDiskNetWork_h */
