//
//  SystemShareToFriendController.h
//  ChatComps
//
//  Created by 王胜利 on 2018/5/29.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

typedef NS_ENUM(NSUInteger, ControllerOperationType) {
    ShareOperationType,
    ForwardMessageType,
    ShopGoodsShareType,//商品分享
};

@interface SystemShareToFriendController : UIViewController

@property (nonatomic, strong) NSDictionary *shareDataDictionary;

//商品分享数据
@property (nonatomic, strong) NSDictionary *shopShareDictionary;

@property (nonatomic, assign) ControllerOperationType controllerOperationType;
@property (nonatomic, strong) IMStructMessage *forwardMessage;

@end
