//
//  DetailChildBaseController.h
//  StockMarket
//
//  Created by 王胜利 on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DetailChildBaseController : UIViewController

@property (nonatomic,readonly) CGFloat viewContentHeight;
@property (nonatomic,copy) void(^viewContentHeightChanged)(CGFloat newHeight);

@end

NS_ASSUME_NONNULL_END
