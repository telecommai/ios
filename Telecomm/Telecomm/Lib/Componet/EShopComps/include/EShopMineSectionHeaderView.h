//
//  EShopMineSectionHeaderView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商城我的界面分组头

#import <UIKit/UIKit.h>

@interface EShopMineSectionHeaderView : UITableViewHeaderFooterView


/**
 赋值商城我的界面标题栏数据

 @param title 标题
 @param accessoryTitle 右标题
 @param isShowAccessoryButton 是否显示右标题
 @param touchBlock 点击事件
 */
- (void)sectionHeaderWithTitle:(NSString *)title
                accessoryTitle:(NSString *)accessoryTitle
         isShowAccessoryButton:(BOOL)isShowAccessoryButton
                         touch:(VoidBlock)touchBlock;

@end
