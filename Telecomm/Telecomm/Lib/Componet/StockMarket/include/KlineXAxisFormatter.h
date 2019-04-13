//
//  BTCKlineXAxisFormatter.h
//  WalletManager
//
//  Created by YRH on 2018/11/5.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Charts/Charts-Swift.h>

@interface KlineXAxisFormatter : NSObject<IChartAxisValueFormatter>

@property (nonatomic, assign) BOOL showHour;
@property (nonatomic, strong) NSMutableArray *kLineList;

@end
