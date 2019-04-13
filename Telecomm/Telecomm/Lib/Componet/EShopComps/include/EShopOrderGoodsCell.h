//
//  EShopOrderGoodsCell.h
//  EShop
//
//  Created by 王胜利 on 2018/2/26.
//  Copyright © 2018年 pansoft. All rights reserved.
//  订单内商品Cell
//

#import <UIKit/UIKit.h>

@interface EShopOrderGoodsCell : UITableViewCell

@property (nonatomic, copy) void(^orderDetailRefundBtuttonBlock)(EShopOrderGoodEntity *orderGoodsEntity);

- (void)cellWithEntity:(EShopOrderGoodEntity *)entity isShowBottomLine:(BOOL)isShowBottomLine isShowRefundButton:(BOOL)isShowRefundButton;

@end
