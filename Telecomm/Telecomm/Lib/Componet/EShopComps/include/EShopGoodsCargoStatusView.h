//
//  EShopGoodsCargoStatusView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/6.
//  Copyright © 2018 谢虎. All rights reserved.
//  货物状态

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopGoodsCargoStatusView : UIView

@property (nonatomic, copy) void(^goodsCargoStatusBlock)(void);

@property (nonatomic, strong) NSString *model;

@end

NS_ASSUME_NONNULL_END
