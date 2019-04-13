//
//  JFStockRiseFallHeader.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 涨跌幅 header

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockRiseFallHeader : UIView

@property (nonatomic, copy) VoidBlock clickBlock;
@property (nonatomic, copy) VoidBlock clickMoreBlock;
@property (nonatomic, copy) NSString *titleStr;
//是否显示收起图标
@property (nonatomic, assign) BOOL isPackUp;

@end

NS_ASSUME_NONNULL_END
