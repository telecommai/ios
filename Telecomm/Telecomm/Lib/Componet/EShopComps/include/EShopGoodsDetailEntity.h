//
//  EShopGoodsDetailEntity.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/25.
//  Copyright © 2018年 谢虎. All rights reserved.
//  详情页实体

#import <Foundation/Foundation.h>

@class EShopGoodsDetailsRowEntity;


#pragma mark - 商品详情section实体
@interface EShopGoodsDetailsSectionEntity : NSObject

/// section标题名
@property (nonatomic, copy) NSString * section;
/// row(item数据)
@property (nonatomic, strong) NSArray <EShopGoodsDetailsRowEntity *>* rows;

@end


#pragma mark - 商品详情row实体
@interface EShopGoodsDetailsRowEntity : NSObject
/// cell类型描述
@property (nonatomic, copy) NSString * cellTypeIntro;
/// cell类型Id
@property (nonatomic, copy) NSString * cellTypeId;

@end
