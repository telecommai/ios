//
//  GroupAddressModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/29.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFGroupAddressModel : NSObject


@property(nonatomic,copy)           NSString    *latitude;

@property(nonatomic,copy)           NSString    *longitude;

/// 地址名称
@property(nonatomic,copy)           NSString    *name;

/// 具体地址
@property(nonatomic,copy)           NSString    *specific;

@property(nonatomic,strong)         NSNumber    *addressId;

-(instancetype)initWithDict:(NSDictionary *)dict;

+(NSArray<JFGroupAddressModel *> *)objectsWithArray:(NSArray *)array;

@end
