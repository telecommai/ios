//
//  MyLoginDeviceController.h
//  ChatComps
//
//  Created by 高建飞 on 2018/7/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

@protocol MyDeviceDelegate <NSObject>

-(void)MyLoginDeviceControllerDidClose;

@end

@interface MyLoginDeviceController : UIViewController

@property(nonatomic,weak) id<MyDeviceDelegate>delegate;

+(void)mydeviceAmountWithArraylock:(ArrayBlock)myDevice;

@end
