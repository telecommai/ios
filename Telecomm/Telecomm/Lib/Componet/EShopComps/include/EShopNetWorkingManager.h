//
//  EShopNetWorkingManager.h
//  EShopComps
//
//  Created by  王胜利 on 2018/1/23.
//  Copyright © 2018年 pansoft. All rights reserved.
//  商城网络请求接口管理类
//

#import <Foundation/Foundation.h>
#import "Constant.h"

// 测试地址
//#define kShopUrl @"http://211.159.166.232:8080/OSPMall"
/// 服务器地址 http://211.87.224.140:8181/OSPMall
/// 测试地址   http://211.159.166.232:8080/OSPMall
#define kShopUrl [ReadPlistFile readValueFromPlistName:@"OptionSetting.plist" valueKey:@"ShopServer"]
/// 获取虚拟商品余额
#define VirtualUrl @"https://tc.ipcom.io/tcserver"
/// 夺宝地址
#define kWinTreasureUrl  @"http://treasure.openserver.cn/osp-treasure"

@interface EShopNetWorkingManager : NSObject

// MARK: 商城首页
+ (void)homeGoodsWithSuccess:(void(^)(NSArray <EShopHomeEntity *>* datas))success fail:(FailBlock)fail;

// MARK: 商品详情
+ (void)goodsDetailsWithGoodId:(NSString *)goodId success:(void(^)(EShopGoodsDetailEntity *model))success fail:(FailBlock)fail;


// MARK: 购物车支付
/**
 购物车支付

 @param appbh app标志 糖足为tz，智信为zx
 @param paytype 支付类型 wx；ali
 @param orderid 订单号
 @param success success
 @param fail fail
 */
+ (void)shoppingPayServiceWithAppbh:(NSString *)appbh payType:(NSString *)paytype orderId:(NSString *)orderid success:(SuccessBlock)success fail:(FailBlock)fail;



// MARK: 代币支付
/**
 代币支付

 @param tokenType 币种类型 123
 @param tokenCount 币种数量
 @param orderIds 订单编号的数组 ["1111","2222"]
 @param success 付款成功
 @param fail 付款失败
 */
+ (void)payWithTokenWithTokenType:(NSString *)tokenType
                       tokenCount:(NSString *)tokenCount
                         orderIds:(NSString *)orderIds
                          success:(SuccessBlock)success
                             fail:(FailBlock)fail;




@end

@interface EShopNetWorkingManager (Order)

// MARK: 预生成订单
+ (void)prepareOrderWithGoods:(NSString *)goods success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 生成订单
/**
 生成订单

 @param addressId 收货地址Id
 @param params 订单商品参数
 @param note 备注
 */
+ (void)creatOrderWithAddressId:(NSString *)addressId params:(NSString *)params note:(NSString *)note success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 获取订单列表
/**
 获取订单列表

 @param allNum 已请求列表订单数目
 @param pageSize 一页返回的订单数
 @param status 订单状态[all:全部 0：待付款，1：待发货 2：退款中 4：待确认收货 5：待评价 6：已完成 7：已取消 8：已关闭]
 */
+ (void)orderListWithAllNum:(NSUInteger)allNum pageSize:(NSUInteger)pageSize status:(NSString *)status success:(void(^)(EShopOrderResultEntity *))success fail:(FailBlock)fail;

// MARK: 获取订单详情信息
+ (void)orderInfoWithOrderBh:(NSString *)orderBh success:(void(^)(EShopOrderEntity *))success fail:(FailBlock)fail ;

// MARK: 修改订单状态
/// 修改订单状态（ enterReceived:确认收货(default),cannelOrder:取消订单（只有未付款的情况下可以取消） deleteOrder:只有未付款，或者已取消，已完成的订单可以删除）
+ (void)changeOrderStatusWithOrders:(NSString *)orders success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 订单预付款(获取支付方式) (orderIds 订单编号（多个已分号分割）)
+ (void)preparePayOrderTypeWithOrderIds:(NSString *)orderIds success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 获取积分卡余额(参演券和观影券)
+ (void)getBalanceByAddressWithContractAddress:(NSString *)contractAddress userAddress:(NSString *)userAddress success:(SuccessBlock)success fail:(FailBlock)fail;


@end


@interface EShopNetWorkingManager (Favorite)

// MARK: 获取商品收藏列表
/**
 获取商品收藏列表

 @param pageSize 每次请求的数据量
 @param num 当前界面已加载的数据量
 */
+ (void)goodsFavoritesListWithPageSize:(NSInteger)pageSize num:(NSInteger)num success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 添加或者移除收藏
/**
 添加或者移除收藏

 @param goodBhs 商品编号（多个已分号分割）
 @param operate 执行的操作（add 添加收藏 remove 移除收藏）
 */
+ (void)goodsAddOrRemoveFavoriteWithGoodBhs:(NSString *)goodBhs operate:(NSString *)operate success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 获取商品收藏数量
+ (void)goodsFavoritesWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;

@end

@interface EShopNetWorkingManager (Address)

// MARK: 新增收货地址
/**
 新增收货地址

 @param userName 用户名
 @param phone 手机号
 @param address 详细地址
 @param isSelected 是否默认地址 0 1
 @param postCode 邮政编码
 @param area 地区（省市区）
 */
+ (void)addNewAddressWithUserName:(NSString *)userName
                            phone:(NSString *)phone
                          address:(NSString *)address
                       isSelected:(NSString *)isSelected
                         postCode:(NSString *)postCode
                             area:(NSString *)area
                          success:(SuccessBlock)success
                             fail:(FailBlock)fail;

// MARK: 删除收货地址
+ (void)removeAddressWithAddressId:(NSString *)addressId success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 更改收货地址信息
/**
 更改收货地址信息

 @param addressId 此条收货地址的 id
 @param userName 用户名
 @param phone 手机号
 @param address 详细地址
 @param isSelected 是否默认地址 0 1
 @param postCode 邮政编码
 @param area 地区（省市区
 */
+ (void)updateAddressWithAddressId:(NSString *)addressId userName:(NSString *)userName phone:(NSString *)phone address:(NSString *)address isSelected:(NSString *)isSelected postCode:(NSString *)postCode area:(NSString *)area success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 收货地址列表
+ (void)receivingAddressesListWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 获取某一个收货地址
+ (void)receivingAddressWithAddressId:(NSString *)addressId success:(SuccessBlock)success fail:(FailBlock)fail;

@end


@interface EShopNetWorkingManager (ShopCart)


// MARK: 我的购物车
+ (void)shoppingCartListWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 加入购物车 (商品id,skuId skuId, goodNum 商品数目)
+ (void)addShopCartWithGoodId:(NSString *)goodId skuId:(NSString *)skuId goodNum:(NSString *)goodNum  success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: 购物车移除商品 goods [ { "goodbh":"0001", "goodNum":1, "skuId":"1"} ]
+ (void)addOrRemoveGoodFromShoppingCartWithGoodsJson:(NSString *)goods success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: - 获取购物车商品数量
+ (void)shopCartGoodsNumWithSuccess:(SuccessBlock)success fail:(FailBlock)fail;


@end

@interface EShopNetWorkingManager (Evaluate)

// MARK: - 获取订单未评价商品列表
+ (void)noEvaluationGoodListWithOrderBh:(NSString *)orderBh success:(SuccessBlock)success fail:(FailBlock)fail;

// MARK: - 评价商品
/**
 获取订单未评价商品列表

 @param orderBh 订单编号
 @param goodbh 商品编号
 @param content 用户content
 @param grade 评分（五分制）
 @param images 评价商品图[{"url":"xxx"},{"url":"xxx"}]

 */
+ (void)addEvaluateByOrderBh:(NSString *)orderBh
                      goodbh:(NSString *)goodbh
                     content:(NSString *)content
                       grade:(NSString *)grade
                      images:(NSString *)images
                     success:(SuccessBlock)success
                        fail:(FailBlock)fail;

// MARK: - 获取商品评价
/**
 获取商品评价

 @param goodId 商品编号
 @param allNum 当前列表总数
 @param pageSize 每一页的加载数量
 */
+ (void)goodsEvaluateWithGoodId:(NSString *)goodId
                         allNum:(NSUInteger)allNum
                       pageSize:(NSUInteger)pageSize
                        success:(void(^)(EShopEvaluateResultEntity *))success
                           fail:(FailBlock)fail;



@end


/// 夺宝
@interface EShopNetWorkingManager (WinTreasure)

// MARK: 夺宝支付
/**
 夺宝支付

 @param sign 交易签名
 @param goodId 商品编号
 @param quantity1 方式1的购买数量
 @param quantity2 方式2的购买数量
 @param orderNumber 订单编号
 */
+ (void)payForWinTreasureWithSign:(NSString *)sign
                        goodId:(NSString *)goodId
                     quantity1:(NSString *)quantity1
                     quantity2:(NSString *)quantity2
                   orderNumber:(NSString *)orderNumber
                       success:(SuccessBlock)success
                          fail:(FailBlock)fail;



// MARK: 根据商城商品ID获取夺宝商品详情（根据商城商品ID获取链上商品信息）
+ (void)winTreasureGoodsInfoWithShopGoodsId:(NSString *)shopGoodsId success:(SuccessBlock)success fail:(FailBlock)fail;

/// MARK: 根据用户地址获取付款所需信息
+ (void)winTreasurePayInfoWithAccountAddress:(NSString *)accountAddress goodsId:(NSString *)goodsId quantity1:(NSString *)quantity1 quantity2:(NSString *)quantity2 success:(SuccessBlock)success fail:(FailBlock)fail;

@end
/// 合约交易
@interface EShopNetWorkingManager (VirtualSGoods)

/**
 虚拟商品发布交易

 @param orderBh 订单编号
 @param signature 签名
 */
+ (void)payForVirtualSGoodsWithOrderBh:(NSString *)orderBh
                            signature:(NSString *)signature
                              success:(SuccessBlock)success
                                 fail:(FailBlock)fail;

@end



@interface EShopNetWorkingManager (Base)

// MARK: 基础GET请求
+ (void)GET:(NSString *)localUrl params:(NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;
// MARK: 基础POST请求
+ (void)POST:(NSString *)localUrl params:(NSDictionary *)params success:(SuccessBlock)success fail:(FailBlock)fail;

@end



