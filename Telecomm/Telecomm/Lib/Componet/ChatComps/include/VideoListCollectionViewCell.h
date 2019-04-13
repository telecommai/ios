//
//  VideoListCollectionViewCell.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/7/29.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  正常显示视频的Item
 */
@class VideoListCollectionViewCell;
@protocol VideoListCollectionViewCellDelegate <NSObject>

- (void)videoListCollectionViewCellDeletBtnEvent:(VideoListCollectionViewCell *)cell;

@end

@interface VideoListCollectionViewCell : UICollectionViewCell

/// item展示的图片
@property (nonatomic, strong) UIImage *itemImg;
/// 是否处于编辑状态
@property (nonatomic, assign) BOOL isEdit;
/// 代理
@property (nonatomic, weak) id<VideoListCollectionViewCellDelegate> delegate;

@end
