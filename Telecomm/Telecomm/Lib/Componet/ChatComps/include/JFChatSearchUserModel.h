//
//  JFChatSearchUserModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/11/6.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFChatSearchUserModel : NSObject

@property(nonatomic, copy) NSString              * comPublicKey;
@property(nonatomic, copy) NSString              * sigNature;
@property(nonatomic, copy) NSString              * nickName;
@property(nonatomic, copy) NSString              * fuserid;
@property(nonatomic, copy) NSString              * loginUserId;
@property(nonatomic, copy) NSString              * mobilephone;
@property(nonatomic, copy) NSString              * sex;
@property(nonatomic, copy) NSString              * ethPublicKey;
@property(nonatomic, copy) NSString              * enable;
@property(nonatomic, copy) NSString              * name;
@property(nonatomic, copy) NSString              * type;
@property(nonatomic, copy) NSString              * isBother;
@property(nonatomic, copy) NSString              * strangerChat;
@property(nonatomic, copy) NSString              * isTop;
@property(nonatomic, copy) NSString              * ethAddress;
@property(nonatomic, copy) NSString              * email;
@property(nonatomic, copy) NSString              * phone;
@property(nonatomic, copy) NSString              * avatar;
@property(nonatomic, copy) NSString              * remark;
@property(nonatomic, copy) NSString              * isImportent;
@property(nonatomic, copy) NSString              * userId;


@property(nonatomic, copy) NSString              * namePinyin;
@property(nonatomic, copy) NSString              * nameJianPin;
@property(nonatomic, copy) NSString              * nickNamePinyin;
@property(nonatomic, copy) NSString              * nickNameJianPin;
@property(nonatomic, copy) NSString              * remarkPinyin;
@property(nonatomic, copy) NSString              * remarkJianPin;


@property(nonatomic, copy) NSString              * searchkeys;

-(instancetype)initWithDict:(NSDictionary *)dict keywords:(NSString *)keywords;

+(NSArray<JFChatSearchUserModel *>*)searchUserResultArrayWithArray:(NSArray<NSDictionary *>*)dictArray keywords:(NSString *)keywords;

@end

NS_ASSUME_NONNULL_END
