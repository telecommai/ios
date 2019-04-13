//
//  JFUserModel.h
//  ESPMobile
//
//  Created by 陈海鹏 on 2018/6/21.
//  Copyright © 2018年 Pansoft. All rights reserved.
//  用户模型(user表),与数据库中字段名称保持一致

#import <Foundation/Foundation.h>

@interface JFUserModel : NSObject

///用户Id
@property (nonatomic, assign)  NSInteger userId;
///用户名
@property (nonatomic, copy)    NSString *name;
///昵称
@property (nonatomic, copy)    NSString *nickName;
///备注名
@property (nonatomic, copy)    NSString *remarkName;
///头像
@property (nonatomic, copy)    NSString *avatar;
///邮箱
@property (nonatomic, copy)    NSString *email;
///电话号码
@property (nonatomic, copy)    NSString *mobilePhone;
///手机号码
@property (nonatomic, copy)    NSString *phone;
///性别
@property (nonatomic, copy)    NSString *sex;
///个性签名
@property (nonatomic, copy)    NSString *sigNature;
///钱包地址
@property (nonatomic, copy)    NSString *ethAddress;
///钱包公钥
@property (nonatomic, copy)    NSString *ethPublicKey;
///通讯公钥
@property (nonatomic, copy)    NSString *comPublicKey;

@property (nonatomic, copy)    NSString *sortLetters;

@property (nonatomic, assign)  NSInteger deptId;
///用户是否删除
@property (nonatomic, assign)  NSInteger enable;
///用户类型类型（0:好友 1:应用号）默认值为0
@property (nonatomic, assign)  NSInteger type;
/// 该用户在群组中的 身份
@property (nonatomic, assign) BOOL  isStrangeChat;

@end
