//
//  EShopSureCouponCell.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/9/17.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EShopSureOrderModel.h"

typedef void (^UseCoinBlock)(BOOL,UISwitch *);
typedef void (^ChangeCoinBlock)(void);
@interface EShopSureCouponCell : UITableViewCell


@property (nonatomic,strong) EShopSureOrderCoinModel *coinModel;

@property (nonatomic, copy)UseCoinBlock useCoinblock;
@property (nonatomic, copy)ChangeCoinBlock changeBlock;

@end
