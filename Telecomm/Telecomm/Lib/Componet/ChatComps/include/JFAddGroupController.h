//
//  JFAddGroupController.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFAddGroupController : UIViewController

-(instancetype)initWithGroupId:(NSString *)groupId;

@property(nonatomic,copy) NSString *groupId;

@end
