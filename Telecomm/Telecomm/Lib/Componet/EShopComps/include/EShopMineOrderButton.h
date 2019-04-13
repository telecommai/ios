//
//  EShopMineOrderButton.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/7.
//  Copyright © 2018年 谢虎. All rights reserved.
//  我的界面订单Cell中,封装订单类型按钮

#import <UIKit/UIKit.h>

@interface EShopMineOrderButton : UIView


/**
 赋值按钮内容

 @param imagePath 按钮图片路径
 @param title 标题
 @param badge 按钮未读消息数
 */
- (void)buttonWithImagePath:(NSString *)imagePath title:(NSString *)title badge:(NSString *)badge touch:(VoidBlock)touchBlock;

@end
