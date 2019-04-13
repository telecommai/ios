//
//  EShopHorizontalCollectionView.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/18.
//  Copyright © 2018年 wsl. All rights reserved.
//   横向滑动Item组件视图

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    /// 图片类型的item
    HorizontalItemTypeImage,
    /// 店铺类型的item
    HorizontalItemTypeBrand,
    /// 商品类型的item
    HorizontalItemTypeGoods,
    /// 评价类型的item
    HorizontalItemTypeEvaluate,
} HorizontalItemType;

@interface EShopHorizontalCollectionView : UIView


/**
 横向滑动Item组件视图

 @param datas 数据源
 @param itemType item类型(HorizontalItemType)
 @param itemTap item点击回调事件
 @param isShowMore 是否在最后显示更多选项
 @param moreItemTap 更多选项点击回调事件
 */
- (void)horizontalViewWithDatas:(NSArray*)datas
                       itemType:(HorizontalItemType)itemType
                        itemTap:(EShopTapBlock)itemTap
                     isShowMore:(BOOL)isShowMore
                    moreItemTap:(EShopTapBlock)moreItemTap;

@end
