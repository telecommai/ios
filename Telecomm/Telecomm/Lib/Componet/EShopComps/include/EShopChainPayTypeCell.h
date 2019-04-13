//
//  EShopChainPayTypeCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/11/7.
//  Copyright © 2018 谢虎. All rights reserved.
//  一元夺宝付款页面付款选项

#import <UIKit/UIKit.h>
#import "EShopPayManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface EShopChainPayTypeCell : UITableViewCell

/// 数据源
@property (nonatomic, strong) EShopWinTreasurePayTypeModel *payTypeModel;
/// 需支付金额
@property (nonatomic, assign) float payNumber;

- (void)initWithPayTypeModel:(EShopWinTreasurePayTypeModel *)payTypeModel payNumber:(float)payNumber priceUnit:(NSString *)priceUnit;

@end

NS_ASSUME_NONNULL_END
