//
//  AddGridImageCell.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/10/12.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AddGridImageModel;
@class AddGridImageCell;

NS_ASSUME_NONNULL_BEGIN

@protocol AddGridImageCellDelegate <NSObject>

/// 删除
- (void)deleteImageWithCell:(AddGridImageCell *)cell model:(AddGridImageModel *)model;
/// 重新上传
- (void)reUpdateImageWithCell:(AddGridImageCell *)cell model:(AddGridImageModel *)model;

@end


@interface AddGridImageCell : UICollectionViewCell

@property (nonatomic, strong) AddGridImageModel *model;
@property (nonatomic, weak) id<AddGridImageCellDelegate> delegate;

/// 更新上传进度
- (void)updateUploadProgress:(CGFloat)progress;


@end

NS_ASSUME_NONNULL_END
