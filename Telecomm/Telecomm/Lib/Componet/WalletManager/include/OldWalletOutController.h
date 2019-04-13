//
//  TCOutMiController.h
//  TalkChain
//
//  Created by 王胜利 on 2018/3/31.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import "EFUIViewController.h"


typedef NS_ENUM(NSUInteger,TransferFromType) {
    /// 默认转账
    TransferTypeFromDefault = 0,
    /// 聊天页面转账
    TransferTypeFromChat    = 1,
    /// 二维码转账
    TransferTypeFromQRCode  = 2,
};


@interface OldWalletOutController : EFUIViewController

/// 进入类型
@property (nonatomic, assign) TransferFromType type;
/// TransferTypeFromQRCode类型使用
@property (nonatomic, strong) NSDictionary *toAddressInfo;

@end
