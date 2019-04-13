//
//  BTCDepthXAxisFormatter.h
//  WalletManager
//
//  Created by YRH on 2018/11/5.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Charts/Charts-Swift.h>
//#import "DepthInfoParseModel.h"
#import "JFStockAnalysisDepthModel.h"

@interface DepthXAxisFormatter : NSObject<IChartAxisValueFormatter>

@property(nonatomic, strong) JFStockAnalysisDepthModel *depthDataItem;

@end
