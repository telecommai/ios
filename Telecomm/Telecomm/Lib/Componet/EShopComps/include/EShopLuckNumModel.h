//
//  EShopLuckNumModel.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/11/2.
//  Copyright © 2018 谢虎. All rights reserved.
//  夺宝 本期幸运号码Model

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EShopGoodsWinnerModel;

@interface EShopLuckNumModel : NSObject

@property (nonatomic,strong) EShopGoodsWinnerModel *goodsWinner;

@end


@interface EShopGoodsWinnerModel : NSObject

///商品ID
@property (nonatomic,copy) NSString *goodsId;
@property (nonatomic,copy) NSString *ID;
///幸运区块号
@property (nonatomic,copy) NSString *luckyBlock;
///幸运区块hash后8位
@property (nonatomic,copy) NSString *luckyHash;
///幸运区块hash后8位转10进制
@property (nonatomic,copy) NSString *luckyHashDecimal;
///商城商品编号
@property (nonatomic,copy) NSString *mallGoodsId;
///订单编号
@property (nonatomic,copy) NSString *orderNumber;
///售罄时区块号
@property (nonatomic,copy) NSString *sellOutBlock;
///售罄时间
@property (nonatomic,copy) NSString *sellOutBlockTime;
///参与总人数
@property (nonatomic,copy) NSString *total;
///获奖者地址
@property (nonatomic,copy) NSString *winnerAddress;
///幸运号码
@property (nonatomic,copy) NSString *winnerId;

@end

NS_ASSUME_NONNULL_END
