//
//  SetExchangeCountViewController.h
//  ESPChatComps
//
//  Created by 吴鹏 on 2018/4/27.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SetExchangeCountDelegate <NSObject>

- (void)updateQIInfo:(NSString *)money;

@end

@interface SetExchangeCountViewController : UIViewController

@property (nonatomic, weak) id <SetExchangeCountDelegate> delegate;

@end
