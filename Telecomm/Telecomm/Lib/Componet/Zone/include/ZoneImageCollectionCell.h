//
//  PPTCoursewareCollectionViewCell.h
//  ESPChatComps
//
//  Created by YRH on 2017/12/13.
//  Copyright © 2017年 Pansoft. All rights reserved.
//  从本地选择的图片展示的 cell
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    CellStyleNormal,
    CellStyleDelete,
    CellStyleShowImg,
    CellStyleUpdate,
    CellStyleFail,
} PPTCellStyle;

@class ZoneImageCollectionCell;

@protocol PPTCoursewareCollectionViewCellDelegate <NSObject>
@optional

/// 点击删除按钮
- (void)touchDeleteBtnToDeleteItem:(ZoneImageCollectionCell *)cell;
/// 点击蒙版
- (void)touchDarkViewDelegateActionItem:(ZoneImageCollectionCell *)cell;

@end

@interface ZoneImageCollectionCell : UICollectionViewCell

/// 赋值Cell
- (void)cellWithDictionary:(NSMutableDictionary *)cellInfo;
/// 刷新Cell进度
- (void)refreshCellWithDictionary:(NSMutableDictionary *)cellInfo;


/// @"img":图片   @"type":已发，未发状态文字   @"index":位置
@property (nonatomic, strong, readonly) NSMutableDictionary *cellInfoDictionary;
@property (nonatomic, weak) id<PPTCoursewareCollectionViewCellDelegate> delegate;




/// 设置数据源以及cell样式
- (void)cellInfoWithDictionary:(NSMutableDictionary *)cellInfoDictionary cellStyle:(PPTCellStyle)cellStyle;

/// 更新进度
- (void)updateUploadProgress:(CGFloat)progress;

@end
