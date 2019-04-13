//
//  EOSCreateController.h
//  WalletManager
//
//  Created by 王胜利 on 2018/8/1.
//  Copyright © 2018年 pansoft. All rights reserved.
//  帮助创建EOS钱包
//

#import "EFUIViewController.h"

@interface EOSCreateController : EFUIViewController

@property (nonatomic, copy) NSString *eosAccount;
@property (nonatomic, copy) NSString *ownerPublicKey;
@property (nonatomic, copy) NSString *activePublicKey;

@end
