//
//  CoinIntroCellView.h
//  StockMarket
//
//  Created by 赵洪壮 on 2018/11/13.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CoinIntroCellView : UIView

/// 标题
@property (nonatomic, copy) NSString *titleString;
/// 详细描述
@property (nonatomic, copy) NSString *detailString;

@end

NS_ASSUME_NONNULL_END
