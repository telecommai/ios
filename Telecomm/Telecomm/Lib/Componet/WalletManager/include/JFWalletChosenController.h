//
//  JFWalletChosenController.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/9.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WalletModel.h"
@interface JFWalletChosenController : UIViewController

-(instancetype)initWith:(BlockChainModel *)model;

@property(nonatomic,strong) BlockChainModel *model;
@end
