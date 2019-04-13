//
//  ZoneLikeView.h
//  Zone
//
//  Created by 高建飞 on 2018/5/3.
//  Copyright © 2018年 pansoft. All rights reserved.
//  空间点赞人列表组件
//

#import <UIKit/UIKit.h>
#import "ZoneModel.h"

@interface ZoneCellLikeView : UIView

// 点赞人员Label
@property (nonatomic, strong) UILabel *likesLabel;

@property (nonatomic, strong) NSArray <ZoneLikeModel *>*likesArray;

@end
