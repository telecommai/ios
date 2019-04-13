//
//  CDHeaderView.h
//  Masonry_3_29
//
//  Created by syl on 16/4/11.
//  Copyright (c) 2016年 张国彬. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@interface CDHeaderTableViewCell : UITableViewCell
///是不是群聊  群聊的cell里除了加号 还有个叉号 不是群聊的只有加号
@property (nonatomic, assign) BOOL                 isGroup;
@property (nonatomic, strong) UIViewController     *viewController;

/// model
@property (nonatomic, strong) PersonModel       *model;

//聊天详情界面的headerview
/*!
 @brief 根据数据数组确定view的内容
 
 @discussion 描述
 
 @param 参数
 
 @return 返回值
 */

-(void)configWithName:(NSString *)nameStr withIcon:(NSString *)iconStr;

-(void)configViewWithArray:(NSArray *)dataArray withIconArray:(NSArray *)iconArray;

@end
