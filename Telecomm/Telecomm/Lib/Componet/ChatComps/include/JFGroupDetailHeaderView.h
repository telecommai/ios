//
//  JFGroupDetailHeaderView.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/27.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFGroupDetailHeaderModel.h"

@interface JFGroupDetailHeaderView : UIView

/// 头部模型
@property (nonatomic,strong) JFGroupDetailHeaderModel *model;

/// 更群头像的回调
@property (nonatomic,copy) void(^changeGroupIconCallBack)(void);

/// 展示群二维码的回调
@property (nonatomic,copy) void(^showGroupORCodeCallBack)(void);

@end
