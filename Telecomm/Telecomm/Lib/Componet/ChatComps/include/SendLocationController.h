//
//  SendLocationController.h
//  ESPChatComps
//
//  Created by 苏友龙 on 2017/6/2.
//  Copyright © 2017年 Pansoft. All rights reserved.
//  发送位置界面\部落获取位置
//

#import <UIKit/UIKit.h>

@protocol PunchCardAddressDelegate <NSObject>
- (void)backAddressInfo:(NSDictionary *)dic;
@end

@interface SendLocationController : UIViewController

@property(nonatomic,weak)id<PunchCardAddressDelegate>delegate;

@end
