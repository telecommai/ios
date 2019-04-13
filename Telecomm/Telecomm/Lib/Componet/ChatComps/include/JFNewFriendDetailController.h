//
//  JFNewFriendDetailController.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/3.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFNewFriendModel.h"
#import "JFUserModel.h"

@interface JFNewFriendDetailController : UIViewController

@property(nonatomic,strong) JFNewFriendModel *model;

-(instancetype)initWithModel:(JFNewFriendModel *)model;

@end
