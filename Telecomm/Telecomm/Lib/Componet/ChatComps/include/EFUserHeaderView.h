//
//  EFUserHeaderView.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/5/11.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  个人详情界面头部展示个人信息的视图

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@protocol EFUserDetailDelegate <NSObject>
//点击空间
-(void)userDetailDidSelectZoneButton;

@end

@interface EFUserHeaderView : UIView

@property(nonatomic,strong) PersonModel *model;

@property(nonatomic,weak)   id<EFUserDetailDelegate> delegate;

@end
