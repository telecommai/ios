//
//  OptionSettingModel.h
//  ESPMobile
//
//  Created by fly on 14/12/24.
//  Copyright (c) 2014年 Javor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OptionSettingModel : NSObject

@property (nonatomic,copy) NSString *ip;

@property (nonatomic,copy) NSString *port;

@property (nonatomic,copy) NSString *server;

@property (nonatomic,copy) NSString *product;

@property (nonatomic,copy) NSString *DBName;

@property (nonatomic,copy) NSString *DBNO;

@property (nonatomic,copy) NSString *isAd;

@property (nonatomic,copy) NSString *isSafe;

@property (nonatomic,copy) NSString *isVpn;



+(instancetype) modelWithDict:(NSDictionary *) dict;

-(instancetype) initWithDict:(NSDictionary *) dict;
@end
