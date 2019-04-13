//
//  EShopSureGoodsCell.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/9/17.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EShopSureOrderModel.h"
@interface EShopSureGoodsCell : UITableViewCell

@property (nonatomic,strong) EShopGoodsEntity *goodModel;
@property (nonatomic,assign) BOOL isShowLine;

@end
