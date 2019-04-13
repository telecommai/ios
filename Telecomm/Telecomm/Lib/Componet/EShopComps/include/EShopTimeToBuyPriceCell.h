//
//  EShopTimeToBuyPriceCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2019/1/28.
//  Copyright © 2019 谢虎. All rights reserved.
//  限时抢购价格cell

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopTimeToBuyPriceCell : UITableViewCell

/// 数据源
@property (nonatomic, strong) EShopGoodsDetailEntity *goodsEntity;
- (void)cellWithPriceUnit:(NSString *)unit price:(float)price;

@end

NS_ASSUME_NONNULL_END
