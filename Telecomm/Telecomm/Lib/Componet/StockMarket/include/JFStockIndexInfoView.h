//
//  JFStockDataInfoView.h
//  WalletManager
//
//  Created by YRH on 2018/11/6.
//  Copyright © 2018 pansoft. All rights reserved.
//

// 图表展示指标值的view
#import <UIKit/UIKit.h>

@interface JFStockIndexInfoView : UIView

@property (nonatomic, strong) NSMutableArray <NSString *>*currentKeyArray;
@property (nonatomic, strong) NSMutableArray <NSString *>*currentValueArray;

/// 显示颜色数组
@property (nonatomic, strong) NSArray <UIColor *>*dataInfoColorArray;

/// 创建视图
- (void)createInfoView;
- (void)createInfoViewWithLabelTitles:(NSMutableArray *)labelTitles;

/// 赋值数据
- (void)updateValueInfo:(NSMutableArray <NSString *>*)dataInfoArray;
- (void)updateKey:(NSMutableArray <NSString *>*)dataInfoArray;

@end

