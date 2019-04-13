//
//  JFAssetsHeader.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/1/24.
//  Copyright © 2019 pansoft. All rights reserved.
//  资产首页headerView

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFAssetsHeader : UIView

/// 上部分(扫一扫、付钱、收钱、积分卡)高度
@property (readonly,class) CGFloat alphaViewHeigh;
/// 下部分卡片区域高度
@property (readonly,class) CGFloat cardViewHeigh;

@property (nonatomic,copy) IdBlock clickMenuAction;

- (void)alphaViewWithContentOfsetY:(CGFloat)offY;
- (void)refreshData;

@end

NS_ASSUME_NONNULL_END
