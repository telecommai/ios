//
//  EShopOrderListBrandCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/9/19.
//  Copyright © 2018年 pansoft. All rights reserved.
//  订单商店cell
//

#import <UIKit/UIKit.h>

@interface EShopOrderListBrandCell : UITableViewCell

/**
 赋值订单商品数据
 @param entity 商品模型
 */
- (void)cellWithEntity:(EShopOrderEntity *)entity deleteButtonBlock:(VoidBlock)deleteButtonBlock;

@end
