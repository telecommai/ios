//
//  EShoppingOrderStatus.h
//  EShopComps
//
//  Created by YRH on 2018/2/28.
//  Copyright © 2018年 谢虎. All rights reserved.
//  订单状态

#import <Foundation/Foundation.h>

//WAIT_PAY(0, "待付款"),
//PAYED(1, "待发货"),
//REFUNDING(2, "退款中"),
//REFUND_SUCCESS(3, "退款成功"),
//WAIT_SIGN(4, "待确认收货"),
//WAIT_EVALUATE(5, "待评价"),
//COMPLETED(6, "已完成"),
//CANNELED(7, "已取消 用户手动取消"),
//CLOSED(8, "已关闭(订单关闭 未付款）)"),
//DELETEED(9, "已删除"),
//
//SNATCH_PAY_FAIL(-1, "支付失败"),
//SNATCH_PAY_SUCCESSL(-2, "夺宝支付成功"),
//SNATCH_WIN(-3, "夺宝已中奖");
//SNATCH_PAYING(-4, "正在支付中");


typedef NS_ENUM(NSUInteger, EShopOrderStatus) {
    /// 所有订单
    EShopOrderAll = 100,
    /// 待付款
    EShopOrderWaitPay = 0,
    /// 待发货
    EShopOrderWaitSend = 1,
    /// 退货退款
    EShopOrderReturn = 2,
    /// 退款成功
    EShopOrderReturnSuccess = 3,
    /// 待确认收货
    EShopOrderWaitReceive = 4,
    /// 待评价
    EShopOrderWaitEvaluate = 5,
    /// 已完成
    EShopOrderCompleted = 6,
    /// 已取消(用户手动取消)
    EShopOrderCancel = 7,
    /// 已关闭(订单关闭，未付款)
    EShopOrderClose = 8,
    /// 已删除
    EShopOrderDeleteed = 9,
    /// 链上支付失败
    EShopOrderPayFail = -1,
    /// 链上付款成功
    EShopOrderWinTreasurePaySuccess = -2,
    /// 夺宝已中奖
    EShopOrderWinTreasureWin = -3,
    /// 链上正在支付中
    EShopOrderWinTreasurePaying = -4,
};

NSString *EShopOrderStatusString(EShopOrderStatus status);
NSString *EShopOrderStatusDescrptionString(EShopOrderStatus status, NSInteger orderType);

