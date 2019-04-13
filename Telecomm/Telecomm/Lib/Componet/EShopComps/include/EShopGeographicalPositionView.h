//
//  EShopGeographicalPositionView.h
//  ShoppingOC
//
//  Created by YRH on 2018/1/10.
//  Copyright © 2018年 wsl. All rights reserved.
//

// 地理位置view

#import <UIKit/UIKit.h>

@protocol EShopGeographicalPositionViewDelegate <NSObject>

/**
 选择的地址

 @param province 省
 @param city 市
 @param area 区
 */
- (void)chooseGeographicalAddressProvince:(NSString *)province city:(NSString *)city area:(NSString *)area;

@end

@interface EShopGeographicalPositionView : UIView

@property (nonatomic, weak) id<EShopGeographicalPositionViewDelegate> delegate;

@end

