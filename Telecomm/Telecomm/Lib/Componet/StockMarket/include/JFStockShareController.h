//
//  JFStockShareController.h
//  StockMarket
//
//  Created by 夏祥可 on 2018/12/5.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockShareController : UIViewController

///点击分享给联系人
@property (nonatomic, copy) NumberBlock shareToFriend;

///分享的图片
@property (nonatomic, strong) UIImage *shareImage;

@end

NS_ASSUME_NONNULL_END
