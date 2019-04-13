//
//  EShopSelectGoodsNumController.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/26.
//  Copyright © 2018年 谢虎. All rights reserved.
//  选择商品个数

#import <UIKit/UIKit.h>

typedef void(^IntegerBlock)(NSInteger number);

@interface EShopSelectGoodsNumController : UIViewController

/**
 Modal显示选择商品数目弹窗

 @param superVc 父控制器
 @param price 商品单价
 @param confirmButtonTitle 确认按钮标题(默认"确认购买")
 @param currentNumber 当前购买数量
 @param minNumber 最小购买数量
 @param maxNumber 最大购买数量
 @param confirm 确定数量之后的回调事件
 @return 组件实例对象
 */
+ (instancetype)showWithSuperVc:(UIViewController *)superVc
                          price:(CGFloat)price
                confirmButtonTitle:(NSString *)confirmButtonTitle
                  currentNumber:(NSUInteger)currentNumber
                      minNumber:(NSUInteger)minNumber
                      maxNumber:(NSUInteger)maxNumber
                       confirmAction:(IntegerBlock)confirm;

@end
