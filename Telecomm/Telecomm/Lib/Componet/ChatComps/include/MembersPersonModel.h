//
//  MembersPersonModel.h
//  ESPChatComps
//
//  Created by 亦晴 on 2018/4/23.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PersonModel.h"
@interface MembersPersonModel : NSObject
+ (PersonModel *)createModelWithDic:(NSDictionary *)memberDict;

+ (NSArray<PersonModel *>*)getGroupMemberModelWithArray:(NSArray *)array;

@end
