//
//  ExcelView.h
//  WalletManager
//
//  Created by 王胜利 on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  表格组件View（不支持滑动）
//

#import <UIKit/UIKit.h>
#import "ExcelTextCell.h"

@class ExcelView;

NS_ASSUME_NONNULL_BEGIN

@protocol ExcelViewDelegate <NSObject>


/**
 返回Cell

 @param excelView 表格View
 @param row 第几行
 @param column 第几列
 @param itemData 该行数据
 @return cell实例对象
 */
- (ExcelTextCell *)excelView:(ExcelView *)excelView itemForRow:(NSUInteger)row column:(NSUInteger)column itemitemData:(id)itemData;

/**
 item点击事件

 @param excelView 表格View
 @param row 第几行
 @param column 第几列
 @param itemData 该行数据
 */
@optional
- (void)excelView:(ExcelView *)excelView didSelectItemForRow:(NSUInteger)row column:(NSUInteger)column itemitemData:(id)itemData;

@end

@interface ExcelView : UIView

@property (nonatomic, weak) id<ExcelViewDelegate> delegate;

@property (nonatomic, strong) UIColor *borderColor;
@property (nonatomic, assign) CGFloat borderWidth;

/// 初始化数据
- (void)viewWithDatas:(NSArray<NSArray *> *)datas columnNum:(NSUInteger)columnNum viewWidth:(CGFloat)viewWidth itemHeight:(CGFloat)itemHeight;

/// 此方法和下面方法配套使用
/// 1.注册cell(点语法注册Cell)
@property (nonatomic, readonly) ExcelView *(^registerReusableCell)(Class aClass);
/// 2.从缓存池获取cell
- (__kindof ExcelTextCell *)dequeueReusableCellWithCellClass:(Class)Class forRow:(NSUInteger)row column:(NSUInteger)column;


@end

NS_ASSUME_NONNULL_END
