//
//  JFChatSearchResultModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/11/6.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFChatSearchUserModel.h"
#import "JFChatSearchGroupModel.h"

@interface JFChatSearchResultModel : NSObject

@property(nonatomic,strong) NSArray<JFChatSearchUserModel *>    *users;
@property(nonatomic,strong) NSArray<JFChatSearchGroupModel *>   *groups;
@property(nonatomic,copy)   NSString                            *keywords;

@end

