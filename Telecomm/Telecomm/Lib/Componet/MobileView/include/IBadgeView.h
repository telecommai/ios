//
//  IBadgeView.h
//  ESPMobileView
//
//  Created by Javor on 2017/5/18.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol IBadgeView <NSObject>

///未读数量加一
- (void)badgePlusOne;
///未读数量减一
- (void)badgeMinusOne;
///未读数量改变
- (void)badgeChange:(NSInteger)count;


@end
