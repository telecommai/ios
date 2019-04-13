//
//  DropProgressView.h
//  WalletManager
//
//  Created by StarLord on 2018/7/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//

/*
 进度
 */

#import <UIKit/UIKit.h>

@interface DropProgressView : UIView

/// 背景色
@property (nonatomic, strong) UIColor *progressTintColor;
/// 追踪颜色
@property (nonatomic, strong) UIColor *progressTrackColor;
/// 进度 (0 - 1)
@property (nonatomic, assign) CGFloat progress;

@end
