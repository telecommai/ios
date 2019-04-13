//
//  WalletManager
//
//  Created by YRH on 2018/11/5.
//  Copyright © 2018 pansoft. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "CMFLBaseParseModel.h"

@class DepthDataItem, DepthItem, TickerItem, PriceItem, DepthItem;

@interface DepthInfoParseModel : NSObject

@property (nonatomic, copy) NSString *code;

@property (nonatomic, strong) DepthDataItem *data;

@property (nonatomic,   copy) NSString *msg;

- (void)setDepthItemData:(NSDictionary *)dict;

@end

@interface DepthDataItem : NSObject

@property (nonatomic, strong) NSArray<DepthItem *> *asks;

@property (nonatomic, strong) NSArray<DepthItem *> *bids;

//@property (nonatomic, strong) TickerItem *ticker;
@end


@interface DepthItem : NSObject
@property (nonatomic, strong)NSString *price;
@property (nonatomic, strong)NSString *volume;
@end


@interface TickerItem : NSObject

@property (nonatomic, copy) NSString *update_time;

@property (nonatomic, strong) PriceItem *high;

@property (nonatomic, assign) CGFloat vol;

@property (nonatomic, strong) PriceItem *buy;

@property (nonatomic, strong) PriceItem *last;

@property (nonatomic, strong) PriceItem *sell;

@property (nonatomic, strong) PriceItem *low;

@end

