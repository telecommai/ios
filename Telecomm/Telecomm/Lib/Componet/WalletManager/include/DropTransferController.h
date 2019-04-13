//
//  DropTransferController.h
//  WalletManager
//
//  Created by StarLord on 2018/7/28.
//  Copyright © 2018年 pansoft. All rights reserved.
//

/*
 空投转账界面
 */

#import <UIKit/UIKit.h>

@interface DropTransferController : UIViewController

@property (nonatomic, copy) NSString *userWalletAddress;
@property (nonatomic, strong) NSDictionary *dropDetailDic;

@end
