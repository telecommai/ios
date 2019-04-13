//
//  EShopAfterSaleAlertViewController.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/7.
//  Copyright © 2018 谢虎. All rights reserved.
//  售后弹出选择页面

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopAfterSaleAlertViewController : UIViewController

// 标题
@property (nonatomic, copy)NSString *alertTitle;
@property (nonatomic, strong) NSMutableArray *dataArray;
@property (nonatomic, copy)void(^EShopAfterSaleAlertBlock)(NSString *choseModel);
@end

NS_ASSUME_NONNULL_END
