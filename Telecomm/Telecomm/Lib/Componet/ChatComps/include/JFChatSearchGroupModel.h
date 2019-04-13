//
//  JFChatSearchGroupModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/11/6.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFChatSearchGroupModel : NSObject

@property(nonatomic , copy) NSString              * enable;
@property(nonatomic , copy) NSString              * noSpeak;
@property(nonatomic , copy) NSString              * groupType;
@property(nonatomic , copy) NSString              * loginUserId;
@property(nonatomic , copy) NSString              * avatar;
@property(nonatomic , copy) NSString              * isBother;
@property(nonatomic , copy) NSString              * createTime;
@property(nonatomic , copy) NSString              * createUserId;
@property(nonatomic , copy) NSString              * groupName;
@property(nonatomic , copy) NSString              * isTop;
@property(nonatomic , copy) NSString              * groupKey;
@property(nonatomic , copy) NSString              * groupId;
@property(nonatomic , copy) NSString              * groupIntro;

@property(nonatomic , copy) NSString              * groupNamePinYin;
@property(nonatomic , copy) NSString              * groupNameJianPin;


@property(nonatomic, copy) NSString              * searchkeys;

-(instancetype)initWithDict:(NSDictionary *)dict keywords:(NSString *)keywords;

+(NSArray<JFChatSearchGroupModel *>*)searchGroupResultArrayWithArray:(NSArray<NSDictionary *>*)dictArray keywords:(NSString *)keywords;

@end

NS_ASSUME_NONNULL_END
