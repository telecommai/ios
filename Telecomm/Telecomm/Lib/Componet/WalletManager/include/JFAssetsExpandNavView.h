//
//  JFAssetsExpandNavView.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/1/26.
//  Copyright © 2019 pansoft. All rights reserved.
//  资产首页拓展导航view

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFAssetsExpandNavView : UIView

@property (nonatomic,copy) StringBlock clickAction;

@property (nonatomic,copy) IdBlock clickMenuAction;

- (void)showAlphaAnimationWithContentOfsetY:(CGFloat)offY;

@end

NS_ASSUME_NONNULL_END
