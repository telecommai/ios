//
//  JFChainConsultDetailModel.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/12/13.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JFChainConsultDetailChildModel,JFChainConsultCompanyModel;

NS_ASSUME_NONNULL_BEGIN

@interface JFChainConsultDetailModel : NSObject

@property (nonatomic , strong) NSArray <JFChainConsultDetailChildModel *> *bankDeposits;
@property (nonatomic , copy) NSString *auditId;
@property (nonatomic , copy) NSString *auditName;
@property (nonatomic , copy) NSString *bankId;
@property (nonatomic , copy) NSString *bankName;
@property (nonatomic , copy) NSString *companyId;
@property (nonatomic , copy) NSString *companyName;
@property (nonatomic , copy) NSString *djbh;
@property (nonatomic , copy) NSString *ID;
@property (nonatomic , copy) NSString *returnMen;
@property (nonatomic , copy) NSString *returnMenPhone;
@property (nonatomic , copy) NSString *returnMenEmail;
@property (nonatomic , copy) NSString *title;

@end

@interface JFChainConsultDetailChildModel : NSObject

@property (nonatomic , copy) NSString *account;
@property (nonatomic , copy) NSString *accountType;
@property (nonatomic , copy) NSString *balance;
@property (nonatomic , copy) NSString *currency;
@property (nonatomic , copy) NSString *djbh;
@property (nonatomic , copy) NSString *ID;
@property (nonatomic , copy) NSString *limit;
@property (nonatomic , copy) NSString *name;
@property (nonatomic , copy) NSString *note;
@property (nonatomic , copy) NSString *rate;
@property (nonatomic , copy) NSString *startEndDate;

@end

@interface JFChainConsultCompanyModel : NSObject

@property (nonatomic , copy) NSString *companyId;
@property (nonatomic , copy) NSString *companyName;
@property (nonatomic , copy) NSString *address;
@property (nonatomic , copy) NSString *phone;
@property (nonatomic , copy) NSString *type;
@property (nonatomic , copy) NSString *busUserId;
@property (nonatomic , copy) NSString *busUserPubKey;
@property (nonatomic , copy) NSString *busUserEthAddress;

/*
 {
 "code": "000000",
 "data": {
 "companyId": "30000001",
 "companyName": "招商银行济南高新支行",
 "address": "济南市高新区",
 "phone": " ",
 "type": 3,
 "busUserId": "212382",
 "busUserPubKey": " ",
 "busUserEthAddress": null
 },
 "message": ""
 }
 
 */

@end

NS_ASSUME_NONNULL_END
