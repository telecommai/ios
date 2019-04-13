//
//  ZoneDetialController.h
//  Zone
//
//  Created by 王胜利 on 2018/5/14.
//  Copyright © 2018年 pansoft. All rights reserved.
//  引力场引力波详情页面
//

#import <UIKit/UIKit.h>
#import "Zone.h"
#import "ZoneAddCommentController.h"
#import "ZoneItemManager.h"
#import "ZoneSectionHeaderView.h"


@interface ZoneDetialController : UIViewController

@property (nonatomic, assign) BOOL isAvatarEnable;
/// 引力波模型
@property (nonatomic, strong) ZoneModel *model;
/// 引力波ID
@property (nonatomic, copy) NSString *shortPostId;
/// 转发引力波回调事件
@property (nonatomic, copy) void(^transmitShortPostBlock)(ZoneModel *model);
/// 说说
@property (nonatomic, copy) void(^sectionHeaderActionBlock)(ZoneHeaderActionType type,ZoneModel *model);

@end
