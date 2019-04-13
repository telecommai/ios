//
//  UIView+ExtraStorage.h
//  ChatComps
//
//  Created by YRH on 2018/5/23.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

/*
 给view附加一个存储用的属性
 */

#import <UIKit/UIKit.h>

@interface UIView (ExtraStorage)

@property (nonatomic, weak) id extra;

@end
