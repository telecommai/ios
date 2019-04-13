//
//  EShopSettlementGeographicalViewController.h
//  EShopComps
//
//  Created by YRH on 2018/1/18.
//  Copyright © 2018年 谢虎. All rights reserved.
//

/*
 添加新地址的时候弹出来的 选择地理位置的VC
 */

#import <UIKit/UIKit.h>

/// 选择完地址回调Block
typedef void(^EShopAddressBlock)(NSString *province,NSString *city,NSString *area);

@interface EShopChooseGeographicalController : UIViewController

+ (instancetype)showWithSuperController:(UIViewController *)superController title:(NSString *)title complete:(EShopAddressBlock)complete;

@end
