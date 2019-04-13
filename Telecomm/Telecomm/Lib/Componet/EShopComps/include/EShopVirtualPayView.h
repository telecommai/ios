//
//  EShopVirtualPayView.h
//  EShopComps
//
//  Created by 夏祥可 on 2019/1/9.
//  Copyright © 2019 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EShopPayManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface EShopVirtualPayView : UIView

///点击充值按钮
@property (nonatomic, copy) VoidBlock block;

///头像、观影券/巡演票、价格、余额
- (void)reSetIcon:(NSString *)tokenIcon unitStr:(NSString *)unitStr ordersPrice:(double)ordersPrice balance:(double)balance;


@end

NS_ASSUME_NONNULL_END
