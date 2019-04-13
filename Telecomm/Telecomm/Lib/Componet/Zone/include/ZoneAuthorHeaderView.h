//
//  ZoneHeadView.h
//  Zone
//
//  Created by 王胜利 on 2018/5/3.
//  Copyright © 2018年 pansoft. All rights reserved.
//  空间引力波个人信息组件
//


#import <UIKit/UIKit.h>
#import "Zone.h"

typedef  void(^ViewBlock)(UIView *view);

@interface ZoneAuthorHeaderView : UIView

/// 赋值空间引力波Cell头部个人信息组件
- (void)headViewWithZoneObjModel:(ZoneModel *)zoneModel rightView:(ViewBlock)rightView;
/// 评论头部
- (void)headViewWithCommentModel:(ZoneCommentModel *)commentModel;

@property (nonatomic,assign) BOOL isAvatarUnEnable;

@end
