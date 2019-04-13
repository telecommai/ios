//
//  MobileWeatherView.h
//  IOSMobileManager
//
//  Created by Javor on 15/9/18.
//  Copyright (c) 2015年 JavorFeng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreLocation/CoreLocation.h>
@class MobileWeatherView;

@protocol MobileWeatherViewDelegate <NSObject>

- (void)weatherView:(MobileWeatherView *)view didClickButton:(id)sender;

@end

@interface MobileWeatherView : UIView <CLLocationManagerDelegate>

@property(nonatomic, weak) id<MobileWeatherViewDelegate> delegate;

- (void)addAnimate;

@end
