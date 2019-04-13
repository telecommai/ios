//
//  ETHManager+EShop.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/7.
//  Copyright © 2019 pansoft. All rights reserved.
//  商城签名Data
//

#import "ETHManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface ETHManager (EShop)


/**
 PWR夺宝合约Data

 @param goodBh 商品编号
 @param quantity1 方式1购买数量
 @param quantity2 方式2购买数量
 @return  PWR夺宝合约Data
 */
+ (NSData *)winTreasureDataWithGoodBh:(NSString *)goodBh
                            quantity1:(NSNumber *)quantity1
                            quantity2:(NSNumber *)quantity2;

/**
 PWR虚拟商品交易签名Data


 @param toAddress 合约接受地址
 @param money 金额
 @param orderBh 订单编号
 @param goodBh 商品编号
 @param goodNum 商品数量
 @param useId 用户ID
 @return  虚拟商品交易签名Data
 */
+ (NSData *)virtualSGoodsDataWithToAddress:(NSString *)toAddress
                                     money:(NSString *)money
                                   orderBh:(NSString *)orderBh
                                    goodBh:(NSString *)goodBh
                                   goodNum:(NSString *)goodNum
                                     useId:(NSString *)useId;

@end

NS_ASSUME_NONNULL_END
