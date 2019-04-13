//
//  JFMyRedPacketRecordHeaderView.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFPageModel.h"

@interface JFMyRedPacketRecordHeaderView : UITableViewHeaderFooterView

/// 1、我收到的 2、我发出的
-(instancetype)initWithFrame:(CGRect)frame type:(NSInteger)type;

@property (nonatomic,strong) JFPageModel *model;

@end
