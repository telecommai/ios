//
//  JFAddFriendController.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/2.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//  添加好友界面

#import <UIKit/UIKit.h>
#import "PersonModel.h"
@interface JFAddFriendController : UIViewController

@property(nonatomic,strong) PersonModel  *model;

-(instancetype)initWithPersonModel:(PersonModel *)model;

@end
