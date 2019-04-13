//
//  JFHealthBriefItemView.h
//  JFHealthComps
//
//  Created by YRH on 2019/1/28.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

// 健康基本信息距离、热量、心率Item
#import <UIKit/UIKit.h>

@interface JFHealthBriefItemView : UIView

/// 赋值
- (void)setDataWithNumber:(CGFloat)number title:(NSString *)title unit:(NSString *)unit;

/// 显示或者隐藏边线
- (void)leftRightLineHidden:(BOOL)hidden;
- (void)leftLineHidden:(BOOL)hidden;
- (void)rightLineHidden:(BOOL)hidden;

@end

@interface JFHealthBriefItemModel : NSObject

/// 数值
@property (nonatomic, assign) CGFloat number;
/// 标题
@property (nonatomic, copy) NSString *title;
/// 单位
@property (nonatomic, copy) NSString *unit;

@end
