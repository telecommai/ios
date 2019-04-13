//
//  EShopOrderUploadCredentialsView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/6.
//  Copyright © 2018 谢虎. All rights reserved.
//  售后上传凭证(最多6张)

#import <UIKit/UIKit.h>
#import "Zone.h"

NS_ASSUME_NONNULL_BEGIN

@interface EShopOrderUploadCredentialsView : UIView

@property (nonatomic, strong) NSMutableArray *dataArray;
/// cell点击block
@property (nonatomic, copy) void(^didselectItemBlock)(NSIndexPath *indexPath);
/// 选择完成
@property (nonatomic, copy) VoidBlock selectFinish;
/// 上传云盘完成回调
@property (nonatomic, copy) ArrayBlock uploadSuccessBlock;
/// 上传云盘失败回调
@property (nonatomic, copy) VoidBlock uploadFailBlock;
/// 删除图片
@property (nonatomic, copy) VoidBlock deleteImageBlock;

/// 图片上传云盘
- (void)uploadImageToSever;
/// 进入相册选择图片
- (void)insertImageAction;
/// 清除数据
- (void) clearData;

@end

NS_ASSUME_NONNULL_END
