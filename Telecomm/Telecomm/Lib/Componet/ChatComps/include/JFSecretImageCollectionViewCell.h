//
//  JFSecretImageCollectionViewCell.h
//  ESPChatComps
//
//  Created by farby on 2018/5/5.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum : NSUInteger {
    CellStyleNormal,
    CellStyleDelete,
    CellStyleShowImg,
    CellStyleUpdate,
} ImageCellStyle;

@class JFSecretImageCollectionViewCell;
@protocol JFSecretImageCollectionViewCellDelegate <NSObject>

@optional
/// 点击删除按钮
- (void)touchDeleteBtnToDeleteItem:(JFSecretImageCollectionViewCell *)cell;
/// 点击蒙版
- (void)touchDarkViewDelegateActionItem:(JFSecretImageCollectionViewCell *)cell;

@end
@interface JFSecretImageCollectionViewCell : UICollectionViewCell
@property (nonatomic, weak) id<JFSecretImageCollectionViewCellDelegate> delegate;

- (void)setCellInfoWithDic:(NSMutableDictionary *)cellInfoDic CellStyle:(ImageCellStyle)cellStyle;
/**
 @"img"  图片
 @"type" 已发，未发状态文字
 @"index" 位置
 */
@property (nonatomic, strong, readonly) NSMutableDictionary *cellInfoDic;
@end
