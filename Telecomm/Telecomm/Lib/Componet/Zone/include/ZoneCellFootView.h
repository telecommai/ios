//
//  ZoneFootView.h
//  Zone
//
//  Created by 高建飞 on 2018/5/3.
//  Copyright © 2018年 pansoft. All rights reserved.
//  空间点赞、评论、转发组件
//

#import <UIKit/UIKit.h>
#import "Zone.h"

@interface ZoneCellFootView : UIView

/// 1：点赞， 2：评论， 3：转发
- (void)viewWithModel:(ZoneObjModel *)objModel buttonAction:(StringBlock)buttonAction;

@end
