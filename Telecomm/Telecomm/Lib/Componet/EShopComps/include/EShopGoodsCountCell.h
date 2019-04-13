//
//  EShopGoodsCountCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/9/26.
//  Copyright © 2018 谢虎. All rights reserved.
//  选择数量 cell

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopGoodsCountCell : UICollectionViewCell

/// 加减号回调  
@property (nonatomic, copy) void(^resultBlock)(NSInteger count, BOOL plusStatus);

- (void)setMinNumber:(NSInteger)minNumber maxNumber:(NSInteger)maxNumber lastCount:(NSInteger)lastCount;

@end

NS_ASSUME_NONNULL_END
