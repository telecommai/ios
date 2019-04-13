//
//  JFPersonHeaderButtomModel.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/4/24.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFPersonHeaderButtomModel : NSObject

/// 标题
@property (copy, nonatomic) NSString *title;
/// 数目
@property (copy, nonatomic) NSString *count;
/// 备注
@property (copy, nonatomic) NSString *other;
/// 跳转界面
@property (nonatomic, copy) NSString *viewControllerNameString;

@end
