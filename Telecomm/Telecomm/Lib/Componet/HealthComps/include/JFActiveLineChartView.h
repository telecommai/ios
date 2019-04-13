//
//  JFActiveLineChartView.h
//  JFHealthComps
//
//  Created by YRH on 2019/1/28.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

/// 活动统计折线图
#import <UIKit/UIKit.h>

@interface JFActiveLineChartView : UIView

/// 设置折线数据,x轴数据
- (void)lineChartData:(NSArray *)lineChartEntryArray xAxisDataArray:(NSArray <NSString *>*)array;

@end
