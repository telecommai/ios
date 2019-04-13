//
//  JFMasterAccountModel.h
//  WalletManager
//
//  Created by 董艳武 on 2018/8/20.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JFManagerAccountModel : NSObject

/// 用户编号
@property (nonatomic , copy) NSString              * userId;
/// 1、代表系统级别币 2、代币
@property (nonatomic , copy) NSString              * chain;
/// 货币单位长度（如以太币18）
@property (nonatomic , assign) NSInteger           coinDecimals;
/// 可用资金
@property (nonatomic , assign) CGFloat             availableCoin;
/// 币全名
@property (nonatomic , copy) NSString              * coinFullName;
/// 所属链 1、比特币 2、以太坊 3、EOS 4、涡链 5、EOS 测试网
@property (nonatomic , copy) NSString              * blockchainId;
/// 币地址
@property (nonatomic , copy) NSString              * coinAddress;
/// 币图标地址
@property (nonatomic , copy) NSString              * coinIcon;
/// 币名
@property (nonatomic , copy) NSString              * coinName;
/// 冻结资金
@property (nonatomic , assign) CGFloat             freezingCoin;
/// 系统级别
@property (nonatomic , copy) NSString              * sysAddress;
/// 托管币编号
@property (nonatomic , assign) NSInteger           trusteeshipId;

@property (nonatomic,assign) CGFloat             userCoinMarketNum;
@property (nonatomic , assign) CGFloat              coinMarketPrice;
@property (nonatomic , copy) NSString              * marketUrl;


/// 初始化
-(instancetype)initWithDict:(NSDictionary *)dict;

/// 字典转模型数组方法
+(NSArray<JFManagerAccountModel *> *)getAccountModelArrWithArray:(NSArray<NSDictionary *> *) array;


@end

@interface JFMasterAccountModel : NSObject

@property (nonatomic, copy) NSString                             * num;
@property (nonatomic, copy) NSString                             * result;
@property (nonatomic, copy) NSArray<JFManagerAccountModel *>     * userFollowTrusteeshipCoin;

@end


@interface JFCoinListModel : NSObject

@property (nonatomic , assign) NSInteger              trusteeshipId;
@property (nonatomic , copy)   NSString               *chain;
@property (nonatomic , assign) NSNumber               *coinDecimals;
@property (nonatomic , copy)   NSString               *coinIcon;
@property (nonatomic , copy)   NSString               *coinFullName;
@property (nonatomic , copy)   NSString               *blockchainId;
@property (nonatomic , copy)   NSString               *coinAddress;
@property (nonatomic , copy)   NSString               *coinName;
@property (nonatomic , strong) NSNumber               *ifOwner;
@property (nonatomic , copy)   NSString               *marketUrl;
@property (nonatomic , copy)   NSString               *sysAddress;

@end

@interface JFCoinListResultModel:NSObject

@property (nonatomic , copy) NSString                                *result;
@property (nonatomic , copy) NSArray<JFCoinListModel *>              *allTrusteeshipCoin;

@end
