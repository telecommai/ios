//
//  BlockChainManager.h
//  WalletManager
//
//  Created by 王胜利 on 2018/8/10.
//  Copyright © 2018年 pansoft. All rights reserved.
//  链模型管理类
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 链

 - BlockChainTypeETH:          以太坊
 - BlockChainTypeBTC:          比特币
 - BlockChainTypeEOS:          EOS
 - BlockChainTypePWR :         涡链
 - BlockChainTypeEOSTEST:      EOS测试
 - BlockChainTypeBCH:          BCH
 - BlockChainTypeBTM:          BTM
 - BlockChainTypeLTC:          LTC
 - BlockChainTypeXRP:          XRP
 - BlockChainTypeGXM:          GXM
 - BlockChainTypeQTUM:         GTUM
 - BlockChainTypeACT:          ACT
 - BlockChainTypeUnknown:      未知
 */
typedef NS_ENUM(NSUInteger, BlockChainType) {
    BlockChainTypeETH                = 0,
    BlockChainTypeBTC                = 1,
    BlockChainTypeEOS                = 2,
    BlockChainTypePWR                = 3,
    BlockChainTypeEOSTEST            = 4,
    BlockChainTypeETC                = 5,
    BlockChainTypeBCH                = 6,
    BlockChainTypeBTM                = 7,
    BlockChainTypeLTC                = 8,
    BlockChainTypeXRP                = 9,
    BlockChainTypeGXM                = 10,
    BlockChainTypeQTUM               = 11,
    BlockChainTypeACT                = 12,
    BlockChainTypeUnknown            = 1000,
};


#pragma mark - 链 模型

@interface BlockChainModel : NSObject

/// 链类型
@property (nonatomic, assign) BlockChainType chainType;
/// 链Id
@property (nonatomic, copy)   NSString *chainId;
/// 链名称
@property (nonatomic, copy)   NSString *chainName;
/// 链全称
@property (nonatomic, copy)   NSString *chainFullName;
/// 链图标(小)
@property (nonatomic, strong) UIImage *chainSmallIcon;
/// 链图标(大)
@property (nonatomic, strong) UIImage *chainIcon;

@end



@interface BlockChainManager : NSObject

/// 根据 '链类型' 获取'链模型'
+ (BlockChainModel *)blockChainByChainType:(BlockChainType)type;
/// 根据 '链名称(简称)' 获取'链模型'
+ (BlockChainModel *)blockChainByChainName:(NSString *)name;
/// 根据 chainId 获取 BlockChainType
+ (BlockChainModel *)blockChainByChainId:(NSInteger)chainId;

@end
