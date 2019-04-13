//
//  JFGroupNoticeCell.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFGroupNoticeModel.h"

@class JFGroupNoticeCell;
@protocol  groupStateChangeDelegate <NSObject>

-(void)changeStateWithGroupNoticeCell:(JFGroupNoticeCell *)cell noticeModel:(JFGroupNoticeModel *)model;

@end

@interface JFGroupNoticeCell : UITableViewCell

@property(nonatomic,weak)   id<groupStateChangeDelegate> delegate;

@property(nonatomic,strong)  JFGroupNoticeModel *model;

@end
