//
//  JFRedPacketPosterController.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/11/14.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  红包海报

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFRedPacketPosterController : UIViewController

//分享URL
@property (nonatomic,copy) NSString *shareURL;
//红包总金额
@property (nonatomic,copy) NSString *allFare;
//红包币种
@property (nonatomic,copy) NSString *coinName;

@end

NS_ASSUME_NONNULL_END
