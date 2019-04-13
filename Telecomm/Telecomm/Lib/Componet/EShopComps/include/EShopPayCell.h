//
//  EShopPayCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/9/12.
//  Copyright © 2018年 pansoft. All rights reserved.
//  商城付款Cell
//

#import <UIKit/UIKit.h>
#import "EShopPayManager.h"

@interface EShopPayCell : UITableViewCell

/// Cell数据模型
@property (nonatomic,strong) EShopPayTypeModel *payModel;
/// 充值按钮回调
@property (nonatomic,copy) void (^rechargeBlock)(EShopPayTypeModel *payModel);

@end
