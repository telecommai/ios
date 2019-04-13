//
//  JFSortLabel.h
//  StockMarket
//
//  Created by 董艳武 on 2018/11/16.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 排序
typedef NS_OPTIONS(NSUInteger, JFSortLabelOption) {
    /// 默认顺序（按照时间）
    JFSortLabelOptionOrigin = 0,
    /// 升序
    JFSortLabelOptionASC    = 1,
    /// 降序
    JFSortLabelOptionDESC   = 2,
};

typedef void(^SortOptionCallBack)(JFSortLabelOption);

@interface JFSortLabel : UILabel

-(instancetype)initWithText:(NSString *)text
                  textColor:(UIColor *)textColor
                       font:(UIFont  *)font
         sortOptionCallback:(SortOptionCallBack)sortOptionCallback;

@property(nonatomic,assign) JFSortLabelOption option;

@property(nonatomic,copy) SortOptionCallBack  sortOptionCallBack;

@end

NS_ASSUME_NONNULL_END
