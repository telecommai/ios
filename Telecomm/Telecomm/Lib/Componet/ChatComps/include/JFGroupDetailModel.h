//
//  JFGroupDetailModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/27.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFGroupDetailManager.h"
#import "PersonModel.h"
#import "JFGroupAddressModel.h"

@interface JFGroupDetailModel : NSObject

/// cell的标题
@property(nonatomic,copy)       NSString                *title;

/// cell的内容
@property(nonatomic,copy)       NSString                *content;

/// 群成员
@property(nonatomic,copy)       NSArray<PersonModel *>  *members;

/// 群地址
@property(nonatomic,strong)     JFGroupAddressModel     *addressModel;

/// 类型
@property(nonatomic,assign)     JFGroupDetailType       type;


-(instancetype)initWithType:(JFGroupDetailType)type;

@end
