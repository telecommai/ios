//
//  ButtonCollectionView.h
//  Zone
//
//  Created by 高建飞 on 2018/5/17.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Zone.h"
#import "ZoneSendManager.h"

@interface ZoneSendBottomModel : NSObject

/// 发送图标
@property (nonatomic, strong) UIImage *icon;
/// 类型
@property (nonatomic, assign) ZoneSendType sendType;

+ (instancetype)modelWithIcon:(UIImage *)icon sendType:(ZoneSendType)sendType;
@end


@interface ZoneSendBottomView : UIView

/// 初始化
+ (instancetype)viewWithDatas:(NSArray <ZoneSendBottomModel *>*)datas buttonClick:(void(^)(ZoneSendType type))buttonClick;

/// 选择某一中发送类型
- (void)selectedSendType:(ZoneSendType)type;


@end
