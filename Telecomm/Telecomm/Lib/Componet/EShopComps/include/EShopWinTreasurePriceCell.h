//
//  EShopWinTreasurePriceCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/11/1.
//  Copyright © 2018 pansoft. All rights reserved.
//  夺宝类商品价格显示（带有进度条）

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopWinTreasurePriceCell : UITableViewCell

/// 数据源
@property (nonatomic, strong) EShopGoodsDetailEntity *goodsEntity;

@end

NS_ASSUME_NONNULL_END
