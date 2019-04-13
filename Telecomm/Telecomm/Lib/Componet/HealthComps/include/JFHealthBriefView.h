//
//  JFHealthBriefView.h
//  JFHealthComps
//
//  Created by YRH on 2019/1/28.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

// 健康基本信息距离、热量、心率
#import <UIKit/UIKit.h>
#import "JFHealthBriefItemView.h"

@interface JFHealthBriefView : UIView

/// 赋值
- (void)setDataWithArray:(NSMutableArray <JFHealthBriefItemModel *>*)modelArray;

@end
