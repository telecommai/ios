//
//  WalletManager
//
//  Created by YRH on 2018/11/5.
//  Copyright © 2018 pansoft. All rights reserved.

#import <Foundation/Foundation.h>
//#import "CMFLBaseParseModel.h"
#import <UIKit/UIKit.h>

@class KLineInfoCandleItem;

@interface KLineInfoParseModel : NSObject

@property (nonatomic, copy) NSString *msg;

@property (nonatomic, strong) NSMutableArray *datas;

@property (nonatomic, copy) NSString *code;

/// 赋值
- (void)dataValues:(NSMutableArray *)datas currency:(NSString *)currency site:(NSString *)site coinType:(NSString *)coinType;
/// 转成相应汇率的数值
- (void)dataCurrencyConversionWithCurrency:(NSString *)currency site:(NSString *)site coinType:(NSString *)coinType;

@end

@interface KLineInfoCandleItem : NSObject

@property (nonatomic, strong) NSString *timeStamp;
@property (nonatomic, strong) NSString *open;
@property (nonatomic, strong) NSString *high;
@property (nonatomic, strong) NSString *low;
@property (nonatomic, strong) NSString *close;
@property (nonatomic, strong) NSString *volume;

@end
