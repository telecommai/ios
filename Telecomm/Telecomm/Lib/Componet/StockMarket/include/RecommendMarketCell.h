//
//  RecommendMarketCell.h
//  StockMarket
//
//  Created by 赵洪壮 on 2018/11/13.
//  Copyright © 2018 SpiderMan. All rights reserved.
//  简况-市场推荐Cell
//

#import <UIKit/UIKit.h>

@class CoinSimpleIntroRecommendModel;

NS_ASSUME_NONNULL_BEGIN

@interface RecommendMarketCell : UITableViewCell

@property (nonatomic, strong) CoinSimpleIntroRecommendModel *recommendCoin;

@end

NS_ASSUME_NONNULL_END
