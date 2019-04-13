//
//  EShopMineHeaderView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商城我的界面头部组件

#import <UIKit/UIKit.h>

@interface EShopMineHeaderView : UIView

@property (nonatomic, strong) UIView *backgroudView;

- (void)viewWithUserAvatar:(NSString *)userAvatar
                  userName:(NSString *)userName
                     items:(NSArray<EShopMineItemEntity *> *)items
                     touch:(void(^)(EShopMineItemEntity *obj, NSUInteger index))touchBlock;

/**
 更新数据

 @param items items 数据源
 */
- (void)reloadDatasWithItems:(NSArray<EShopMineItemEntity *> *)items;

@end
