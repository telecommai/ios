//
//  EFPayChooseView.h
//  ESPpayComps
//
//  Created by YRH on 2017/12/1.
//  Copyright © 2017年 YRH. All rights reserved.
//

// 选择支付方式的界面

#import <UIKit/UIKit.h>

@class EFPayChooseView;
@protocol EFPayChooseViewDelegate <NSObject>

// 点击了支付方式
- (void)selectPayTypeAtIndex:(NSInteger)index data:(NSMutableDictionary *)dataDic payChooseView:(EFPayChooseView *)payChooseView;

@end

@interface EFPayChooseView : UIView

@property (nonatomic, weak) id<EFPayChooseViewDelegate> delegate;


/**
 自定义初始化方法

 @param frame frame
 @param dataSource 数据源 格式：[@{@"title" : @"文字", @"iconImage" : @"图片"}]
 @param height 每行高
 @return id
 */
- (instancetype)initWithFrame:(CGRect)frame dataSource:(NSArray *)dataSource cellHeight:(CGFloat)height;

@end
