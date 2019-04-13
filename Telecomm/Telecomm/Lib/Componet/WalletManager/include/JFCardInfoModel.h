//
//  JFCardInfoModel.h
//  WalletManager
//
//  Created by 董艳武 on 2018/9/28.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 充值类型
typedef NS_ENUM(NSInteger,JFRechargeCardType) {
    /// 能量币
    JFRechargeCardTypePower,
    /// 黑钻
    JFRechargeCardTypeBlack,
    /// 银钻
    JFRechargeCardTypeSilver,
    /// FGT
    JFRechargeCardTypeFGT,
};

@interface JFCardInfoModel : NSObject

/// 是否允许充值（1：允许充值，0:不允许充值）
@property(nonatomic,assign)      NSInteger              allowRecharge;

/// 合约地址
@property(nonatomic,copy)        NSString              * contractAddress;

/// 电话号码
@property(nonatomic,copy)        NSString              * createUserIphone;

/// 
@property(nonatomic,assign)      NSInteger              decimalNumber;

/// 用户地址
@property(nonatomic,copy)        NSString              * createUserAddress;

/// 卡片中文名称
@property(nonatomic,copy)        NSString              * cardCnName;

/// 创建者名称
@property(nonatomic,copy)        NSString              * createUserName;

/// 余额
@property(nonatomic,copy)        NSString              * coinNumber;

/// 创建时间
@property(nonatomic,copy)        NSString              * createTime;

/// 卡片图片
@property(nonatomic,copy)        NSString              * cardImg;

/// 卡片id
@property(nonatomic,assign)      NSInteger              cardId;

/// 卡片英文名称
@property(nonatomic,copy)        NSString              * cardEnName;

///
@property(nonatomic,assign)      NSInteger              isUse;

///
@property(nonatomic,copy)        NSString              *cardNo;

/// 背景图片
@property(nonatomic,copy)        NSString              *bgImg;

/// 图片是否是服务器返回
@property(nonatomic,assign)      BOOL                  picFromNet;

/// cardName
@property(nonatomic,copy)       NSString               *cardName;

/// 余额
@property(nonatomic,assign)     double                 balance;

@property(nonatomic,copy)       NSString               *balanceStr;

-(instancetype)initWithDict:(NSDictionary *)dict;

+(NSArray<JFCardInfoModel *>*)getModelArrayFromArray:(NSArray *)array;

@end

NS_ASSUME_NONNULL_END
