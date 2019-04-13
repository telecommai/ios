//
//  JoinGroupRequestUserCell.h
//  ESPChatComps
//
//  Created by 于仁汇 on 17/1/12.
//  Copyright © 2017年 Pansoft. All rights reserved.
//  群聊通知页面cell

#import <UIKit/UIKit.h>

@interface JoinGroupRequestUserCell : UITableViewCell

/// 申请人信息
@property (nonatomic, strong) NSDictionary *joinUserInfoDic;
@property (nonatomic, copy)   NSString     *headerShape;

@end
