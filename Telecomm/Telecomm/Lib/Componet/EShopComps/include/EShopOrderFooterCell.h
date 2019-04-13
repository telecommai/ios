//
//  EShopOrderFooterCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/2/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//  订单列表订单尾部组件
//

#import <UIKit/UIKit.h>
#import "EShopOrderStatus.h"

@interface EShopOrderFooterCell : UITableViewCell


/**
 赋值订单尾部Cell

 @param orderPrice 订单价格
 @param priceUnit 订单价格单位
 @param goodsNum 订单数量
 @param orderType 订单类型
 */
- (void)cellWithOrderPrice:(NSString *)orderPrice orderPriceUnit:(NSString *)priceUnit goodsNum:(NSUInteger)goodsNum payOrderStatus:(EShopOrderStatus)payOrderStatus orderType:(NSInteger)orderType;

/// 订单操作按钮回调事件
@property (nonatomic, copy)void (^orderFooterViewBlock)(NSString *string,NSInteger orderType);

@end
