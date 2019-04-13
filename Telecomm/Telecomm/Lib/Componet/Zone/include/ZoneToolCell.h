//
//  ZoneToolCell.h
//  Zone
//
//  Created by 王胜利 on 2018/10/23.
//  Copyright © 2018 pansoft. All rights reserved.
//  引力场引力波(点赞、评论、转发工具栏+点赞人员区域)
//

#import <UIKit/UIKit.h>
#import "Zone.h"

@class ZoneToolCell;

NS_ASSUME_NONNULL_BEGIN

@protocol ZoneToolCellDelegate<NSObject>
/// 转发
- (void)zoneToolCellTransmitAction:(ZoneModel *)zoneModel;

@end

@interface ZoneToolCell : UITableViewCell

@property (nonatomic, weak) id<ZoneToolCellDelegate> delegate;
@property (nonatomic, strong) ZoneModel *zoneModel;
@property (nonatomic, weak) UITableView *tableView;

@end

NS_ASSUME_NONNULL_END

