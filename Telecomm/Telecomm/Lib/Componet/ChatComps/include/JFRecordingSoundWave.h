//
//  JFRecordingSoundWave.h
//  ChatComps
//
//  Created by YRH on 2018/9/4.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFRecordingSoundWave : UIView

/// 波形图系数转换 -160 - 0
+ (float)resetAveragePowerLevel:(float)averagePower;

/// 绘制波形图
- (void)drowWave:(CGFloat)averagePower;

/// 自定义波形图参数
- (CGFloat)customDrowAveragePower:(CGFloat)averagePower;

@end
