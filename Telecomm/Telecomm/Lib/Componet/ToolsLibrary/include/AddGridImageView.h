//
//  AddGridImageView.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/10/12.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  九宫格选择图片View(带上传云盘)
//

#import <UIKit/UIKit.h>
#import "Constant.h"

@class PHAsset;

NS_ASSUME_NONNULL_BEGIN


/**
 图片上传状态

 - AddGridImageStatusNotUpload: 还未上传
 - AddGridImageStatusUploading: 正在上传
 - AddGridImageStatusUploadSuccess: 上传成功
 - AddGridImageStatusUploadFail: 上传失败
 */
typedef NS_ENUM(NSUInteger, AddGridImageStatus) {
    AddGridImageStatusNotUpload,
    AddGridImageStatusUploading,
    AddGridImageStatusUploadSuccess,
    AddGridImageStatusUploadFail,
};

@interface AddGridImageModel : NSObject

@property (nonatomic, strong) PHAsset *imageAsset;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, assign) AddGridImageStatus uploadStatus;
@property (nonatomic, assign) CGFloat uploadProgress;

@end



@interface AddGridImageView : UIView

/// 初始化九宫格组件（通过layout控制item的大小间距）
+ (instancetype)viewWithItemSize:(CGSize)itemSize sectionEdge:(UIEdgeInsets)sectionEdge itemMiniSpace:(CGFloat)itemMiniSpace;


/// 数据源
@property (nonatomic, strong) NSMutableArray <AddGridImageModel *>*datas;

/// 图片变动
@property (nonatomic, copy) ArrayBlock imageChangedBlock;
/// 上传云盘完成回调
@property (nonatomic, copy) ArrayBlock uploadSuccessBlock;
/// 上传云盘失败回调
@property (nonatomic, copy) ArrayBlock uploadFailBlock;

/// 图片上传云盘
- (void)uploadImageToSever;

@end

NS_ASSUME_NONNULL_END
