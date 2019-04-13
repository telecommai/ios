//
//  EShopOrderUploadCredentialsCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/6.
//  Copyright © 2018 谢虎. All rights reserved.
//  上传凭证

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum : NSUInteger {
    CellStyleNormal,
    CellStyleDelete,
    CellStyleShowImg,
    CellStyleUpdate,
    CellStyleFail,
} PPTCellStyle;

@class EShopOrderUploadCredentialsCell;

@protocol EShopOrderUploadCredentialsCellDelegate <NSObject>

@optional

/// 点击删除按钮
- (void)touchDeleteButtonToDeleteItem:(EShopOrderUploadCredentialsCell *)cell;
/// 点击蒙版
- (void)touchDarkViewDelegateActionItem:(EShopOrderUploadCredentialsCell *)cell;

@end


@interface EShopOrderUploadCredentialsCell : UICollectionViewCell

/// 赋值Cell
- (void)cellWithDictionary:(NSMutableDictionary *)cellInfo;
/// 刷新Cell进度
- (void)refreshCellWithDictionary:(NSMutableDictionary *)cellInfo;

/// 设置数据源以及cell样式
- (void)cellInfoWithDictionary:(NSMutableDictionary *)cellInfoDictionary cellStyle:(PPTCellStyle)cellStyle;

/// 更新进度
- (void)updateUploadProgress:(CGFloat)progress;

/// @"img":图片   @"type":已发，未发状态文字   @"index":位置
@property (nonatomic, strong, readonly) NSMutableDictionary *cellInfoDictionary;
@property (nonatomic, weak) id<EShopOrderUploadCredentialsCellDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
