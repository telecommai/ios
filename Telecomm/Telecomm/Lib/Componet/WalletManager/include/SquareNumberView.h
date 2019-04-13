//
//  SquareNumberView.h
//  WalletManager
//
//  Created by StarLord on 2018/7/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThemeKit.h"

@interface SquareNumberView : UIView

@property (nonatomic, copy) NSString *numberString;

@property (nonatomic, strong) UIColor *numberTextColor;

@property (nonatomic, strong) ThemeColorPicker theme_textColor;

@end
