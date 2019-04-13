//
//  JFStockMarketScrollView.h
//  WalletManager
//
//  Created by YRH on 2018/11/5.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 行情界面的scrollview
#import <UIKit/UIKit.h>

@protocol JFStockMarketScrollViewDelegate <NSObject>

@optional
/// 手势开始
- (BOOL)stockMarketGestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;

@end

@interface JFStockMarketScrollView : UIScrollView

@property (nonatomic, weak) id<JFStockMarketScrollViewDelegate> stockMarketDelegate;

@end

