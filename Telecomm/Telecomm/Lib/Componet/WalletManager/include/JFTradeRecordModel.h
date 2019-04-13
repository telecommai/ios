//
//  JFTradeRecordModel.h
//  WalletManager
//
//  Created by 董艳武 on 2018/8/15.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFPageModel.h"



@interface JFTradeRecordModel : NSObject

@property (nonatomic , copy)   NSString               * from;
@property (nonatomic , assign) NSInteger              time;
@property (nonatomic , assign) NSInteger              recordId;
@property (nonatomic , assign) NSInteger              trusteeshipCoidId;
@property (nonatomic , assign) CGFloat                coin;
@property (nonatomic , copy)   NSString               * packetId;
@property (nonatomic , assign) NSInteger              best;
@property (nonatomic , copy)   NSString               * timestamp;
@property (nonatomic , copy)   NSString               * to;
@property (nonatomic , assign) NSInteger              type;

@end



@interface JFTradeRecordResultModel : NSObject

@property (nonatomic , copy)   NSString                                 * result;
@property (nonatomic , strong) JFPageModel                              * page;
@property (nonatomic , copy)   NSArray<JFTradeRecordModel *>            * trusteeshipTransactionLists;

@end
