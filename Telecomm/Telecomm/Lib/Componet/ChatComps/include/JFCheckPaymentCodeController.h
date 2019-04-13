//
//  JFCheckPaymentCodeController.h
//  ESPChatComps
//
//  Created by farby on 2018/7/6.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFUIViewController.h"

typedef NS_ENUM(NSUInteger, PaymentCodeType) {
    PaymentCodeTypeWeChat,
    PaymentCodeTypeAliPay,
};
@interface JFCheckPaymentCodeController : EFUIViewController

@property (nonatomic,assign) PaymentCodeType type;

@end
