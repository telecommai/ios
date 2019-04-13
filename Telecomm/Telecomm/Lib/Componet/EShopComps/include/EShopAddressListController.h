//
//  EShopAddressListViewController.h
//  EShopComps
//
//  Created by YRH、王胜利 on 2018/3/7.
//  Copyright © 2018年 谢虎. All rights reserved.
//  收货地址列表界面
//


#import <UIKit/UIKit.h>

@protocol EShopAddressListControllerDelegate <NSObject>

/// 选择收货地址代理
- (void)touchCellWithSelectAddress:(EShopAddressEntity *)addressEntity;

@end

@interface EShopAddressListController : UIViewController

@property (nonatomic, weak) id<EShopAddressListControllerDelegate> delegate;

/// 不可以进行删除操作
@property (nonatomic, assign) BOOL doNotDeleteOperation;
/// 当前选择的收货地
@property (nonatomic, strong) EShopAddressEntity *choosedAddressEntity;

@end
