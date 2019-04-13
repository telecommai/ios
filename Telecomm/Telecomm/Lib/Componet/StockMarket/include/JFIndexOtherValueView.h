//
//  JFOtherIndexValueView.h
//  WalletManager
//
//  Created by YRH on 2018/11/9.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFIndexOtherValueView : UIView

/// 赋值
- (void)reloadDataWithFirstKey:(NSString *)firstKey firstValue:(NSString *)firstValue secondKey:(NSString *)secondKey secondValue:(NSString *)secondValue thirdKey:(NSString *)thirdKey thirdValue:(NSString *)thirdValue thirdValuePercentageDisplay:(BOOL)thirdValuePercentageDisplay;

@end

NS_ASSUME_NONNULL_END
