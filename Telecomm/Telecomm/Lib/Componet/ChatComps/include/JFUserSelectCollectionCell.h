//
//  JFUserSelectCollectionCell.h
//  ChatComps
//
//  Created by 虎 谢 on 2019/3/1.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//  选中联系人之后，用于在UICollectionView显示的Item

#import <UIKit/UIKit.h>
#import "PersonModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface JFUserSelectCollectionCell : UICollectionViewCell

@property (nonatomic,strong) PersonModel *model;

@end

NS_ASSUME_NONNULL_END
