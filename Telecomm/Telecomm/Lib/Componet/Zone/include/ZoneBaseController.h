//
//  ZoneBaseController.h
//  Zone
//
//  Created by 王胜利 on 2018/5/14.
//  Copyright © 2018年 pansoft. All rights reserved.
//  空间动态和个人空间Base类
//

#import "EFUIViewController.h"
#import "Zone.h"
#import "ZoneAddCommentController.h"
#import "ZoneHeaderView.h"

#import "ZoneSectionHeaderView.h"
#import "ZoneSectionFooterView.h"
#import "ZoneContentCell.h"
#import "ZoneToolCell.h"
#import "ZoneCommentCell.h"
#import "ZoneItemManager.h"

@interface ZoneBaseController : EFUIViewController

/// 列表页
@property (nonatomic, strong) UITableView     *tableView;
/// 列表页头部组件
@property (nonatomic, strong) ZoneHeaderView  *headerView;
/// 数据源
@property (nonatomic, strong) NSMutableArray  <ZoneModel *>*dataSource;
/// 是否在黑名单中
@property (nonatomic, assign) BOOL isInBlackList;

/// 请求用户信息
- (void)loadUserDataWithUser:(ZoneUserModel *)user;

/// 根据dataSource数目判断是否显示无数据提示View
- (void)noDataTipView;

/// 引力波点击头像事件是否管用
@property (nonatomic,assign) BOOL isSectionHeaderAvatarEnable;

@end
