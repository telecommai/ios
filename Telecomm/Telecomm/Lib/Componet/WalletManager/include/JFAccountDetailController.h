//
//  JFAccountDetailController.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/10.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFMasterAccountModel.h"

@interface JFAccountDetailController : UIViewController

@property(nonatomic,strong)  JFManagerAccountModel *model;

-(instancetype)initWithModel:(JFManagerAccountModel *)model;

@end
