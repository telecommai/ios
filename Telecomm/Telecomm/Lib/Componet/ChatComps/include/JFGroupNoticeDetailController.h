//
//  JFGroupNoticeDetailController.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFGroupNoticeModel.h"

@interface JFGroupNoticeDetailController : UIViewController

@property(nonatomic,strong) JFGroupNoticeModel *model;

-(instancetype)initWithModel:(JFGroupNoticeModel *)model;
@end
