//
//  EShopOrderDetailPriceCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/9/29.
//  Copyright © 2018 谢虎. All rights reserved.
//  订单详情显示其他支付方式
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopOrderDetailPriceCell : UITableViewCell

- (void)cellWithTitle:(NSString *)title price:(NSString *)price isShowBottomLine:(BOOL)isShowBottomLine;

@end

NS_ASSUME_NONNULL_END
