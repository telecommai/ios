//
//  JFChainConsultModel.h
//  WalletManager
//
//  Created by 董艳武 on 2018/12/12.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProcesseModel :NSObject

@property (nonatomic , copy) NSString              * ethKey;
@property (nonatomic , copy) NSString              * processId;
@property (nonatomic , copy) NSString              * djbh;
@property (nonatomic , copy) NSString              * auditSignSecretBody;
@property (nonatomic , copy) NSString              * bankReplySignSecretBody;
@property (nonatomic , copy) NSString              * auditSignTime;
@property (nonatomic , copy) NSString              * enterpriseSignIpfsCode;
@property (nonatomic , copy) NSString              * bankReplySignIpfsCode;
@property (nonatomic , copy) NSString              * auditSignEthAddress;
@property (nonatomic , copy) NSString              * bankReplySignEthAddress;
@property (nonatomic , copy) NSString              * title;
@property (nonatomic , copy) NSString              * bankReplySignTime;
@property (nonatomic , copy) NSString              * createTime;
@property (nonatomic , copy) NSString              * enterpriseSignSecretBody;
@property (nonatomic , copy) NSString              * enterpriseSignTime;
@property (nonatomic , copy) NSString              * contentBody;
@property (nonatomic , copy) NSString              * auditSignIpfsCode;
@property (nonatomic , copy) NSString              * enterpriseSignEthAddress;
@property (nonatomic , assign) NSInteger           statu;
@property (nonatomic , strong) NSDictionary        * contentDict;
@property (nonatomic , copy) NSString              *bankRelayContent;

@end


@interface ProcessDataModel :NSObject
@property (nonatomic , copy) NSArray<ProcesseModel *>              * processing;
@property (nonatomic , copy) NSArray<ProcesseModel *>              * processed;

@end


@interface JFChainConsultModel : NSObject
@property (nonatomic , copy) NSString              * code;
@property (nonatomic , copy) NSString              * message;
@property (nonatomic , strong) ProcessDataModel    * data;
@end

NS_ASSUME_NONNULL_END
