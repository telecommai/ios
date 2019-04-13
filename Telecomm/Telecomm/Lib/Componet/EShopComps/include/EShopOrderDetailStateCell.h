//
//  EShopOrderDetailStateCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/31.
//  Copyright © 2018年 pansoft. All rights reserved.
//  订单详情状态信息cell
//

#import <UIKit/UIKit.h>

@interface EShopOrderDetailStateCell : UITableViewCell

@property (nonatomic, assign) EShopOrderStatus orderStatus;
- (void)cellWithOrderStatus:(EShopOrderStatus)orderStatus orderType:(NSInteger)orderType;

@end
