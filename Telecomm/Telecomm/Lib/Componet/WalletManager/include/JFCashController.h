//
//  JFCashController.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BlockChainManager.h"
#import "JFMasterAccountModel.h"

@interface JFCashController : UIViewController

@property(nonatomic,strong)  JFManagerAccountModel *model;

-(instancetype)initWithModel:(JFManagerAccountModel *)model;


@end
