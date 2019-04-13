//
//  JFAssetsNavView.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/1/24.
//  Copyright © 2019 pansoft. All rights reserved.
//  资产首页导航view

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFAssetsNavView : UIView

@property (nonatomic,copy) StringBlock clickAction;

- (void)showAlphaAnimationWithContentOfsetY:(CGFloat)offY;

@end

NS_ASSUME_NONNULL_END
