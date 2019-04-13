//
//  EShopAlbumEvaluateCell.h
//  ShoppingOC
//
//  Created by 王胜利 on 2018/1/18.
//  Copyright © 2018年 wsl. All rights reserved.
//  评价item组件

#import <UIKit/UIKit.h>

@interface EShopHorizontalEvaluateCell : UICollectionViewCell


/**
 初始化评论Item组件

 @param commentEntity 评论数据实体
 */
- (void)cellWithCommentEntity:(EShopEvaluateEntity *)commentEntity;

@end
