//
//  JFWalletTradeModel.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/14.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFWalletTradeModel : NSObject

/// 状态 1.收红包 2.发红包 3.红包退回 4.充值 5.提现 6.兑换
@property (nonatomic, assign) NSInteger type;
/// 金额
@property (nonatomic, copy) NSString *coin;
/// 日期
@property (nonatomic, copy) NSString *timestamp;
/// 已确认


@end
