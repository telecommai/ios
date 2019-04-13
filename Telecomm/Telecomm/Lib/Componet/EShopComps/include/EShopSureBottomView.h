//
//  EShopSureBottomView.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/9/17.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EShopSureBottomView : UIView

// 价格以及单位刷新
- (void)refreshViewWithAllFare:(CGFloat)allFare priceUnit:(NSString *)priceUnit;

//订单总价格
@property (nonatomic,assign) CGFloat allFare;

//提交按钮
@property (nonatomic,strong) UIButton *commitBtn;

@end
