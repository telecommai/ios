//
//  EShopAddAddressViewController.h
//  EShopComps
//
//  Created by YRH on 2018/1/18.
//  Copyright © 2018年 谢虎. All rights reserved.
//

/*
 添加或更新新邮寄地址
 */

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    UpdateAddress,
    AddNewAddress,
} UpdateOrAddNewAddress;

typedef void(^TouchSaveButtonSuccessBlock)(EShopAddressEntity *saveAddressEntity);
typedef void(^TouchSaveButtonFailedBlock)(NSString *error);

@interface EShopAddAddressController : UIViewController

/**
 表明是更新收货地址还是新增收货地址
 */
@property (nonatomic, assign) UpdateOrAddNewAddress updateOrAddNewAddress;

/**
 存放需要更改的收货地址信息的字典
 */
@property (nonatomic, strong) EShopAddressEntity *addressEntity;

@property (nonatomic, copy) TouchSaveButtonSuccessBlock touchSaveButtonSuccessBlock;
@property (nonatomic, copy) TouchSaveButtonFailedBlock touchSaveButtonFailedBlock;

@end
