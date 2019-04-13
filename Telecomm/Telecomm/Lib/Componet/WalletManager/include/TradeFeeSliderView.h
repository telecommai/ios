//
//  TradeFeeSliderView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/11.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

@interface TradeFeeSliderView : UIView

- (void)viewWithWithMin:(CGFloat)min max:(CGFloat)max current:(CGFloat)current;

@property (nonatomic, copy) FloatBlock valueChangedBlock;

@end
