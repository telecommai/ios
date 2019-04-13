//
//  JFSelectExchangeController.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/2/20.
//  Copyright © 2019 pansoft. All rights reserved.
//  选择交易所

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFSelectExchangeController : UIViewController


///获取设置交易所的所有数据
+ (NSArray *)getExchangeSettingData;

///获取当前设置的交易所名称
+ (NSString *)getCurrentExchangeSetting;

///获取当前设置的交易所标识
+ (NSString *)getCurrentExchangeIdentifier;

@end

NS_ASSUME_NONNULL_END
