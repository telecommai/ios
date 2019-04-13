//
//  EShopMineHeaderButton.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商场我的界面头部组件内封装按钮

#import <UIKit/UIKit.h>

@interface EShopMineHeaderButton : UIView

- (void)headerButtonWithNum:(NSInteger)num title:(NSString *)title touch:(VoidBlock)touchBlock;
/// 是否隐藏左边分割线(default=NO)
@property (nonatomic, assign)BOOL isHiddenLeftLine;

/// 更新数据
- (void)relodaDataWithNum:(NSInteger)num title:(NSString *)title;

@end
