//
//  EShopMineOrderCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商城我的界面订单Cell

#import <UIKit/UIKit.h>

typedef void(^MineItemBlock)(EShopMineItemEntity *entity);

@interface EShopMineOrderCell : UITableViewCell

- (void)cellWithDatas:(NSArray <EShopMineItemEntity *>*)datas buttonTouch:(MineItemBlock)buttonAction;

@end
