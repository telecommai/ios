//
//  EShopSureCouponView.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/9/19.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ChooseCouponBlock)(CGFloat);

@interface EShopSureCouponView : UIView

@property (nonatomic, copy)ChooseCouponBlock block;

///当前显示的内容提示
@property (nonatomic,copy) NSString *titleStr;

///当前显示的使用积分
@property (nonatomic,copy) NSString *nowUseAmount;

/// 最大可用数
@property (nonatomic,copy) NSString *maxCanUse;
/// 积分余额
@property (nonatomic,copy) NSString * amountBalance;

- (void)show;
- (void)hiden;



@end
