//
//  JFBlueToothDeviceModel.h
//  ACSBlueToothComps
//
//  Created by 董艳武 on 2019/3/4.
//  Copyright © 2019 董艳武. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFBlueToothDeviceModel : NSObject

@property(nonatomic,copy) NSString *uuid;
@property(nonatomic,copy) NSString *macId;
@property(nonatomic,copy) NSString *name;
@property(nonatomic,copy) NSString *iconUrl;
@property(nonatomic,strong) NSNumber *type;

@end

NS_ASSUME_NONNULL_END
