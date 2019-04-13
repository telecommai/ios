//
//  JFMyPackedRecordModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFPageModel.h"

@interface JFMyPacketRecordModel : NSObject

/// 用户id
@property(nonatomic, copy) NSString               *userId;
/// 币名
@property(nonatomic, copy) NSString               *coinName;
///
@property(nonatomic, copy) NSString               *getPacketUser;
/// 红包id
@property(nonatomic, copy) NSString               *packetId;
/// 时间戳
@property(nonatomic, copy) NSString               *timestamp;
/// 用户名
@property(nonatomic, copy) NSString               *userName;
/// 总金额
@property(nonatomic, assign) CGFloat                totalMoney;
/// 红包类型
@property(nonatomic, assign) NSInteger              type;
/// 开始时间
@property(nonatomic, assign) NSInteger              startTime;

@end

@interface JFMyPacketRecordResultModel:NSObject

@property (nonatomic , copy)   NSString                                         *result;
@property (nonatomic , copy)   NSArray<JFMyPacketRecordModel *>                 *getRedPacketRecordList;
@property (nonatomic , strong) JFPageModel                                      *page;

@end
