//
//  CountdownView.h
//  WalletManager
//
//  Created by StarLord on 2018/7/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CountdownView : UIView

- (void)countdownSetValueWithDay:(NSString *)day text:(NSString *)text hours:(NSString *)hours seg:(NSString *)seg minutes:(NSString *)minutes;

@end
