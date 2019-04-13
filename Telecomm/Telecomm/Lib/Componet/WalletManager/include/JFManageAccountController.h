//
//  JFManageAccountController.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/10.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFMasterAccountModel.h"
#import "PostRedPacketController.h"

@interface JFManageAccountController : UIViewController

/// 是否是来自红包
@property (nonatomic,assign,getter=isFromPostRedPacket) Boolean fromPostRedPacket;

/// 发红包的控制器
@property (nonatomic,weak) PostRedPacketController *postRedPacketController;

@end
