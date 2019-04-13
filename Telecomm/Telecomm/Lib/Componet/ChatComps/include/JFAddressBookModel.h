//
//  JFAddressBookModel.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
@class FriendsInforModel,UserInforModel;

@interface JFAddressBookModel : NSObject

@property (nonatomic,strong) FriendsInforModel *friendsInfor;
@property (nonatomic,strong) UserInforModel *userInfor;
///排序用的name
@property (nonatomic,copy) NSString *sortName;

@end


@interface FriendsInforModel : NSObject

/// avatar
@property (nonatomic,copy) NSString *avatar;

@property (nonatomic,copy) NSString *comPublicKey;
/// 邮箱
@property (nonatomic,copy) NSString *email;
//是否关注公众号
@property (nonatomic,copy) NSString *enable;
@property (nonatomic,copy) NSString *ethAddress;
@property (nonatomic,copy) NSString *ethPublicKey;
@property (nonatomic,copy) NSString *isBother;
@property (nonatomic,copy) NSString *isImportent;
@property (nonatomic,copy) NSString *isTop;
@property (nonatomic,copy) NSString *loginUserId;
/// 电话号码
@property (nonatomic,copy) NSString *mobilephone;
/// 用户名
@property (nonatomic,copy) NSString *name;
/// 昵称
@property (nonatomic,copy) NSString *nickName;
/// 电话
@property (nonatomic,copy) NSString *phone;
///备注名
@property (nonatomic,copy) NSString *remark;
/// 性别
@property (nonatomic,copy) NSString *sex;
///个性签名
@property (nonatomic,copy) NSString *sigNature;
@property (nonatomic,copy) NSString *strangerChat;
/// 类型
@property (nonatomic,copy) NSString *type;
/// 用户Id
@property (nonatomic,copy) NSString *userId;

@end


@interface UserInforModel : NSObject

@property (nonatomic,copy) NSString *avatar;
@property (nonatomic,copy) NSString *comPublicKey;
@property (nonatomic,copy) NSString *email;
@property (nonatomic,copy) NSString *enable;
@property (nonatomic,copy) NSString *ethAddress;
@property (nonatomic,copy) NSString *ethPublicKey;
@property (nonatomic,copy) NSString *mobilephone;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *nickName;
@property (nonatomic,copy) NSString *phone;
@property (nonatomic,copy) NSString *sex;
@property (nonatomic,copy) NSString *sigNature;
@property (nonatomic,copy) NSString *strangerChat;
@property (nonatomic,copy) NSString *type;
@property (nonatomic,copy) NSString *userId;

@end
